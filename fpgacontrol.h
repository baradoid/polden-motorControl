#pragma once
#include <QObject>
#include <QTimer>
#include <QSerialPort>
#include <QQueue>
#include <QTime>
#include <QBitArray>

#include "stand.h"

typedef enum{
    standStateInitiating,
    standStateGoTerm,
    standStateError,
    standStateidle
} TStandState;

typedef struct{
    uint16_t ctrl;
    uint16_t div;
    uint16_t stepCount;
} TMotorMoveData;

typedef struct{
    QString udpMotorControlStr;
    uint32_t recvInterval;
} TUdpCommandString;

class FpgaControl : public QObject
{
    Q_OBJECT
public:
    explicit FpgaControl(QObject *parent = nullptr);
    QSerialPort serial;

    bool openPort(QString portName);
    bool portIsOpen(){ return serial.isOpen();}
    QSerialPort::SerialPortError getPortError(){ return serial.error(); }
    QString getPortName(){return serial.portName();}
    void closePort();

    void setMotorCount(int);
    void setMotorStateIdle();
    //void setMotorStateGoDown();
    void setMotorStateInitiate();
    void setMotorStateParking();
    void setFpgaFreq(quint32);
    void setDirInverse(bool e){bDirInvers=e;}
    qint32 getMotorAbsPosImp(int i) { return motorAbsolutePosCur[i];}
    void setTermSeekRange(quint32 tsr){termSeekRange = tsr;}

    void posReset();

    TStandState state(){return standState;};

    TMotorState mtState[MOTOR_CNT];
    quint32 fpgaFreq;
    quint32 comExchanges;

    quint32 bytesOnIter;
    qint32 recvInterval;
//    void addMotorCmd(int, DivPosDataStr&);
    quint32 udpCmdTimeoutBuffer;

    void clearCmdList();
    void addMotorCmd(int mn, int newPosImp, int msecsForMove);
    quint32 getCmdListLength(int id){return motorPosCmdData[id].length();}

    void addRawCmd(int id, quint32 d, quint32 st, int dir);

    bool moveErrCorrectionEnable;
    void addUdpMotorString(TUdpCommandString tucs);

private:
    int motorCount;
    QQueue<DivPosDataStr> motorPosCmdData[MOTOR_CNT];
    //bool bFreeToWrite[MOTOR_CNT];
    qint32 motorAbsolutePosCur[MOTOR_CNT];
    QBitArray bTermState;
    //quint32 lastCtrlTimeMsecs[MOTOR_CNT];
    quint32 lastDebugShowTime;
    bool bDirInvers;

    QTime exchInterval;
    QTimer timer, exchTimeoutTimer;
    TStandState standState;
    bool bLastAllOnTerms;




    void parseFPGAMsg(QByteArray ba);
    void freeToWrite(int i);
    void terminatorState(int i, bool bEna);
    void allFreeToWrite();
    void sendDivPos(int mi, DivPosDataStr &ds);

//    bool isBufferFree(qint32, int);
//    void setBufferNotFree(qint32&, int);
//    bool issTermEna(qint32, int);
    int maxDiv_debug, maxSteps_debug;
    quint32 termSeekRange;


    QList<TUdpCommandString> udpCmdList;

    QTimer udpCmdBufferTimer;


signals:
    void termStateChanged(int, bool);
    void errorOccured(const QString&);
    void initFinished();
    void standStateChanged(TStandState);
    void standParked();
    void udpMsg(const QString&);

private slots:
    void handleReadyRead();
    void handleSerialDataWritten(qint64 bytes);
    void handleComPortErrorOccurred(QSerialPort::SerialPortError);
    void handleExchTimeout();

    void handleUdpCmdCtrlTimeout();
};

