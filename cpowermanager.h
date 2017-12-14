#ifndef CPOWERMANAGER_H
#define CPOWERMANAGER_H

#include <QObject>
#include <QTimer>
#include "windows.h"

class CPowerManager : public QObject
{
    Q_OBJECT
public:
    explicit CPowerManager(QObject *parent = nullptr);

    bool isACLinePresent();
signals:
    void errorOccured(QString);
    void powerStatusChanged(bool ACLinePresent, int BatteryLifePercent, int BatteryLifeTime,  char BatteryFlag);

private slots:
    void handlePwrCheckTimer();

private:
    QTimer powerCheckTimer;
    char lastACLineStatus;
    bool AcLineStatus;

    SYSTEM_POWER_STATUS lastSysPwrStat;
};

#endif // CPOWERMANAGER_H
