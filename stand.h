#pragma once

typedef enum {idle, waitForAck, waitForFifoFree} TSendState;

#define MOTOR_CNT 10
#define FPGA_FREQ 24000000
typedef struct{
    QQueue<QString> contrStringQueue;
    bool bCmdOk;
    TSendState sendState;

} TMotorStr;

typedef enum{
    MT_IDLE,
    MT_GoDOWN,
    MT_GoUP
} TMotorState ;


typedef struct{
    int div;
    int steps;
    int dir;
    qint32 pos;
} DivPosDataStr;
