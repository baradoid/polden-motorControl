#include "cpowermanager.h"
#include <QDebug>

CPowerManager::CPowerManager(QObject *parent) :
    QObject(parent),
    lastACLineStatus(-1),
    AcLineStatus(false)
{

    connect(&powerCheckTimer, SIGNAL(timeout()),
            this, SLOT(handlePwrCheckTimer()));

    memset(&lastSysPwrStat, 0, sizeof(SYSTEM_POWER_STATUS));
    powerCheckTimer.setInterval(500);
    powerCheckTimer.setSingleShot(false);
    powerCheckTimer.start();

}


bool CPowerManager::isACLinePresent()
{
    return AcLineStatus;
}

void CPowerManager::handlePwrCheckTimer()
{
    SYSTEM_POWER_STATUS sysPwrStat;
    bool ret = GetSystemPowerStatus(&sysPwrStat);
    if(ret){
        if(memcmp(&lastSysPwrStat, &sysPwrStat, sizeof(SYSTEM_POWER_STATUS)) != 0){
            lastSysPwrStat = sysPwrStat;
            AcLineStatus = (sysPwrStat.ACLineStatus != 0);
            //qDebug() << ret;
            //qDebug() << sysPwrStat.ACLineStatus << sysPwrStat.BatteryFlag << sysPwrStat.BatteryFullLifeTime;
            //qDebug() << sysPwrStat.BatteryLifePercent << sysPwrStat.BatteryLifeTime;
            emit powerStatusChanged((sysPwrStat.ACLineStatus != 0),
                                    sysPwrStat.BatteryLifePercent,
                                    sysPwrStat.BatteryLifeTime,
                                    sysPwrStat.BatteryFlag);
        }
    }
    else{
        QString msg;
        msg.sprintf("GetSystemPowerStatus fail with 0x%lx", GetLastError());
        emit errorOccured(msg);
    }

}
