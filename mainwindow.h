#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QNetworkDatagram>
#include <QQueue>
#include <QTimer>
#include <QSlider>
#include <QMap>
#include <QSettings>
//#include <qwt_plot_marker.h>
#include <QLineEdit>
#include <QSlider>
#include <QTime>
#include <QCheckBox>
//#include <uartthread.h>
#include <QComboBox>
#include <QPushButton>
#include <QGroupBox>
#include "fpgacontrol.h"
//#include "leadshinedebugport.h"
//#include "sonoffmanager.h"

//#include <qwt_plot_curve.h>
#include "cpowermanager.h"

#include "stand.h"
namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonComOpen_clicked();

    void handleReadPendingDatagrams();
    void stateChanged(QAbstractSocket::SocketState socketState);

    void on_pushButton_refreshCom_clicked();
    void on_pushButtonClear_clicked();
    void dataProcess100msTimeOut();
   // void processUartExchange();
    //void waitForFifoFreeFifo();

    void response(QString str);

    //void on_pushMoveDownState_clicked();
    void on_pushBUttonToIdle_clicked();
    void on_pushButtonGotoPEriodState_clicked();
    void on_pushButtonPosReset_clicked();
    //void on_pushTestData_clicked();

    void on_tabWidget_tabBarClicked(int index);
    void on_pushMoveUp_clicked();
    void on_pushMoveDown_clicked();

    void uiUpdateTimerSlot();

    void on_pushButtonUdpOpenClose_clicked();

    void on_pushButtonInitiate_clicked();
    void on_pushButtonGoZero_clicked();

//    void on_pushButtonTest_clicked();
//    void on_pushButtonTest1_clicked();
//    void on_pushButtonTest2_clicked();

    void on_lineEdit_maxHeightMM_editingFinished();
    void on_lineEdit_MaxHeightImp_editingFinished();
    void on_lineEdit_mmPerRot_editingFinished();
    void on_lineEdit_vmax_mmsec_editingFinished();

    void on_lineEditMotorCount_editingFinished();    

    void fpgaCtrlTermState(int, bool);
    void handleErrorOccured(const QString&);
    void handleStandStateChanged(TStandState);
    void handleStandParked();

    void on_checkBoxDirInverse_clicked();



    //void on_pushButtonSonoffAPSet_clicked();

    void handleDriverOk(int id);
    void handleDriverErr(int id, QString &msg);
    void handleDriverTimeout(int id);

    void moveUp(int);
    void moveDown(int);

    void handlePowerStatusChanged(bool ACLinePresent, int BatteryLifePercent, int BatteryLifeTime, char BatteryFlag);

    void on_pushButtonParking_clicked();

    void on_lineEditTermSeekRangeMM_editingFinished();

    void on_tabWidget_currentChanged(int index);

    void on_checkBoxMoveErrCorrection_clicked();

   // void on_lineEdit_ImpPerRot_textChanged(const QString &arg1);

private:
    //quint32 motorCount;

    Ui::MainWindow *ui;

    QUdpSocket *udpSocket;

    QList<QSlider*> slList;
    QTimer dataProcess100msTimer;
    QTimer uiUpdateTimer;

    quint8 curMotorSendIdx;

//    QList<QwtPlot*> plotList;
//    QList<QwtPlotCurve*> posCurveList, velCurveList;
//    QList<QPolygonF> polyPoslist, polyVellist;
//    QList<QwtPlotMarker*> markrlist;
    int markerXPos;
    //QwtPlot *d_plot;
    //QwtPlotCurve *curve;
    //QPolygonF points;
    int x, xUdpRecv;
    void createPlot(QString name);

    void calcCmd(DivPosDataStr &ds, int delta, quint32 curmSecs, quint32 msecsForMove, int debMn);
    void parseCmdMultiMotorStr(QString, quint32 udpDgRecvInterval);

    QMap<int, int> xMap;
    QMap<int, QString> lastCmdMap;

    //void convertPosModeToVelMode(QString);
    QMap<int, int> lastPosMap;
    //QQueue<QString> motorVelCmdStrings;

    void graphReset();
    QSettings settings;

    QList<QLineEdit*> timeStatLE;
    QList<QSlider*> timeStatSlider;

    QList<QSlider*> absPosSlider;
    QList<QLineEdit*> absPosLineEdit;
    QList<QLineEdit*> stateLineEdit;
    //int timeShiftMaxPos, timeShiftMaxNeg;

    QTime usbConnectionTime, udpConnectionTime;
    QList<QCheckBox*> termCheckBoxList;
    QList<QLineEdit*> euqueLineEdit;
    quint32 dataGramCnt;

    void udpServerOpen();
    void udpServerClose();
    bool isUdpServerOpen();

    int mmToImp(int mm);
    bool speedTrig[MOTOR_CNT];

    void handleSliderReleased(int id, int newPos);

    void createDebugSerialPortInterface();
    void createMainInterface();

    void postMessage(QString str);
    void postUDPMessage(QString str);

    void addUdpMotorString(QString& str);

    QList<QComboBox*> debPortCmbBxList;
    QList<QPushButton*> debPortpbList;
    //QList<QSerialPort*> debSerialPortList;
    QList<QGroupBox*> debPortGbList;
    QList<QLineEdit*> debPortStatusLeList;
    QList<QLineEdit*> debPortStatusMainLeList;
    void pushDebugComPortOpen(int id);
    void comPortClose(int id);
    //void handleComPortErrorOccured(int id, QSerialPort::SerialPortError error);
    //void handleReadyRead(int id);

    QPalette *paletteGrey, *paletteRed, *paletteGreen;

    QList<QWidget*> motorStatWidgetList;

    QList<bool*> motorRespRecvdList;

    quint32 lastUdpDatagrammRecvd;
    QList<quint32> udpDgrmRecvIntervalList;   
    QString lastUdpCommandString;

    quint32 lastDebugShowTime;

    FpgaControl fpgaCtrl;
    //LeadshineDebugPort lsDebugPort;
    //SonoffManager *sonoffManager;
    CPowerManager powerManager;



    void lockSettings(bool);

    void appendToLog(QString&);
    void appendToUDPLog(QString &str);
};


#endif // MAINWINDOW_H

