/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comComboBoxUsbMain;
    QPushButton *pushButtonComOpen;
    QPushButton *pushButton_refreshCom;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonUdpOpenClose;
    QTabWidget *tabWidget;
    QWidget *tabMainStat;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_15;
    QWidget *widget_20;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *lineEditUSBConnectionTime;
    QWidget *widget_22;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_4;
    QLineEdit *lineEditComExchanges;
    QWidget *widget_23;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_5;
    QLineEdit *lineEditBytesOnIter;
    QWidget *widget_24;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_14;
    QLineEdit *lineEditRecvInterval;
    QGroupBox *groupBoxMain;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_28;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_7;
    QLineEdit *lineEditUdpState;
    QLineEdit *lineEditUDPConnectionTime;
    QWidget *widget_26;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_6;
    QLineEdit *lineEditDataGramCnt;
    QGroupBox *groupBox_3;
    QLineEdit *lineEditDriversState;
    QGroupBox *groupBox_9;
    QLineEdit *lineEditStandState;
    QGroupBox *groupBox_10;
    QLineEdit *lineEditPowerState;
    QWidget *tabSettings;
    QGroupBox *groupBox_5;
    QLabel *label_8;
    QLineEdit *lineEdit_ImpPerRot;
    QLabel *label_9;
    QLineEdit *lineEdit_mmPerRot;
    QLineEdit *lineEdit_maxHeightMM;
    QLabel *label_10;
    QLineEdit *lineEdit_MaxHeightImp;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_vmax_mmsec;
    QLabel *label_15;
    QLineEdit *lineEditTermSeekRangeMM;
    QLabel *label_17;
    QLineEdit *lineEdit_StepLenImp;
    QGroupBox *groupBox_6;
    QLabel *label_3;
    QLineEdit *lineEditMotorCount;
    QCheckBox *checkBoxDirInverse;
    QCheckBox *checkBoxUdpInitEnable;
    QCheckBox *checkBoxInitOnStart;
    QGroupBox *groupBox_7;
    QLineEdit *lineEditMinVal;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditUDPMaxVal;
    QCheckBox *checkBoxPrintUDPData;
    QLabel *label_16;
    QLineEdit *lineEditUDPDelay;
    QGroupBox *groupBox_8;
    QLabel *label_13;
    QLabel *labelCompileTime;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *term1;
    QCheckBox *term2;
    QCheckBox *term3;
    QCheckBox *term4;
    QCheckBox *term5;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *term6;
    QCheckBox *term7;
    QCheckBox *term8;
    QCheckBox *term9;
    QCheckBox *term10;
    QCheckBox *checkBoxDriversStateControl;
    QCheckBox *checkBoxLockSettings;
    QCheckBox *checkBoxShutdownOnPowerLoss;
    QCheckBox *checkBoxMoveErrCorrection;
    QWidget *tabDebugPort;
    QWidget *widgetComPorts;
    QWidget *widget_27;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonParking;
    QPushButton *pushButtonInitiate;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushMoveDown;
    QPushButton *pushMoveUp;
    QPushButton *pushButtonGoZero;
    QWidget *widget_29;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *pushButtonPosReset;
    QPushButton *pushBUttonToIdle;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonGotoPEriodState;
    QCheckBox *checkBoxDebugComPrint;
    QCheckBox *checkBoxCycle;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextUDP;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1083, 923);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMaximumSize(QSize(500, 16777215));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, -1, 0);
        comComboBoxUsbMain = new QComboBox(widget_4);
        comComboBoxUsbMain->setObjectName(QString::fromUtf8("comComboBoxUsbMain"));
        comComboBoxUsbMain->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(comComboBoxUsbMain);

        pushButtonComOpen = new QPushButton(widget_4);
        pushButtonComOpen->setObjectName(QString::fromUtf8("pushButtonComOpen"));

        horizontalLayout_3->addWidget(pushButtonComOpen);

        pushButton_refreshCom = new QPushButton(widget_4);
        pushButton_refreshCom->setObjectName(QString::fromUtf8("pushButton_refreshCom"));

        horizontalLayout_3->addWidget(pushButton_refreshCom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonUdpOpenClose = new QPushButton(widget_4);
        pushButtonUdpOpenClose->setObjectName(QString::fromUtf8("pushButtonUdpOpenClose"));

        horizontalLayout_3->addWidget(pushButtonUdpOpenClose);


        verticalLayout_2->addWidget(widget_4);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabMainStat = new QWidget();
        tabMainStat->setObjectName(QString::fromUtf8("tabMainStat"));
        groupBox_2 = new QGroupBox(tabMainStat);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(600, 30, 153, 121));
        verticalLayout_15 = new QVBoxLayout(groupBox_2);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        widget_20 = new QWidget(groupBox_2);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        horizontalLayout_13 = new QHBoxLayout(widget_20);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        lineEditUSBConnectionTime = new QLineEdit(widget_20);
        lineEditUSBConnectionTime->setObjectName(QString::fromUtf8("lineEditUSBConnectionTime"));
        lineEditUSBConnectionTime->setAlignment(Qt::AlignCenter);
        lineEditUSBConnectionTime->setReadOnly(true);

        horizontalLayout_13->addWidget(lineEditUSBConnectionTime);


        verticalLayout_15->addWidget(widget_20);

        widget_22 = new QWidget(groupBox_2);
        widget_22->setObjectName(QString::fromUtf8("widget_22"));
        horizontalLayout_12 = new QHBoxLayout(widget_22);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget_22);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_12->addWidget(label_4);

        lineEditComExchanges = new QLineEdit(widget_22);
        lineEditComExchanges->setObjectName(QString::fromUtf8("lineEditComExchanges"));
        lineEditComExchanges->setAlignment(Qt::AlignCenter);
        lineEditComExchanges->setReadOnly(true);

        horizontalLayout_12->addWidget(lineEditComExchanges);


        verticalLayout_15->addWidget(widget_22);

        widget_23 = new QWidget(groupBox_2);
        widget_23->setObjectName(QString::fromUtf8("widget_23"));
        horizontalLayout_14 = new QHBoxLayout(widget_23);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_23);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_14->addWidget(label_5);

        lineEditBytesOnIter = new QLineEdit(widget_23);
        lineEditBytesOnIter->setObjectName(QString::fromUtf8("lineEditBytesOnIter"));
        lineEditBytesOnIter->setAlignment(Qt::AlignCenter);
        lineEditBytesOnIter->setReadOnly(true);

        horizontalLayout_14->addWidget(lineEditBytesOnIter);


        verticalLayout_15->addWidget(widget_23);

        widget_24 = new QWidget(groupBox_2);
        widget_24->setObjectName(QString::fromUtf8("widget_24"));
        horizontalLayout_15 = new QHBoxLayout(widget_24);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(widget_24);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_15->addWidget(label_14);

        lineEditRecvInterval = new QLineEdit(widget_24);
        lineEditRecvInterval->setObjectName(QString::fromUtf8("lineEditRecvInterval"));
        lineEditRecvInterval->setAlignment(Qt::AlignCenter);
        lineEditRecvInterval->setReadOnly(true);

        horizontalLayout_15->addWidget(lineEditRecvInterval);


        verticalLayout_15->addWidget(widget_24);

        groupBoxMain = new QGroupBox(tabMainStat);
        groupBoxMain->setObjectName(QString::fromUtf8("groupBoxMain"));
        groupBoxMain->setGeometry(QRect(10, 10, 571, 301));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxMain->sizePolicy().hasHeightForWidth());
        groupBoxMain->setSizePolicy(sizePolicy);
        groupBox_4 = new QGroupBox(tabMainStat);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(600, 170, 151, 111));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_28 = new QWidget(groupBox_4);
        widget_28->setObjectName(QString::fromUtf8("widget_28"));
        horizontalLayout_19 = new QHBoxLayout(widget_28);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(-1, 0, -1, 0);
        label_7 = new QLabel(widget_28);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_19->addWidget(label_7);

        lineEditUdpState = new QLineEdit(widget_28);
        lineEditUdpState->setObjectName(QString::fromUtf8("lineEditUdpState"));
        lineEditUdpState->setAlignment(Qt::AlignCenter);
        lineEditUdpState->setReadOnly(true);

        horizontalLayout_19->addWidget(lineEditUdpState);


        verticalLayout_3->addWidget(widget_28);

        lineEditUDPConnectionTime = new QLineEdit(groupBox_4);
        lineEditUDPConnectionTime->setObjectName(QString::fromUtf8("lineEditUDPConnectionTime"));
        lineEditUDPConnectionTime->setAlignment(Qt::AlignCenter);
        lineEditUDPConnectionTime->setReadOnly(true);

        verticalLayout_3->addWidget(lineEditUDPConnectionTime);

        widget_26 = new QWidget(groupBox_4);
        widget_26->setObjectName(QString::fromUtf8("widget_26"));
        horizontalLayout_17 = new QHBoxLayout(widget_26);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(-1, 0, -1, 0);
        label_6 = new QLabel(widget_26);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_17->addWidget(label_6);

        lineEditDataGramCnt = new QLineEdit(widget_26);
        lineEditDataGramCnt->setObjectName(QString::fromUtf8("lineEditDataGramCnt"));
        lineEditDataGramCnt->setAlignment(Qt::AlignCenter);
        lineEditDataGramCnt->setReadOnly(true);

        horizontalLayout_17->addWidget(lineEditDataGramCnt);


        verticalLayout_3->addWidget(widget_26);

        groupBox_3 = new QGroupBox(tabMainStat);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(760, 30, 151, 71));
        lineEditDriversState = new QLineEdit(groupBox_3);
        lineEditDriversState->setObjectName(QString::fromUtf8("lineEditDriversState"));
        lineEditDriversState->setGeometry(QRect(10, 30, 121, 20));
        lineEditDriversState->setAlignment(Qt::AlignCenter);
        lineEditDriversState->setReadOnly(true);
        groupBox_9 = new QGroupBox(tabMainStat);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(760, 140, 120, 71));
        lineEditStandState = new QLineEdit(groupBox_9);
        lineEditStandState->setObjectName(QString::fromUtf8("lineEditStandState"));
        lineEditStandState->setGeometry(QRect(10, 30, 91, 20));
        lineEditStandState->setAlignment(Qt::AlignCenter);
        groupBox_10 = new QGroupBox(tabMainStat);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(760, 220, 120, 51));
        lineEditPowerState = new QLineEdit(groupBox_10);
        lineEditPowerState->setObjectName(QString::fromUtf8("lineEditPowerState"));
        lineEditPowerState->setGeometry(QRect(10, 20, 101, 20));
        lineEditPowerState->setAlignment(Qt::AlignCenter);
        lineEditPowerState->setReadOnly(true);
        tabWidget->addTab(tabMainStat, QString());
        tabSettings = new QWidget();
        tabSettings->setObjectName(QString::fromUtf8("tabSettings"));
        groupBox_5 = new QGroupBox(tabSettings);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 20, 211, 231));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 20, 47, 13));
        lineEdit_ImpPerRot = new QLineEdit(groupBox_5);
        lineEdit_ImpPerRot->setObjectName(QString::fromUtf8("lineEdit_ImpPerRot"));
        lineEdit_ImpPerRot->setGeometry(QRect(110, 20, 81, 20));
        lineEdit_ImpPerRot->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 50, 47, 13));
        lineEdit_mmPerRot = new QLineEdit(groupBox_5);
        lineEdit_mmPerRot->setObjectName(QString::fromUtf8("lineEdit_mmPerRot"));
        lineEdit_mmPerRot->setGeometry(QRect(110, 50, 81, 20));
        lineEdit_mmPerRot->setAlignment(Qt::AlignCenter);
        lineEdit_maxHeightMM = new QLineEdit(groupBox_5);
        lineEdit_maxHeightMM->setObjectName(QString::fromUtf8("lineEdit_maxHeightMM"));
        lineEdit_maxHeightMM->setGeometry(QRect(110, 80, 81, 20));
        lineEdit_maxHeightMM->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 80, 91, 16));
        lineEdit_MaxHeightImp = new QLineEdit(groupBox_5);
        lineEdit_MaxHeightImp->setObjectName(QString::fromUtf8("lineEdit_MaxHeightImp"));
        lineEdit_MaxHeightImp->setGeometry(QRect(110, 110, 81, 20));
        lineEdit_MaxHeightImp->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 110, 91, 16));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 140, 91, 16));
        lineEdit_vmax_mmsec = new QLineEdit(groupBox_5);
        lineEdit_vmax_mmsec->setObjectName(QString::fromUtf8("lineEdit_vmax_mmsec"));
        lineEdit_vmax_mmsec->setGeometry(QRect(110, 140, 81, 20));
        lineEdit_vmax_mmsec->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 160, 91, 31));
        lineEditTermSeekRangeMM = new QLineEdit(groupBox_5);
        lineEditTermSeekRangeMM->setObjectName(QString::fromUtf8("lineEditTermSeekRangeMM"));
        lineEditTermSeekRangeMM->setGeometry(QRect(110, 170, 81, 20));
        lineEditTermSeekRangeMM->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 200, 91, 21));
        lineEdit_StepLenImp = new QLineEdit(groupBox_5);
        lineEdit_StepLenImp->setObjectName(QString::fromUtf8("lineEdit_StepLenImp"));
        lineEdit_StepLenImp->setGeometry(QRect(110, 200, 81, 20));
        lineEdit_StepLenImp->setAlignment(Qt::AlignCenter);
        groupBox_6 = new QGroupBox(tabSettings);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(260, 20, 151, 121));
        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 20, 91, 16));
        lineEditMotorCount = new QLineEdit(groupBox_6);
        lineEditMotorCount->setObjectName(QString::fromUtf8("lineEditMotorCount"));
        lineEditMotorCount->setGeometry(QRect(100, 20, 41, 20));
        lineEditMotorCount->setAlignment(Qt::AlignCenter);
        checkBoxDirInverse = new QCheckBox(groupBox_6);
        checkBoxDirInverse->setObjectName(QString::fromUtf8("checkBoxDirInverse"));
        checkBoxDirInverse->setGeometry(QRect(10, 50, 121, 17));
        checkBoxDirInverse->setLayoutDirection(Qt::LeftToRight);
        checkBoxUdpInitEnable = new QCheckBox(groupBox_6);
        checkBoxUdpInitEnable->setObjectName(QString::fromUtf8("checkBoxUdpInitEnable"));
        checkBoxUdpInitEnable->setGeometry(QRect(10, 70, 131, 17));
        checkBoxInitOnStart = new QCheckBox(groupBox_6);
        checkBoxInitOnStart->setObjectName(QString::fromUtf8("checkBoxInitOnStart"));
        checkBoxInitOnStart->setGeometry(QRect(10, 90, 101, 17));
        groupBox_7 = new QGroupBox(tabSettings);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(510, 20, 141, 141));
        lineEditMinVal = new QLineEdit(groupBox_7);
        lineEditMinVal->setObjectName(QString::fromUtf8("lineEditMinVal"));
        lineEditMinVal->setGeometry(QRect(50, 20, 71, 20));
        lineEditMinVal->setAlignment(Qt::AlignCenter);
        label = new QLabel(groupBox_7);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 20, 23));
        label_2 = new QLabel(groupBox_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 20, 21));
        lineEditUDPMaxVal = new QLineEdit(groupBox_7);
        lineEditUDPMaxVal->setObjectName(QString::fromUtf8("lineEditUDPMaxVal"));
        lineEditUDPMaxVal->setGeometry(QRect(50, 51, 71, 20));
        lineEditUDPMaxVal->setAlignment(Qt::AlignCenter);
        checkBoxPrintUDPData = new QCheckBox(groupBox_7);
        checkBoxPrintUDPData->setObjectName(QString::fromUtf8("checkBoxPrintUDPData"));
        checkBoxPrintUDPData->setGeometry(QRect(20, 80, 61, 20));
        label_16 = new QLabel(groupBox_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 110, 51, 20));
        lineEditUDPDelay = new QLineEdit(groupBox_7);
        lineEditUDPDelay->setObjectName(QString::fromUtf8("lineEditUDPDelay"));
        lineEditUDPDelay->setGeometry(QRect(70, 110, 51, 20));
        lineEditUDPDelay->setAlignment(Qt::AlignCenter);
        groupBox_8 = new QGroupBox(tabSettings);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(20, 270, 151, 51));
        label_13 = new QLabel(groupBox_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 20, 71, 16));
        labelCompileTime = new QLabel(groupBox_8);
        labelCompileTime->setObjectName(QString::fromUtf8("labelCompileTime"));
        labelCompileTime->setGeometry(QRect(80, 20, 101, 16));
        groupBox = new QGroupBox(tabSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 260, 213, 121));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_5 = new QWidget(groupBox);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_6 = new QHBoxLayout(widget_5);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        term1 = new QCheckBox(widget_5);
        term1->setObjectName(QString::fromUtf8("term1"));
        term1->setCheckable(true);

        horizontalLayout_6->addWidget(term1);

        term2 = new QCheckBox(widget_5);
        term2->setObjectName(QString::fromUtf8("term2"));
        term2->setCheckable(true);

        horizontalLayout_6->addWidget(term2);

        term3 = new QCheckBox(widget_5);
        term3->setObjectName(QString::fromUtf8("term3"));
        term3->setCheckable(true);

        horizontalLayout_6->addWidget(term3);

        term4 = new QCheckBox(widget_5);
        term4->setObjectName(QString::fromUtf8("term4"));
        term4->setCheckable(true);

        horizontalLayout_6->addWidget(term4);

        term5 = new QCheckBox(widget_5);
        term5->setObjectName(QString::fromUtf8("term5"));
        term5->setCheckable(true);

        horizontalLayout_6->addWidget(term5);


        verticalLayout_4->addWidget(widget_5);

        widget_9 = new QWidget(groupBox);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_7 = new QHBoxLayout(widget_9);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        term6 = new QCheckBox(widget_9);
        term6->setObjectName(QString::fromUtf8("term6"));
        term6->setCheckable(true);

        horizontalLayout_7->addWidget(term6);

        term7 = new QCheckBox(widget_9);
        term7->setObjectName(QString::fromUtf8("term7"));
        term7->setCheckable(true);

        horizontalLayout_7->addWidget(term7);

        term8 = new QCheckBox(widget_9);
        term8->setObjectName(QString::fromUtf8("term8"));
        term8->setCheckable(true);

        horizontalLayout_7->addWidget(term8);

        term9 = new QCheckBox(widget_9);
        term9->setObjectName(QString::fromUtf8("term9"));
        term9->setCheckable(true);

        horizontalLayout_7->addWidget(term9);

        term10 = new QCheckBox(widget_9);
        term10->setObjectName(QString::fromUtf8("term10"));
        term10->setCheckable(true);

        horizontalLayout_7->addWidget(term10);


        verticalLayout_4->addWidget(widget_9);

        checkBoxDriversStateControl = new QCheckBox(tabSettings);
        checkBoxDriversStateControl->setObjectName(QString::fromUtf8("checkBoxDriversStateControl"));
        checkBoxDriversStateControl->setGeometry(QRect(250, 150, 211, 17));
        checkBoxLockSettings = new QCheckBox(tabSettings);
        checkBoxLockSettings->setObjectName(QString::fromUtf8("checkBoxLockSettings"));
        checkBoxLockSettings->setGeometry(QRect(250, 170, 221, 17));
        checkBoxShutdownOnPowerLoss = new QCheckBox(tabSettings);
        checkBoxShutdownOnPowerLoss->setObjectName(QString::fromUtf8("checkBoxShutdownOnPowerLoss"));
        checkBoxShutdownOnPowerLoss->setGeometry(QRect(250, 190, 351, 17));
        checkBoxMoveErrCorrection = new QCheckBox(tabSettings);
        checkBoxMoveErrCorrection->setObjectName(QString::fromUtf8("checkBoxMoveErrCorrection"));
        checkBoxMoveErrCorrection->setGeometry(QRect(250, 210, 341, 17));
        tabWidget->addTab(tabSettings, QString());
        tabDebugPort = new QWidget();
        tabDebugPort->setObjectName(QString::fromUtf8("tabDebugPort"));
        widgetComPorts = new QWidget(tabDebugPort);
        widgetComPorts->setObjectName(QString::fromUtf8("widgetComPorts"));
        widgetComPorts->setGeometry(QRect(80, 70, 671, 201));
        tabWidget->addTab(tabDebugPort, QString());

        verticalLayout_2->addWidget(tabWidget);

        widget_27 = new QWidget(centralWidget);
        widget_27->setObjectName(QString::fromUtf8("widget_27"));
        widget_27->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_18 = new QHBoxLayout(widget_27);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_2);

        pushButtonParking = new QPushButton(widget_27);
        pushButtonParking->setObjectName(QString::fromUtf8("pushButtonParking"));
        pushButtonParking->setMinimumSize(QSize(150, 0));
        pushButtonParking->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_18->addWidget(pushButtonParking);

        pushButtonInitiate = new QPushButton(widget_27);
        pushButtonInitiate->setObjectName(QString::fromUtf8("pushButtonInitiate"));
        pushButtonInitiate->setMinimumSize(QSize(150, 0));
        pushButtonInitiate->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_18->addWidget(pushButtonInitiate);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(widget_27);

        widget_6 = new QWidget(centralWidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushMoveDown = new QPushButton(widget_6);
        pushMoveDown->setObjectName(QString::fromUtf8("pushMoveDown"));
        pushMoveDown->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(pushMoveDown);

        pushMoveUp = new QPushButton(widget_6);
        pushMoveUp->setObjectName(QString::fromUtf8("pushMoveUp"));

        horizontalLayout_4->addWidget(pushMoveUp);

        pushButtonGoZero = new QPushButton(widget_6);
        pushButtonGoZero->setObjectName(QString::fromUtf8("pushButtonGoZero"));

        horizontalLayout_4->addWidget(pushButtonGoZero);


        verticalLayout_2->addWidget(widget_6);

        widget_29 = new QWidget(centralWidget);
        widget_29->setObjectName(QString::fromUtf8("widget_29"));
        horizontalLayout_20 = new QHBoxLayout(widget_29);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        pushButtonPosReset = new QPushButton(widget_29);
        pushButtonPosReset->setObjectName(QString::fromUtf8("pushButtonPosReset"));

        horizontalLayout_20->addWidget(pushButtonPosReset);

        pushBUttonToIdle = new QPushButton(widget_29);
        pushBUttonToIdle->setObjectName(QString::fromUtf8("pushBUttonToIdle"));

        horizontalLayout_20->addWidget(pushBUttonToIdle);

        pushButtonClear = new QPushButton(widget_29);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        horizontalLayout_20->addWidget(pushButtonClear);

        pushButtonGotoPEriodState = new QPushButton(widget_29);
        pushButtonGotoPEriodState->setObjectName(QString::fromUtf8("pushButtonGotoPEriodState"));

        horizontalLayout_20->addWidget(pushButtonGotoPEriodState);

        checkBoxDebugComPrint = new QCheckBox(widget_29);
        checkBoxDebugComPrint->setObjectName(QString::fromUtf8("checkBoxDebugComPrint"));

        horizontalLayout_20->addWidget(checkBoxDebugComPrint);

        checkBoxCycle = new QCheckBox(widget_29);
        checkBoxCycle->setObjectName(QString::fromUtf8("checkBoxCycle"));

        horizontalLayout_20->addWidget(checkBoxCycle);


        verticalLayout_2->addWidget(widget_29);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(16777215, 150));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, 0);
        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(0, 0));
        plainTextEdit->setReadOnly(true);

        horizontalLayout->addWidget(plainTextEdit);

        plainTextUDP = new QPlainTextEdit(widget);
        plainTextUDP->setObjectName(QString::fromUtf8("plainTextUDP"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plainTextUDP->sizePolicy().hasHeightForWidth());
        plainTextUDP->setSizePolicy(sizePolicy1);
        plainTextUDP->setMinimumSize(QSize(0, 0));
        plainTextUDP->setMaximumSize(QSize(16777215, 16777215));
        plainTextUDP->setReadOnly(true);

        horizontalLayout->addWidget(plainTextUDP);


        verticalLayout_2->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1083, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Motor-control", nullptr));
        pushButtonComOpen->setText(QApplication::translate("MainWindow", "open", nullptr));
        pushButton_refreshCom->setText(QApplication::translate("MainWindow", "refresh", nullptr));
        pushButtonUdpOpenClose->setText(QApplication::translate("MainWindow", "UDP Open", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "FPGA", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\237\320\260\320\272\320\265\321\202\320\276\320\262", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "bytesOnIter", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "recvInterval", nullptr));
        groupBoxMain->setTitle(QApplication::translate("MainWindow", "\320\237\320\276 \320\277\321\200\320\270\320\262\320\276\320\264\320\260\320\274", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "UDP", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "state", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\224\320\263\321\200\320\274", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\321\200\320\260\320\271\320\262\320\265\321\200\320\276\320\262", nullptr));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \321\215\320\273.\321\201\320\265\321\202\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMainStat), QApplication::translate("MainWindow", "mainStat", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\321\205\320\260\320\275\320\270\320\272\320\260", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\270\320\274\320\277/\320\276\320\261", nullptr));
        lineEdit_ImpPerRot->setInputMask(QString());
        lineEdit_ImpPerRot->setText(QApplication::translate("MainWindow", "4000", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\274\320\274/\320\276\320\261", nullptr));
        lineEdit_mmPerRot->setInputMask(QString());
        lineEdit_mmPerRot->setText(QApplication::translate("MainWindow", "10", nullptr));
        lineEdit_maxHeightMM->setInputMask(QString());
        lineEdit_maxHeightMM->setText(QApplication::translate("MainWindow", "100", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\320\274\320\260\320\272\321\201 \320\262\321\213\321\201\320\276\321\202\320\260, \320\274\320\274", nullptr));
        lineEdit_MaxHeightImp->setInputMask(QString());
        lineEdit_MaxHeightImp->setText(QApplication::translate("MainWindow", "200000", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\320\274\320\260\320\272\321\201 \320\262\321\213\321\201\320\276\321\202\320\260, \320\270\320\274\320\277", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Vmax, \320\274\320\274/\321\201", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 \321\202\320\265\321\201\321\202\320\276\320\262\320\276\320\263\320\276\n"
"\320\277\321\200\320\276\321\205\320\276\320\264\320\260, \320\274\320\274", nullptr));
        lineEditTermSeekRangeMM->setInputMask(QApplication::translate("MainWindow", "99", nullptr));
        lineEditTermSeekRangeMM->setText(QApplication::translate("MainWindow", "20", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 \321\210\320\260\320\263\320\260, \320\270\320\274\320\277", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\320\255\320\221\320\243", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\274\320\276\321\202\320\276\321\200\320\276\320\262:", nullptr));
        lineEditMotorCount->setInputMask(QApplication::translate("MainWindow", "90", nullptr));
        checkBoxDirInverse->setText(QApplication::translate("MainWindow", "\320\270\320\275\320\262\320\265\321\200\321\201\320\270\321\217 dir", nullptr));
        checkBoxUdpInitEnable->setText(QApplication::translate("MainWindow", "UDP \320\270\320\275\320\270\321\206\320\270\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        checkBoxInitOnStart->setText(QApplication::translate("MainWindow", "init on start", nullptr));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "UDP", nullptr));
        lineEditMinVal->setInputMask(QApplication::translate("MainWindow", "9", nullptr));
        lineEditMinVal->setText(QApplication::translate("MainWindow", "0", nullptr));
        label->setText(QApplication::translate("MainWindow", "min:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "max", nullptr));
        lineEditUDPMaxVal->setInputMask(QString());
        lineEditUDPMaxVal->setText(QApplication::translate("MainWindow", "1000", nullptr));
        checkBoxPrintUDPData->setText(QApplication::translate("MainWindow", "print", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "delay, \320\274\321\201:", nullptr));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "About", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "compile time:", nullptr));
        labelCompileTime->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\232\320\276\320\275\321\206\320\265\320\262\320\270\320\272\320\270", nullptr));
        term1->setText(QApplication::translate("MainWindow", "1", nullptr));
        term2->setText(QApplication::translate("MainWindow", "2", nullptr));
        term3->setText(QApplication::translate("MainWindow", "3", nullptr));
        term4->setText(QApplication::translate("MainWindow", "4", nullptr));
        term5->setText(QApplication::translate("MainWindow", "5", nullptr));
        term6->setText(QApplication::translate("MainWindow", "6", nullptr));
        term7->setText(QApplication::translate("MainWindow", "7", nullptr));
        term8->setText(QApplication::translate("MainWindow", "8", nullptr));
        term9->setText(QApplication::translate("MainWindow", "9", nullptr));
        term10->setText(QApplication::translate("MainWindow", "10", nullptr));
        checkBoxDriversStateControl->setText(QApplication::translate("MainWindow", "\320\272\320\276\320\275\321\202\321\200\320\276\320\273\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\276\321\210\320\270\320\261\320\272\320\270 \320\264\321\200\320\260\320\271\320\262\320\265\321\200\320\276\320\262", nullptr));
        checkBoxLockSettings->setText(QApplication::translate("MainWindow", "\320\261\320\273\320\276\320\272\320\270\321\200\320\276\320\262\320\272\320\260 \320\274\320\265\321\205\320\260\320\275\320\270\321\207\320\265\320\272\320\270\321\205 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262", nullptr));
        checkBoxShutdownOnPowerLoss->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\260\321\202\321\214 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200 \320\277\320\276\321\201\320\273\320\265 \320\276\321\202\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217 \320\277\320\270\321\202\320\260\320\275\320\270\321\217 \320\270 \320\277\320\260\321\200\320\272\320\276\320\262\320\272\320\270", nullptr));
        checkBoxMoveErrCorrection->setText(QApplication::translate("MainWindow", "\320\264\320\270\320\275\320\260\320\274\320\270\321\207\320\265\321\201\320\272\320\270 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\276\321\210\320\270\320\261\320\272\321\203 \320\277\320\276 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\321\216", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSettings), QApplication::translate("MainWindow", "settings", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDebugPort), QApplication::translate("MainWindow", "debugPort", nullptr));
        pushButtonParking->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\272\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButtonInitiate->setText(QApplication::translate("MainWindow", "\320\230\320\275\320\270\321\206\320\270\320\260\320\273\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushMoveDown->setText(QApplication::translate("MainWindow", "moveDown", nullptr));
        pushMoveUp->setText(QApplication::translate("MainWindow", "moveUp", nullptr));
        pushButtonGoZero->setText(QApplication::translate("MainWindow", "go zero", nullptr));
        pushButtonPosReset->setText(QApplication::translate("MainWindow", "pos reset", nullptr));
        pushBUttonToIdle->setText(QApplication::translate("MainWindow", "to idle", nullptr));
        pushButtonClear->setText(QApplication::translate("MainWindow", "clear queue", nullptr));
        pushButtonGotoPEriodState->setText(QApplication::translate("MainWindow", "to Period", nullptr));
        checkBoxDebugComPrint->setText(QApplication::translate("MainWindow", "debugComPrint", nullptr));
        checkBoxCycle->setText(QApplication::translate("MainWindow", "cycle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
