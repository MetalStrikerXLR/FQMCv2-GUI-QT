/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ltankwidget.h"
#include "rtankwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *FuelSys_frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    LTankWidget *LTank;
    QVBoxLayout *verticalLayout;
    QProgressBar *TankFWD;
    QProgressBar *TankMID;
    QProgressBar *TankREAR;
    RTankWidget *RTank;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_20;
    QLabel *LTank_label;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_16;
    QLCDNumber *LT_vol_display;
    QLCDNumber *LT_per_display;
    QVBoxLayout *verticalLayout_17;
    QLabel *LTank_vol_label;
    QLabel *LTank_per_label;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_24;
    QLabel *RTank_label;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_15;
    QLCDNumber *RT_vol_display;
    QLCDNumber *RT_per_display;
    QVBoxLayout *verticalLayout_13;
    QLabel *RTank_vol_label;
    QLabel *RTank_per_label;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_35;
    QVBoxLayout *verticalLayout_34;
    QLabel *Fwd_tank;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_10;
    QLCDNumber *FWD_vol;
    QLCDNumber *FWD_per;
    QVBoxLayout *verticalLayout_14;
    QLabel *FWD_vol_label;
    QLabel *FWD_per_label;
    QVBoxLayout *verticalLayout_26;
    QLabel *Mid_tank;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_11;
    QLCDNumber *MID_vol;
    QLCDNumber *MID_per;
    QVBoxLayout *verticalLayout_18;
    QLabel *MID_vol_label;
    QLabel *MID_per_label;
    QVBoxLayout *verticalLayout_25;
    QLabel *Rear_tank;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_12;
    QLCDNumber *REAR_vol;
    QLCDNumber *REAR_per;
    QVBoxLayout *verticalLayout_19;
    QLabel *REAR_vol_label;
    QLabel *REAR_per_label;
    QFrame *FuelDetail_frame;
    QWidget *layoutWidget4;
    QVBoxLayout *Layout2;
    QVBoxLayout *ConnectionRetry_layout;
    QHBoxLayout *Connection_layout;
    QLabel *Connection_staus_Label;
    QLabel *Connection_Status;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Retrybutton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_28;
    QFrame *line_2;
    QLabel *Mass1_label_7;
    QFrame *line_3;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *Mass1_label;
    QLabel *Mass2_label;
    QLabel *Mass3_label;
    QLabel *Mass4_label;
    QLabel *Mass5_label;
    QVBoxLayout *verticalLayout_7;
    QLCDNumber *Mass1_display;
    QLCDNumber *Mass2_display;
    QLCDNumber *Mass3_display;
    QLCDNumber *Mass4_display;
    QLCDNumber *Mass5_display;
    QVBoxLayout *verticalLayout_2;
    QLabel *Mass1_label_2;
    QLabel *Mass1_label_6;
    QLabel *Mass1_label_3;
    QLabel *Mass1_label_4;
    QLabel *Mass1_label_5;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *Lvl1_label;
    QLabel *Lvl2_label;
    QLabel *Lvl3_label;
    QLabel *Lvl3_label_3;
    QLabel *Lvl3_label_2;
    QVBoxLayout *verticalLayout_9;
    QLCDNumber *Lvl1_display;
    QLCDNumber *Lvl2_display;
    QLCDNumber *Lvl3_display;
    QLCDNumber *Lvl4_display;
    QLCDNumber *Lvl5_display;
    QVBoxLayout *verticalLayout_27;
    QLabel *Lvl1_label_2;
    QLabel *Lvl1_label_3;
    QLabel *Lvl1_label_4;
    QLabel *Lvl1_label_5;
    QLabel *Lvl1_label_6;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *Temp;
    QSpacerItem *horizontalSpacer_11;
    QLCDNumber *Temp_display;
    QLabel *Temp_2;
    QFrame *FuelSatus_frame;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_22;
    QVBoxLayout *verticalLayout_5;
    QLabel *fuel_av_label;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_3;
    QLCDNumber *Fuel_av_display;
    QLabel *Fuel_av_vol_label;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *fuel_con_label;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLCDNumber *fuel_con_display;
    QLabel *fuel_con_vol;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_21;
    QLabel *ffr_label;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLCDNumber *ffr_display;
    QLabel *ffr_rate_label;
    QSpacerItem *horizontalSpacer_8;
    QFrame *PressureMonitorinControl_frame;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_29;
    QFrame *line_4;
    QLabel *Mass1_label_8;
    QFrame *line_5;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_30;
    QFrame *line_6;
    QLabel *Mass1_label_9;
    QFrame *line_7;
    QWidget *layoutWidget10;
    QVBoxLayout *verticalLayout_42;
    QHBoxLayout *horizontalLayout_25;
    QVBoxLayout *verticalLayout_38;
    QLabel *T1_T3_pump_but_label;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *T1_T3_Pump_button;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_39;
    QLabel *T3_T1_but_label;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_12;
    QCheckBox *T3_T1_Pump_button;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_24;
    QVBoxLayout *verticalLayout_41;
    QLabel *LT_MID_but_label;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_14;
    QCheckBox *LT_MID_vale_button;
    QSpacerItem *horizontalSpacer_15;
    QVBoxLayout *verticalLayout_40;
    QLabel *RT_MID_but_label;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_16;
    QCheckBox *RT_MID_valve_button;
    QSpacerItem *horizontalSpacer_17;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *p1_gauge_layout;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *p2_gauge_layout;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *p3_gauge_layout;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *p4_gauge_layout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_27;
    QVBoxLayout *verticalLayout_33;
    QLabel *Pump_P1;
    QLabel *Pump_P2;
    QLabel *Pump_P3;
    QLabel *M2_x;
    QHBoxLayout *horizontalLayout_26;
    QVBoxLayout *verticalLayout_23;
    QLCDNumber *PP1_display;
    QLCDNumber *PP2_display;
    QLCDNumber *PP3_display;
    QLCDNumber *EPP_display;
    QVBoxLayout *verticalLayout_31;
    QLabel *Lvl1_label_7;
    QLabel *Lvl1_label_8;
    QLabel *Lvl1_label_9;
    QLabel *Lvl1_label_10;
    QLabel *Lvl1_label_11;
    QFrame *Pump_Valve_Status_frame;
    QWidget *layoutWidget11;
    QVBoxLayout *verticalLayout_36;
    QHBoxLayout *horizontalLayout_17;
    QLabel *LT_MID_valve_label;
    QLabel *Valve_status1;
    QHBoxLayout *horizontalLayout_16;
    QLabel *RT_MID_valve_label;
    QLabel *Valve_status2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *AUX_valve1;
    QLabel *Valve_status3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *AUX_valve2;
    QLabel *Valve_status4;
    QWidget *layoutWidget12;
    QVBoxLayout *verticalLayout_37;
    QHBoxLayout *horizontalLayout_18;
    QLabel *T1_T3_pump;
    QLabel *Pump_status1;
    QHBoxLayout *horizontalLayout_19;
    QLabel *T3_T1_pump;
    QLabel *Pump_status2;
    QFrame *Log_frame;
    QLabel *datetime_label;
    QFrame *seperation_line;
    QTextBrowser *Log_Display;
    QFrame *line;
    QFrame *WarningInfo_frame;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_32;
    QFrame *line_10;
    QLabel *Mass1_label_11;
    QFrame *line_11;
    QLabel *red_1;
    QLabel *green_1;
    QLabel *red_2;
    QLabel *red_3;
    QLabel *red_4;
    QLabel *red_5;
    QLabel *red_6;
    QLabel *green_2;
    QLabel *green_3;
    QLabel *green_4;
    QLabel *green_5;
    QLabel *green_6;
    QLabel *Fuel_status_label;
    QLabel *ENG_L_status_label;
    QLabel *Ven_L_status_label;
    QLabel *T1_T3PR_label;
    QLabel *T3_T1PR_label;
    QLabel *Temp_status;
    QLabel *fuel_status_ind;
    QLabel *P4_status_ind;
    QLabel *P3_status_ind;
    QLabel *P1_status_ind;
    QLabel *P2_status_ind;
    QLabel *temp_status_ind;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1080, 1920);
        MainWindow->setMinimumSize(QSize(1080, 1920));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Desktop/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(7.000000000000000);
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        FuelSys_frame = new QFrame(centralWidget);
        FuelSys_frame->setObjectName(QString::fromUtf8("FuelSys_frame"));
        FuelSys_frame->setGeometry(QRect(10, 10, 681, 491));
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        FuelSys_frame->setFont(font);
        FuelSys_frame->setAutoFillBackground(false);
        FuelSys_frame->setFrameShape(QFrame::NoFrame);
        FuelSys_frame->setFrameShadow(QFrame::Plain);
        layoutWidget = new QWidget(FuelSys_frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 438, 309));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        LTank = new LTankWidget(layoutWidget);
        LTank->setObjectName(QString::fromUtf8("LTank"));
        LTank->setMinimumSize(QSize(151, 151));
        LTank->setMaximumSize(QSize(151, 151));

        horizontalLayout_8->addWidget(LTank);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TankFWD = new QProgressBar(layoutWidget);
        TankFWD->setObjectName(QString::fromUtf8("TankFWD"));
        TankFWD->setMinimumSize(QSize(120, 121));
        TankFWD->setMaximumSize(QSize(120, 121));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(85, 85, 85, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush3(QColor(0, 255, 0, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush4(QColor(0, 255, 0, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush5(QColor(0, 255, 0, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        TankFWD->setPalette(palette);
        TankFWD->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);\n"
"font: bold;\n"
"font-size: 11px;"));
        TankFWD->setMaximum(100);
        TankFWD->setValue(0);
        TankFWD->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        TankFWD->setTextVisible(true);
        TankFWD->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(TankFWD);

        TankMID = new QProgressBar(layoutWidget);
        TankMID->setObjectName(QString::fromUtf8("TankMID"));
        TankMID->setMinimumSize(QSize(120, 81));
        TankMID->setMaximumSize(QSize(120, 81));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush6(QColor(0, 255, 0, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush7(QColor(0, 255, 0, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush8(QColor(0, 255, 0, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        TankMID->setPalette(palette1);
        TankMID->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);\n"
"font: bold;\n"
"font-size: 11px;"));
        TankMID->setMaximum(100);
        TankMID->setValue(0);
        TankMID->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        TankMID->setTextVisible(true);
        TankMID->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(TankMID);

        TankREAR = new QProgressBar(layoutWidget);
        TankREAR->setObjectName(QString::fromUtf8("TankREAR"));
        TankREAR->setMinimumSize(QSize(120, 91));
        TankREAR->setMaximumSize(QSize(120, 91));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush9(QColor(0, 255, 0, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        QBrush brush10(QColor(0, 255, 0, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        QBrush brush11(QColor(0, 255, 0, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        TankREAR->setPalette(palette2);
        TankREAR->setContextMenuPolicy(Qt::DefaultContextMenu);
        TankREAR->setAcceptDrops(false);
        TankREAR->setLayoutDirection(Qt::LeftToRight);
        TankREAR->setAutoFillBackground(false);
        TankREAR->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);\n"
"font: bold;\n"
"font-size: 11px;"));
        TankREAR->setMaximum(100);
        TankREAR->setValue(0);
        TankREAR->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        TankREAR->setTextVisible(true);
        TankREAR->setOrientation(Qt::Vertical);
        TankREAR->setTextDirection(QProgressBar::BottomToTop);

        verticalLayout->addWidget(TankREAR);


        horizontalLayout_8->addLayout(verticalLayout);

        RTank = new RTankWidget(layoutWidget);
        RTank->setObjectName(QString::fromUtf8("RTank"));
        RTank->setMinimumSize(QSize(151, 151));
        RTank->setMaximumSize(QSize(151, 151));

        horizontalLayout_8->addWidget(RTank);

        layoutWidget1 = new QWidget(FuelSys_frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 350, 161, 111));
        verticalLayout_20 = new QVBoxLayout(layoutWidget1);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        LTank_label = new QLabel(layoutWidget1);
        LTank_label->setObjectName(QString::fromUtf8("LTank_label"));
        LTank_label->setFont(font);
        LTank_label->setScaledContents(true);

        verticalLayout_20->addWidget(LTank_label);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        LT_vol_display = new QLCDNumber(layoutWidget1);
        LT_vol_display->setObjectName(QString::fromUtf8("LT_vol_display"));
        LT_vol_display->setMinimumSize(QSize(81, 31));
        LT_vol_display->setMaximumSize(QSize(81, 31));
        LT_vol_display->setFont(font);
        LT_vol_display->setFrameShape(QFrame::NoFrame);
        LT_vol_display->setSmallDecimalPoint(true);
        LT_vol_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_16->addWidget(LT_vol_display);

        LT_per_display = new QLCDNumber(layoutWidget1);
        LT_per_display->setObjectName(QString::fromUtf8("LT_per_display"));
        LT_per_display->setMinimumSize(QSize(81, 31));
        LT_per_display->setMaximumSize(QSize(81, 31));
        LT_per_display->setFont(font);
        LT_per_display->setFrameShape(QFrame::NoFrame);
        LT_per_display->setSmallDecimalPoint(true);
        LT_per_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_16->addWidget(LT_per_display);


        horizontalLayout_7->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        LTank_vol_label = new QLabel(layoutWidget1);
        LTank_vol_label->setObjectName(QString::fromUtf8("LTank_vol_label"));
        LTank_vol_label->setFont(font);

        verticalLayout_17->addWidget(LTank_vol_label);

        LTank_per_label = new QLabel(layoutWidget1);
        LTank_per_label->setObjectName(QString::fromUtf8("LTank_per_label"));
        LTank_per_label->setFont(font);

        verticalLayout_17->addWidget(LTank_per_label);


        horizontalLayout_7->addLayout(verticalLayout_17);


        verticalLayout_20->addLayout(horizontalLayout_7);

        layoutWidget2 = new QWidget(FuelSys_frame);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(300, 350, 161, 111));
        verticalLayout_24 = new QVBoxLayout(layoutWidget2);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        RTank_label = new QLabel(layoutWidget2);
        RTank_label->setObjectName(QString::fromUtf8("RTank_label"));
        RTank_label->setFont(font);
        RTank_label->setScaledContents(true);

        verticalLayout_24->addWidget(RTank_label);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        RT_vol_display = new QLCDNumber(layoutWidget2);
        RT_vol_display->setObjectName(QString::fromUtf8("RT_vol_display"));
        RT_vol_display->setMinimumSize(QSize(81, 31));
        RT_vol_display->setMaximumSize(QSize(81, 31));
        RT_vol_display->setFont(font);
        RT_vol_display->setFrameShape(QFrame::NoFrame);
        RT_vol_display->setSmallDecimalPoint(true);
        RT_vol_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_15->addWidget(RT_vol_display);

        RT_per_display = new QLCDNumber(layoutWidget2);
        RT_per_display->setObjectName(QString::fromUtf8("RT_per_display"));
        RT_per_display->setMinimumSize(QSize(81, 31));
        RT_per_display->setMaximumSize(QSize(81, 31));
        RT_per_display->setFont(font);
        RT_per_display->setFrameShape(QFrame::NoFrame);
        RT_per_display->setSmallDecimalPoint(true);
        RT_per_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_15->addWidget(RT_per_display);


        horizontalLayout_9->addLayout(verticalLayout_15);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        RTank_vol_label = new QLabel(layoutWidget2);
        RTank_vol_label->setObjectName(QString::fromUtf8("RTank_vol_label"));
        RTank_vol_label->setFont(font);

        verticalLayout_13->addWidget(RTank_vol_label);

        RTank_per_label = new QLabel(layoutWidget2);
        RTank_per_label->setObjectName(QString::fromUtf8("RTank_per_label"));
        RTank_per_label->setFont(font);

        verticalLayout_13->addWidget(RTank_per_label);


        horizontalLayout_9->addLayout(verticalLayout_13);


        verticalLayout_24->addLayout(horizontalLayout_9);

        layoutWidget3 = new QWidget(FuelSys_frame);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(500, 20, 151, 341));
        verticalLayout_35 = new QVBoxLayout(layoutWidget3);
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setContentsMargins(11, 11, 11, 11);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        verticalLayout_35->setContentsMargins(0, 0, 0, 0);
        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        Fwd_tank = new QLabel(layoutWidget3);
        Fwd_tank->setObjectName(QString::fromUtf8("Fwd_tank"));
        Fwd_tank->setFont(font);
        Fwd_tank->setAutoFillBackground(false);
        Fwd_tank->setScaledContents(true);

        verticalLayout_34->addWidget(Fwd_tank);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        FWD_vol = new QLCDNumber(layoutWidget3);
        FWD_vol->setObjectName(QString::fromUtf8("FWD_vol"));
        FWD_vol->setMinimumSize(QSize(81, 31));
        FWD_vol->setMaximumSize(QSize(81, 31));
        FWD_vol->setFont(font);
        FWD_vol->setFrameShape(QFrame::NoFrame);
        FWD_vol->setSmallDecimalPoint(true);
        FWD_vol->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_10->addWidget(FWD_vol);

        FWD_per = new QLCDNumber(layoutWidget3);
        FWD_per->setObjectName(QString::fromUtf8("FWD_per"));
        FWD_per->setMinimumSize(QSize(81, 31));
        FWD_per->setMaximumSize(QSize(81, 31));
        FWD_per->setFont(font);
        FWD_per->setFrameShape(QFrame::NoFrame);
        FWD_per->setSmallDecimalPoint(true);
        FWD_per->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_10->addWidget(FWD_per);


        horizontalLayout_12->addLayout(verticalLayout_10);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        FWD_vol_label = new QLabel(layoutWidget3);
        FWD_vol_label->setObjectName(QString::fromUtf8("FWD_vol_label"));
        FWD_vol_label->setFont(font);

        verticalLayout_14->addWidget(FWD_vol_label);

        FWD_per_label = new QLabel(layoutWidget3);
        FWD_per_label->setObjectName(QString::fromUtf8("FWD_per_label"));
        FWD_per_label->setFont(font);

        verticalLayout_14->addWidget(FWD_per_label);


        horizontalLayout_12->addLayout(verticalLayout_14);


        verticalLayout_34->addLayout(horizontalLayout_12);


        verticalLayout_35->addLayout(verticalLayout_34);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        Mid_tank = new QLabel(layoutWidget3);
        Mid_tank->setObjectName(QString::fromUtf8("Mid_tank"));
        Mid_tank->setFont(font);
        Mid_tank->setScaledContents(true);

        verticalLayout_26->addWidget(Mid_tank);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        MID_vol = new QLCDNumber(layoutWidget3);
        MID_vol->setObjectName(QString::fromUtf8("MID_vol"));
        MID_vol->setMinimumSize(QSize(81, 31));
        MID_vol->setMaximumSize(QSize(81, 31));
        MID_vol->setFont(font);
        MID_vol->setFrameShape(QFrame::NoFrame);
        MID_vol->setSmallDecimalPoint(true);
        MID_vol->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_11->addWidget(MID_vol);

        MID_per = new QLCDNumber(layoutWidget3);
        MID_per->setObjectName(QString::fromUtf8("MID_per"));
        MID_per->setMinimumSize(QSize(81, 31));
        MID_per->setMaximumSize(QSize(81, 31));
        MID_per->setFont(font);
        MID_per->setFrameShape(QFrame::NoFrame);
        MID_per->setSmallDecimalPoint(true);
        MID_per->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_11->addWidget(MID_per);


        horizontalLayout_11->addLayout(verticalLayout_11);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        MID_vol_label = new QLabel(layoutWidget3);
        MID_vol_label->setObjectName(QString::fromUtf8("MID_vol_label"));
        MID_vol_label->setFont(font);

        verticalLayout_18->addWidget(MID_vol_label);

        MID_per_label = new QLabel(layoutWidget3);
        MID_per_label->setObjectName(QString::fromUtf8("MID_per_label"));
        MID_per_label->setFont(font);

        verticalLayout_18->addWidget(MID_per_label);


        horizontalLayout_11->addLayout(verticalLayout_18);


        verticalLayout_26->addLayout(horizontalLayout_11);


        verticalLayout_35->addLayout(verticalLayout_26);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        Rear_tank = new QLabel(layoutWidget3);
        Rear_tank->setObjectName(QString::fromUtf8("Rear_tank"));
        Rear_tank->setFont(font);
        Rear_tank->setScaledContents(true);

        verticalLayout_25->addWidget(Rear_tank);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        REAR_vol = new QLCDNumber(layoutWidget3);
        REAR_vol->setObjectName(QString::fromUtf8("REAR_vol"));
        REAR_vol->setMinimumSize(QSize(81, 31));
        REAR_vol->setMaximumSize(QSize(81, 31));
        REAR_vol->setFont(font);
        REAR_vol->setFrameShape(QFrame::NoFrame);
        REAR_vol->setSmallDecimalPoint(true);
        REAR_vol->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_12->addWidget(REAR_vol);

        REAR_per = new QLCDNumber(layoutWidget3);
        REAR_per->setObjectName(QString::fromUtf8("REAR_per"));
        REAR_per->setMinimumSize(QSize(81, 31));
        REAR_per->setMaximumSize(QSize(81, 31));
        REAR_per->setFont(font);
        REAR_per->setFrameShape(QFrame::NoFrame);
        REAR_per->setSmallDecimalPoint(true);
        REAR_per->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_12->addWidget(REAR_per);


        horizontalLayout_10->addLayout(verticalLayout_12);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        REAR_vol_label = new QLabel(layoutWidget3);
        REAR_vol_label->setObjectName(QString::fromUtf8("REAR_vol_label"));
        REAR_vol_label->setFont(font);

        verticalLayout_19->addWidget(REAR_vol_label);

        REAR_per_label = new QLabel(layoutWidget3);
        REAR_per_label->setObjectName(QString::fromUtf8("REAR_per_label"));
        REAR_per_label->setFont(font);

        verticalLayout_19->addWidget(REAR_per_label);


        horizontalLayout_10->addLayout(verticalLayout_19);


        verticalLayout_25->addLayout(horizontalLayout_10);


        verticalLayout_35->addLayout(verticalLayout_25);

        FuelDetail_frame = new QFrame(centralWidget);
        FuelDetail_frame->setObjectName(QString::fromUtf8("FuelDetail_frame"));
        FuelDetail_frame->setGeometry(QRect(10, 510, 681, 371));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FuelDetail_frame->sizePolicy().hasHeightForWidth());
        FuelDetail_frame->setSizePolicy(sizePolicy);
        FuelDetail_frame->setMaximumSize(QSize(16777215, 16777215));
        FuelDetail_frame->setAutoFillBackground(false);
        FuelDetail_frame->setFrameShape(QFrame::NoFrame);
        FuelDetail_frame->setFrameShadow(QFrame::Plain);
        layoutWidget4 = new QWidget(FuelDetail_frame);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 280, 401, 81));
        Layout2 = new QVBoxLayout(layoutWidget4);
        Layout2->setSpacing(6);
        Layout2->setContentsMargins(11, 11, 11, 11);
        Layout2->setObjectName(QString::fromUtf8("Layout2"));
        Layout2->setContentsMargins(0, 0, 0, 0);
        ConnectionRetry_layout = new QVBoxLayout();
        ConnectionRetry_layout->setSpacing(6);
        ConnectionRetry_layout->setObjectName(QString::fromUtf8("ConnectionRetry_layout"));
        Connection_layout = new QHBoxLayout();
        Connection_layout->setSpacing(6);
        Connection_layout->setObjectName(QString::fromUtf8("Connection_layout"));
        Connection_staus_Label = new QLabel(layoutWidget4);
        Connection_staus_Label->setObjectName(QString::fromUtf8("Connection_staus_Label"));
        Connection_staus_Label->setFont(font);

        Connection_layout->addWidget(Connection_staus_Label);

        Connection_Status = new QLabel(layoutWidget4);
        Connection_Status->setObjectName(QString::fromUtf8("Connection_Status"));
        Connection_Status->setFont(font);

        Connection_layout->addWidget(Connection_Status);


        ConnectionRetry_layout->addLayout(Connection_layout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Retrybutton = new QPushButton(layoutWidget4);
        Retrybutton->setObjectName(QString::fromUtf8("Retrybutton"));

        horizontalLayout->addWidget(Retrybutton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        ConnectionRetry_layout->addLayout(horizontalLayout);


        Layout2->addLayout(ConnectionRetry_layout);

        layoutWidget5 = new QWidget(FuelDetail_frame);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 10, 661, 51));
        verticalLayout_28 = new QVBoxLayout(layoutWidget5);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setContentsMargins(11, 11, 11, 11);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        line_2 = new QFrame(layoutWidget5);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_28->addWidget(line_2);

        Mass1_label_7 = new QLabel(layoutWidget5);
        Mass1_label_7->setObjectName(QString::fromUtf8("Mass1_label_7"));
        Mass1_label_7->setFont(font);

        verticalLayout_28->addWidget(Mass1_label_7);

        line_3 = new QFrame(layoutWidget5);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_28->addWidget(line_3);

        layoutWidget6 = new QWidget(FuelDetail_frame);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 70, 248, 183));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Mass1_label = new QLabel(layoutWidget6);
        Mass1_label->setObjectName(QString::fromUtf8("Mass1_label"));
        Mass1_label->setFont(font);

        verticalLayout_4->addWidget(Mass1_label);

        Mass2_label = new QLabel(layoutWidget6);
        Mass2_label->setObjectName(QString::fromUtf8("Mass2_label"));
        Mass2_label->setFont(font);

        verticalLayout_4->addWidget(Mass2_label);

        Mass3_label = new QLabel(layoutWidget6);
        Mass3_label->setObjectName(QString::fromUtf8("Mass3_label"));
        Mass3_label->setFont(font);

        verticalLayout_4->addWidget(Mass3_label);

        Mass4_label = new QLabel(layoutWidget6);
        Mass4_label->setObjectName(QString::fromUtf8("Mass4_label"));
        Mass4_label->setFont(font);

        verticalLayout_4->addWidget(Mass4_label);

        Mass5_label = new QLabel(layoutWidget6);
        Mass5_label->setObjectName(QString::fromUtf8("Mass5_label"));
        Mass5_label->setFont(font);

        verticalLayout_4->addWidget(Mass5_label);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        Mass1_display = new QLCDNumber(layoutWidget6);
        Mass1_display->setObjectName(QString::fromUtf8("Mass1_display"));
        Mass1_display->setEnabled(true);
        Mass1_display->setMinimumSize(QSize(81, 31));
        Mass1_display->setMaximumSize(QSize(81, 31));
        Mass1_display->setFont(font);
        Mass1_display->setFrameShape(QFrame::NoFrame);
        Mass1_display->setFrameShadow(QFrame::Plain);
        Mass1_display->setSmallDecimalPoint(true);
        Mass1_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_7->addWidget(Mass1_display);

        Mass2_display = new QLCDNumber(layoutWidget6);
        Mass2_display->setObjectName(QString::fromUtf8("Mass2_display"));
        Mass2_display->setEnabled(true);
        Mass2_display->setMinimumSize(QSize(81, 31));
        Mass2_display->setMaximumSize(QSize(81, 31));
        Mass2_display->setFont(font);
        Mass2_display->setFrameShape(QFrame::NoFrame);
        Mass2_display->setFrameShadow(QFrame::Plain);
        Mass2_display->setSmallDecimalPoint(true);
        Mass2_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_7->addWidget(Mass2_display);

        Mass3_display = new QLCDNumber(layoutWidget6);
        Mass3_display->setObjectName(QString::fromUtf8("Mass3_display"));
        Mass3_display->setEnabled(true);
        Mass3_display->setMinimumSize(QSize(81, 31));
        Mass3_display->setMaximumSize(QSize(81, 31));
        Mass3_display->setFont(font);
        Mass3_display->setFrameShape(QFrame::NoFrame);
        Mass3_display->setFrameShadow(QFrame::Plain);
        Mass3_display->setSmallDecimalPoint(true);
        Mass3_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_7->addWidget(Mass3_display);

        Mass4_display = new QLCDNumber(layoutWidget6);
        Mass4_display->setObjectName(QString::fromUtf8("Mass4_display"));
        Mass4_display->setEnabled(true);
        Mass4_display->setMinimumSize(QSize(81, 31));
        Mass4_display->setMaximumSize(QSize(81, 31));
        Mass4_display->setFont(font);
        Mass4_display->setFrameShape(QFrame::NoFrame);
        Mass4_display->setFrameShadow(QFrame::Plain);
        Mass4_display->setSmallDecimalPoint(true);
        Mass4_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_7->addWidget(Mass4_display);

        Mass5_display = new QLCDNumber(layoutWidget6);
        Mass5_display->setObjectName(QString::fromUtf8("Mass5_display"));
        Mass5_display->setEnabled(true);
        Mass5_display->setMinimumSize(QSize(81, 31));
        Mass5_display->setMaximumSize(QSize(81, 31));
        Mass5_display->setFont(font);
        Mass5_display->setFrameShape(QFrame::NoFrame);
        Mass5_display->setFrameShadow(QFrame::Plain);
        Mass5_display->setSmallDecimalPoint(true);
        Mass5_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_7->addWidget(Mass5_display);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Mass1_label_2 = new QLabel(layoutWidget6);
        Mass1_label_2->setObjectName(QString::fromUtf8("Mass1_label_2"));
        Mass1_label_2->setFont(font);

        verticalLayout_2->addWidget(Mass1_label_2);

        Mass1_label_6 = new QLabel(layoutWidget6);
        Mass1_label_6->setObjectName(QString::fromUtf8("Mass1_label_6"));
        Mass1_label_6->setFont(font);

        verticalLayout_2->addWidget(Mass1_label_6);

        Mass1_label_3 = new QLabel(layoutWidget6);
        Mass1_label_3->setObjectName(QString::fromUtf8("Mass1_label_3"));
        Mass1_label_3->setFont(font);

        verticalLayout_2->addWidget(Mass1_label_3);

        Mass1_label_4 = new QLabel(layoutWidget6);
        Mass1_label_4->setObjectName(QString::fromUtf8("Mass1_label_4"));
        Mass1_label_4->setFont(font);

        verticalLayout_2->addWidget(Mass1_label_4);

        Mass1_label_5 = new QLabel(layoutWidget6);
        Mass1_label_5->setObjectName(QString::fromUtf8("Mass1_label_5"));
        Mass1_label_5->setFont(font);

        verticalLayout_2->addWidget(Mass1_label_5);


        horizontalLayout_2->addLayout(verticalLayout_2);

        layoutWidget7 = new QWidget(FuelDetail_frame);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(351, 71, 238, 183));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        Lvl1_label = new QLabel(layoutWidget7);
        Lvl1_label->setObjectName(QString::fromUtf8("Lvl1_label"));
        Lvl1_label->setFont(font);

        verticalLayout_6->addWidget(Lvl1_label);

        Lvl2_label = new QLabel(layoutWidget7);
        Lvl2_label->setObjectName(QString::fromUtf8("Lvl2_label"));
        Lvl2_label->setFont(font);

        verticalLayout_6->addWidget(Lvl2_label);

        Lvl3_label = new QLabel(layoutWidget7);
        Lvl3_label->setObjectName(QString::fromUtf8("Lvl3_label"));
        Lvl3_label->setFont(font);

        verticalLayout_6->addWidget(Lvl3_label);

        Lvl3_label_3 = new QLabel(layoutWidget7);
        Lvl3_label_3->setObjectName(QString::fromUtf8("Lvl3_label_3"));
        Lvl3_label_3->setFont(font);

        verticalLayout_6->addWidget(Lvl3_label_3);

        Lvl3_label_2 = new QLabel(layoutWidget7);
        Lvl3_label_2->setObjectName(QString::fromUtf8("Lvl3_label_2"));
        Lvl3_label_2->setFont(font);

        verticalLayout_6->addWidget(Lvl3_label_2);


        horizontalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        Lvl1_display = new QLCDNumber(layoutWidget7);
        Lvl1_display->setObjectName(QString::fromUtf8("Lvl1_display"));
        Lvl1_display->setEnabled(true);
        Lvl1_display->setMinimumSize(QSize(81, 31));
        Lvl1_display->setMaximumSize(QSize(81, 31));
        Lvl1_display->setFont(font);
        Lvl1_display->setFrameShape(QFrame::NoFrame);
        Lvl1_display->setFrameShadow(QFrame::Plain);
        Lvl1_display->setSmallDecimalPoint(true);
        Lvl1_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_9->addWidget(Lvl1_display);

        Lvl2_display = new QLCDNumber(layoutWidget7);
        Lvl2_display->setObjectName(QString::fromUtf8("Lvl2_display"));
        Lvl2_display->setEnabled(true);
        Lvl2_display->setMinimumSize(QSize(81, 31));
        Lvl2_display->setMaximumSize(QSize(81, 31));
        Lvl2_display->setFont(font);
        Lvl2_display->setFrameShape(QFrame::NoFrame);
        Lvl2_display->setFrameShadow(QFrame::Plain);
        Lvl2_display->setSmallDecimalPoint(true);
        Lvl2_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_9->addWidget(Lvl2_display);

        Lvl3_display = new QLCDNumber(layoutWidget7);
        Lvl3_display->setObjectName(QString::fromUtf8("Lvl3_display"));
        Lvl3_display->setEnabled(true);
        Lvl3_display->setMinimumSize(QSize(81, 31));
        Lvl3_display->setMaximumSize(QSize(81, 31));
        Lvl3_display->setFont(font);
        Lvl3_display->setFrameShape(QFrame::NoFrame);
        Lvl3_display->setFrameShadow(QFrame::Plain);
        Lvl3_display->setSmallDecimalPoint(true);
        Lvl3_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_9->addWidget(Lvl3_display);

        Lvl4_display = new QLCDNumber(layoutWidget7);
        Lvl4_display->setObjectName(QString::fromUtf8("Lvl4_display"));
        Lvl4_display->setEnabled(true);
        Lvl4_display->setMinimumSize(QSize(81, 31));
        Lvl4_display->setMaximumSize(QSize(81, 31));
        Lvl4_display->setFont(font);
        Lvl4_display->setFrameShape(QFrame::NoFrame);
        Lvl4_display->setFrameShadow(QFrame::Plain);
        Lvl4_display->setSmallDecimalPoint(true);
        Lvl4_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_9->addWidget(Lvl4_display);

        Lvl5_display = new QLCDNumber(layoutWidget7);
        Lvl5_display->setObjectName(QString::fromUtf8("Lvl5_display"));
        Lvl5_display->setEnabled(true);
        Lvl5_display->setMinimumSize(QSize(81, 31));
        Lvl5_display->setMaximumSize(QSize(81, 31));
        Lvl5_display->setFont(font);
        Lvl5_display->setFrameShape(QFrame::NoFrame);
        Lvl5_display->setFrameShadow(QFrame::Plain);
        Lvl5_display->setSmallDecimalPoint(true);
        Lvl5_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_9->addWidget(Lvl5_display);


        horizontalLayout_5->addLayout(verticalLayout_9);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        Lvl1_label_2 = new QLabel(layoutWidget7);
        Lvl1_label_2->setObjectName(QString::fromUtf8("Lvl1_label_2"));
        Lvl1_label_2->setFont(font);

        verticalLayout_27->addWidget(Lvl1_label_2);

        Lvl1_label_3 = new QLabel(layoutWidget7);
        Lvl1_label_3->setObjectName(QString::fromUtf8("Lvl1_label_3"));
        Lvl1_label_3->setFont(font);

        verticalLayout_27->addWidget(Lvl1_label_3);

        Lvl1_label_4 = new QLabel(layoutWidget7);
        Lvl1_label_4->setObjectName(QString::fromUtf8("Lvl1_label_4"));
        Lvl1_label_4->setFont(font);

        verticalLayout_27->addWidget(Lvl1_label_4);

        Lvl1_label_5 = new QLabel(layoutWidget7);
        Lvl1_label_5->setObjectName(QString::fromUtf8("Lvl1_label_5"));
        Lvl1_label_5->setFont(font);

        verticalLayout_27->addWidget(Lvl1_label_5);

        Lvl1_label_6 = new QLabel(layoutWidget7);
        Lvl1_label_6->setObjectName(QString::fromUtf8("Lvl1_label_6"));
        Lvl1_label_6->setFont(font);

        verticalLayout_27->addWidget(Lvl1_label_6);


        horizontalLayout_5->addLayout(verticalLayout_27);

        layoutWidget8 = new QWidget(FuelDetail_frame);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(430, 280, 197, 33));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Temp = new QLabel(layoutWidget8);
        Temp->setObjectName(QString::fromUtf8("Temp"));
        Temp->setFont(font);

        verticalLayout_3->addWidget(Temp);


        horizontalLayout_6->addLayout(verticalLayout_3);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        Temp_display = new QLCDNumber(layoutWidget8);
        Temp_display->setObjectName(QString::fromUtf8("Temp_display"));
        Temp_display->setEnabled(true);
        Temp_display->setMinimumSize(QSize(81, 31));
        Temp_display->setMaximumSize(QSize(81, 31));
        Temp_display->setFont(font);
        Temp_display->setFrameShape(QFrame::NoFrame);
        Temp_display->setFrameShadow(QFrame::Plain);
        Temp_display->setSmallDecimalPoint(true);
        Temp_display->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(Temp_display);

        Temp_2 = new QLabel(layoutWidget8);
        Temp_2->setObjectName(QString::fromUtf8("Temp_2"));
        Temp_2->setFont(font);

        horizontalLayout_6->addWidget(Temp_2);

        FuelSatus_frame = new QFrame(centralWidget);
        FuelSatus_frame->setObjectName(QString::fromUtf8("FuelSatus_frame"));
        FuelSatus_frame->setGeometry(QRect(699, 11, 371, 321));
        FuelSatus_frame->setFrameShape(QFrame::NoFrame);
        FuelSatus_frame->setFrameShadow(QFrame::Plain);
        layoutWidget9 = new QWidget(FuelSatus_frame);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(10, 12, 351, 291));
        verticalLayout_22 = new QVBoxLayout(layoutWidget9);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        fuel_av_label = new QLabel(layoutWidget9);
        fuel_av_label->setObjectName(QString::fromUtf8("fuel_av_label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tahoma"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        fuel_av_label->setFont(font1);
        fuel_av_label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Tahoma\";"));

        verticalLayout_5->addWidget(fuel_av_label);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);

        Fuel_av_display = new QLCDNumber(layoutWidget9);
        Fuel_av_display->setObjectName(QString::fromUtf8("Fuel_av_display"));
        Fuel_av_display->setMinimumSize(QSize(81, 31));
        Fuel_av_display->setMaximumSize(QSize(81, 31));
        Fuel_av_display->setFont(font);
        Fuel_av_display->setFrameShape(QFrame::NoFrame);
        Fuel_av_display->setFrameShadow(QFrame::Plain);
        Fuel_av_display->setSmallDecimalPoint(true);
        Fuel_av_display->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_13->addWidget(Fuel_av_display);

        Fuel_av_vol_label = new QLabel(layoutWidget9);
        Fuel_av_vol_label->setObjectName(QString::fromUtf8("Fuel_av_vol_label"));
        Fuel_av_vol_label->setFont(font1);
        Fuel_av_vol_label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Tahoma\";"));

        horizontalLayout_13->addWidget(Fuel_av_vol_label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_13);


        verticalLayout_22->addLayout(verticalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        fuel_con_label = new QLabel(layoutWidget9);
        fuel_con_label->setObjectName(QString::fromUtf8("fuel_con_label"));
        fuel_con_label->setFont(font1);
        fuel_con_label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Tahoma\";"));

        verticalLayout_8->addWidget(fuel_con_label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        fuel_con_display = new QLCDNumber(layoutWidget9);
        fuel_con_display->setObjectName(QString::fromUtf8("fuel_con_display"));
        fuel_con_display->setMinimumSize(QSize(81, 31));
        fuel_con_display->setMaximumSize(QSize(81, 31));
        fuel_con_display->setFont(font);
        fuel_con_display->setFrameShape(QFrame::NoFrame);
        fuel_con_display->setFrameShadow(QFrame::Plain);
        fuel_con_display->setSmallDecimalPoint(true);
        fuel_con_display->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(fuel_con_display);

        fuel_con_vol = new QLabel(layoutWidget9);
        fuel_con_vol->setObjectName(QString::fromUtf8("fuel_con_vol"));
        fuel_con_vol->setFont(font1);
        fuel_con_vol->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Tahoma\";"));

        horizontalLayout_4->addWidget(fuel_con_vol);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_8->addLayout(horizontalLayout_4);


        verticalLayout_22->addLayout(verticalLayout_8);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        ffr_label = new QLabel(layoutWidget9);
        ffr_label->setObjectName(QString::fromUtf8("ffr_label"));
        ffr_label->setFont(font1);
        ffr_label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Tahoma\";"));

        verticalLayout_21->addWidget(ffr_label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        ffr_display = new QLCDNumber(layoutWidget9);
        ffr_display->setObjectName(QString::fromUtf8("ffr_display"));
        ffr_display->setMinimumSize(QSize(81, 31));
        ffr_display->setMaximumSize(QSize(81, 31));
        ffr_display->setFont(font);
        ffr_display->setFrameShape(QFrame::NoFrame);
        ffr_display->setFrameShadow(QFrame::Plain);
        ffr_display->setSmallDecimalPoint(true);
        ffr_display->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_3->addWidget(ffr_display);

        ffr_rate_label = new QLabel(layoutWidget9);
        ffr_rate_label->setObjectName(QString::fromUtf8("ffr_rate_label"));
        ffr_rate_label->setFont(font1);
        ffr_rate_label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Tahoma\";"));

        horizontalLayout_3->addWidget(ffr_rate_label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout_21->addLayout(horizontalLayout_3);


        verticalLayout_22->addLayout(verticalLayout_21);

        PressureMonitorinControl_frame = new QFrame(centralWidget);
        PressureMonitorinControl_frame->setObjectName(QString::fromUtf8("PressureMonitorinControl_frame"));
        PressureMonitorinControl_frame->setGeometry(QRect(700, 340, 371, 851));
        PressureMonitorinControl_frame->setFrameShape(QFrame::NoFrame);
        PressureMonitorinControl_frame->setFrameShadow(QFrame::Plain);
        layoutWidget_2 = new QWidget(PressureMonitorinControl_frame);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 10, 371, 55));
        verticalLayout_29 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        verticalLayout_29->setContentsMargins(0, 0, 0, 0);
        line_4 = new QFrame(layoutWidget_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setLineWidth(3);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_29->addWidget(line_4);

        Mass1_label_8 = new QLabel(layoutWidget_2);
        Mass1_label_8->setObjectName(QString::fromUtf8("Mass1_label_8"));
        Mass1_label_8->setFont(font);

        verticalLayout_29->addWidget(Mass1_label_8);

        line_5 = new QFrame(layoutWidget_2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_29->addWidget(line_5);

        layoutWidget_3 = new QWidget(PressureMonitorinControl_frame);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 570, 371, 43));
        verticalLayout_30 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        line_6 = new QFrame(layoutWidget_3);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_30->addWidget(line_6);

        Mass1_label_9 = new QLabel(layoutWidget_3);
        Mass1_label_9->setObjectName(QString::fromUtf8("Mass1_label_9"));
        Mass1_label_9->setFont(font);

        verticalLayout_30->addWidget(Mass1_label_9);

        line_7 = new QFrame(layoutWidget_3);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_30->addWidget(line_7);

        layoutWidget10 = new QWidget(PressureMonitorinControl_frame);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(0, 620, 365, 201));
        verticalLayout_42 = new QVBoxLayout(layoutWidget10);
        verticalLayout_42->setSpacing(6);
        verticalLayout_42->setContentsMargins(11, 11, 11, 11);
        verticalLayout_42->setObjectName(QString::fromUtf8("verticalLayout_42"));
        verticalLayout_42->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        verticalLayout_38 = new QVBoxLayout();
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        T1_T3_pump_but_label = new QLabel(layoutWidget10);
        T1_T3_pump_but_label->setObjectName(QString::fromUtf8("T1_T3_pump_but_label"));
        T1_T3_pump_but_label->setFont(font);

        verticalLayout_38->addWidget(T1_T3_pump_but_label);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_9);

        T1_T3_Pump_button = new QCheckBox(layoutWidget10);
        T1_T3_Pump_button->setObjectName(QString::fromUtf8("T1_T3_Pump_button"));

        horizontalLayout_20->addWidget(T1_T3_Pump_button);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_10);


        verticalLayout_38->addLayout(horizontalLayout_20);


        horizontalLayout_25->addLayout(verticalLayout_38);

        verticalLayout_39 = new QVBoxLayout();
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setObjectName(QString::fromUtf8("verticalLayout_39"));
        T3_T1_but_label = new QLabel(layoutWidget10);
        T3_T1_but_label->setObjectName(QString::fromUtf8("T3_T1_but_label"));
        T3_T1_but_label->setFont(font);

        verticalLayout_39->addWidget(T3_T1_but_label);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_12);

        T3_T1_Pump_button = new QCheckBox(layoutWidget10);
        T3_T1_Pump_button->setObjectName(QString::fromUtf8("T3_T1_Pump_button"));

        horizontalLayout_21->addWidget(T3_T1_Pump_button);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_13);


        verticalLayout_39->addLayout(horizontalLayout_21);


        horizontalLayout_25->addLayout(verticalLayout_39);


        verticalLayout_42->addLayout(horizontalLayout_25);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        verticalLayout_41 = new QVBoxLayout();
        verticalLayout_41->setSpacing(6);
        verticalLayout_41->setObjectName(QString::fromUtf8("verticalLayout_41"));
        LT_MID_but_label = new QLabel(layoutWidget10);
        LT_MID_but_label->setObjectName(QString::fromUtf8("LT_MID_but_label"));
        LT_MID_but_label->setFont(font);

        verticalLayout_41->addWidget(LT_MID_but_label);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_14);

        LT_MID_vale_button = new QCheckBox(layoutWidget10);
        LT_MID_vale_button->setObjectName(QString::fromUtf8("LT_MID_vale_button"));

        horizontalLayout_23->addWidget(LT_MID_vale_button);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_15);


        verticalLayout_41->addLayout(horizontalLayout_23);


        horizontalLayout_24->addLayout(verticalLayout_41);

        verticalLayout_40 = new QVBoxLayout();
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setObjectName(QString::fromUtf8("verticalLayout_40"));
        RT_MID_but_label = new QLabel(layoutWidget10);
        RT_MID_but_label->setObjectName(QString::fromUtf8("RT_MID_but_label"));
        RT_MID_but_label->setFont(font);

        verticalLayout_40->addWidget(RT_MID_but_label);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_16);

        RT_MID_valve_button = new QCheckBox(layoutWidget10);
        RT_MID_valve_button->setObjectName(QString::fromUtf8("RT_MID_valve_button"));

        horizontalLayout_22->addWidget(RT_MID_valve_button);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_17);


        verticalLayout_40->addLayout(horizontalLayout_22);


        horizontalLayout_24->addLayout(verticalLayout_40);


        verticalLayout_42->addLayout(horizontalLayout_24);

        verticalLayoutWidget = new QWidget(PressureMonitorinControl_frame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 70, 171, 161));
        p1_gauge_layout = new QVBoxLayout(verticalLayoutWidget);
        p1_gauge_layout->setSpacing(6);
        p1_gauge_layout->setContentsMargins(11, 11, 11, 11);
        p1_gauge_layout->setObjectName(QString::fromUtf8("p1_gauge_layout"));
        p1_gauge_layout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(PressureMonitorinControl_frame);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(190, 70, 171, 161));
        p2_gauge_layout = new QVBoxLayout(verticalLayoutWidget_2);
        p2_gauge_layout->setSpacing(6);
        p2_gauge_layout->setContentsMargins(11, 11, 11, 11);
        p2_gauge_layout->setObjectName(QString::fromUtf8("p2_gauge_layout"));
        p2_gauge_layout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_3 = new QWidget(PressureMonitorinControl_frame);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 240, 171, 161));
        p3_gauge_layout = new QVBoxLayout(verticalLayoutWidget_3);
        p3_gauge_layout->setSpacing(6);
        p3_gauge_layout->setContentsMargins(11, 11, 11, 11);
        p3_gauge_layout->setObjectName(QString::fromUtf8("p3_gauge_layout"));
        p3_gauge_layout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_4 = new QWidget(PressureMonitorinControl_frame);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(190, 240, 171, 161));
        p4_gauge_layout = new QVBoxLayout(verticalLayoutWidget_4);
        p4_gauge_layout->setSpacing(6);
        p4_gauge_layout->setContentsMargins(11, 11, 11, 11);
        p4_gauge_layout->setObjectName(QString::fromUtf8("p4_gauge_layout"));
        p4_gauge_layout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(PressureMonitorinControl_frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 410, 261, 148));
        horizontalLayout_27 = new QHBoxLayout(widget);
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        Pump_P1 = new QLabel(widget);
        Pump_P1->setObjectName(QString::fromUtf8("Pump_P1"));
        Pump_P1->setFont(font);

        verticalLayout_33->addWidget(Pump_P1);

        Pump_P2 = new QLabel(widget);
        Pump_P2->setObjectName(QString::fromUtf8("Pump_P2"));
        Pump_P2->setFont(font);

        verticalLayout_33->addWidget(Pump_P2);

        Pump_P3 = new QLabel(widget);
        Pump_P3->setObjectName(QString::fromUtf8("Pump_P3"));
        Pump_P3->setFont(font);

        verticalLayout_33->addWidget(Pump_P3);

        M2_x = new QLabel(widget);
        M2_x->setObjectName(QString::fromUtf8("M2_x"));
        M2_x->setFont(font);

        verticalLayout_33->addWidget(M2_x);


        horizontalLayout_27->addLayout(verticalLayout_33);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        PP1_display = new QLCDNumber(widget);
        PP1_display->setObjectName(QString::fromUtf8("PP1_display"));
        PP1_display->setMinimumSize(QSize(81, 31));
        PP1_display->setMaximumSize(QSize(81, 31));
        PP1_display->setFont(font);
        PP1_display->setFrameShape(QFrame::NoFrame);
        PP1_display->setFrameShadow(QFrame::Plain);
        PP1_display->setSmallDecimalPoint(true);
        PP1_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_23->addWidget(PP1_display);

        PP2_display = new QLCDNumber(widget);
        PP2_display->setObjectName(QString::fromUtf8("PP2_display"));
        PP2_display->setMinimumSize(QSize(81, 31));
        PP2_display->setMaximumSize(QSize(81, 31));
        PP2_display->setFont(font);
        PP2_display->setFrameShape(QFrame::NoFrame);
        PP2_display->setFrameShadow(QFrame::Plain);
        PP2_display->setSmallDecimalPoint(true);
        PP2_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_23->addWidget(PP2_display);

        PP3_display = new QLCDNumber(widget);
        PP3_display->setObjectName(QString::fromUtf8("PP3_display"));
        PP3_display->setMinimumSize(QSize(81, 31));
        PP3_display->setMaximumSize(QSize(81, 31));
        PP3_display->setFont(font);
        PP3_display->setFrameShape(QFrame::NoFrame);
        PP3_display->setFrameShadow(QFrame::Plain);
        PP3_display->setSmallDecimalPoint(true);
        PP3_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_23->addWidget(PP3_display);

        EPP_display = new QLCDNumber(widget);
        EPP_display->setObjectName(QString::fromUtf8("EPP_display"));
        EPP_display->setMinimumSize(QSize(81, 31));
        EPP_display->setMaximumSize(QSize(81, 31));
        EPP_display->setFont(font);
        EPP_display->setFrameShape(QFrame::NoFrame);
        EPP_display->setFrameShadow(QFrame::Plain);
        EPP_display->setSmallDecimalPoint(true);
        EPP_display->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_23->addWidget(EPP_display);


        horizontalLayout_26->addLayout(verticalLayout_23);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        Lvl1_label_7 = new QLabel(widget);
        Lvl1_label_7->setObjectName(QString::fromUtf8("Lvl1_label_7"));
        Lvl1_label_7->setFont(font);

        verticalLayout_31->addWidget(Lvl1_label_7);

        Lvl1_label_8 = new QLabel(widget);
        Lvl1_label_8->setObjectName(QString::fromUtf8("Lvl1_label_8"));
        Lvl1_label_8->setFont(font);

        verticalLayout_31->addWidget(Lvl1_label_8);

        Lvl1_label_9 = new QLabel(widget);
        Lvl1_label_9->setObjectName(QString::fromUtf8("Lvl1_label_9"));
        Lvl1_label_9->setFont(font);

        verticalLayout_31->addWidget(Lvl1_label_9);

        Lvl1_label_10 = new QLabel(widget);
        Lvl1_label_10->setObjectName(QString::fromUtf8("Lvl1_label_10"));
        Lvl1_label_10->setFont(font);

        verticalLayout_31->addWidget(Lvl1_label_10);

        Lvl1_label_11 = new QLabel(widget);
        Lvl1_label_11->setObjectName(QString::fromUtf8("Lvl1_label_11"));
        Lvl1_label_11->setFont(font);

        verticalLayout_31->addWidget(Lvl1_label_11);


        horizontalLayout_26->addLayout(verticalLayout_31);


        horizontalLayout_27->addLayout(horizontalLayout_26);

        Pump_Valve_Status_frame = new QFrame(centralWidget);
        Pump_Valve_Status_frame->setObjectName(QString::fromUtf8("Pump_Valve_Status_frame"));
        Pump_Valve_Status_frame->setGeometry(QRect(10, 890, 681, 301));
        Pump_Valve_Status_frame->setFrameShape(QFrame::NoFrame);
        Pump_Valve_Status_frame->setFrameShadow(QFrame::Plain);
        layoutWidget11 = new QWidget(Pump_Valve_Status_frame);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(250, 10, 401, 281));
        verticalLayout_36 = new QVBoxLayout(layoutWidget11);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(11, 11, 11, 11);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        LT_MID_valve_label = new QLabel(layoutWidget11);
        LT_MID_valve_label->setObjectName(QString::fromUtf8("LT_MID_valve_label"));
        LT_MID_valve_label->setFont(font);

        horizontalLayout_17->addWidget(LT_MID_valve_label);

        Valve_status1 = new QLabel(layoutWidget11);
        Valve_status1->setObjectName(QString::fromUtf8("Valve_status1"));
        Valve_status1->setFont(font);

        horizontalLayout_17->addWidget(Valve_status1);


        verticalLayout_36->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        RT_MID_valve_label = new QLabel(layoutWidget11);
        RT_MID_valve_label->setObjectName(QString::fromUtf8("RT_MID_valve_label"));
        RT_MID_valve_label->setFont(font);

        horizontalLayout_16->addWidget(RT_MID_valve_label);

        Valve_status2 = new QLabel(layoutWidget11);
        Valve_status2->setObjectName(QString::fromUtf8("Valve_status2"));
        Valve_status2->setFont(font);

        horizontalLayout_16->addWidget(Valve_status2);


        verticalLayout_36->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        AUX_valve1 = new QLabel(layoutWidget11);
        AUX_valve1->setObjectName(QString::fromUtf8("AUX_valve1"));
        AUX_valve1->setFont(font);

        horizontalLayout_15->addWidget(AUX_valve1);

        Valve_status3 = new QLabel(layoutWidget11);
        Valve_status3->setObjectName(QString::fromUtf8("Valve_status3"));
        Valve_status3->setFont(font);

        horizontalLayout_15->addWidget(Valve_status3);


        verticalLayout_36->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        AUX_valve2 = new QLabel(layoutWidget11);
        AUX_valve2->setObjectName(QString::fromUtf8("AUX_valve2"));
        AUX_valve2->setFont(font);

        horizontalLayout_14->addWidget(AUX_valve2);

        Valve_status4 = new QLabel(layoutWidget11);
        Valve_status4->setObjectName(QString::fromUtf8("Valve_status4"));
        Valve_status4->setFont(font);

        horizontalLayout_14->addWidget(Valve_status4);


        verticalLayout_36->addLayout(horizontalLayout_14);

        layoutWidget12 = new QWidget(Pump_Valve_Status_frame);
        layoutWidget12->setObjectName(QString::fromUtf8("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(10, 10, 231, 281));
        verticalLayout_37 = new QVBoxLayout(layoutWidget12);
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setContentsMargins(11, 11, 11, 11);
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        verticalLayout_37->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        T1_T3_pump = new QLabel(layoutWidget12);
        T1_T3_pump->setObjectName(QString::fromUtf8("T1_T3_pump"));
        T1_T3_pump->setFont(font);

        horizontalLayout_18->addWidget(T1_T3_pump);

        Pump_status1 = new QLabel(layoutWidget12);
        Pump_status1->setObjectName(QString::fromUtf8("Pump_status1"));
        Pump_status1->setFont(font);

        horizontalLayout_18->addWidget(Pump_status1);


        verticalLayout_37->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        T3_T1_pump = new QLabel(layoutWidget12);
        T3_T1_pump->setObjectName(QString::fromUtf8("T3_T1_pump"));
        T3_T1_pump->setFont(font);

        horizontalLayout_19->addWidget(T3_T1_pump);

        Pump_status2 = new QLabel(layoutWidget12);
        Pump_status2->setObjectName(QString::fromUtf8("Pump_status2"));
        Pump_status2->setFont(font);

        horizontalLayout_19->addWidget(Pump_status2);


        verticalLayout_37->addLayout(horizontalLayout_19);

        Log_frame = new QFrame(centralWidget);
        Log_frame->setObjectName(QString::fromUtf8("Log_frame"));
        Log_frame->setGeometry(QRect(510, 1200, 561, 641));
        Log_frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(118, 117, 125);\n"
""));
        Log_frame->setFrameShape(QFrame::NoFrame);
        Log_frame->setFrameShadow(QFrame::Plain);
        Log_frame->setLineWidth(4);
        datetime_label = new QLabel(Log_frame);
        datetime_label->setObjectName(QString::fromUtf8("datetime_label"));
        datetime_label->setGeometry(QRect(20, 10, 291, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Unispace"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        datetime_label->setFont(font2);
        datetime_label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Unispace\";"));
        seperation_line = new QFrame(Log_frame);
        seperation_line->setObjectName(QString::fromUtf8("seperation_line"));
        seperation_line->setGeometry(QRect(10, 50, 541, 20));
        seperation_line->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 255);"));
        seperation_line->setFrameShape(QFrame::HLine);
        seperation_line->setFrameShadow(QFrame::Sunken);
        Log_Display = new QTextBrowser(Log_frame);
        Log_Display->setObjectName(QString::fromUtf8("Log_Display"));
        Log_Display->setGeometry(QRect(10, 80, 541, 541));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Tahoma"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        Log_Display->setFont(font3);
        Log_Display->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        Log_Display->setLineWrapMode(QTextEdit::NoWrap);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 1850, 1051, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        WarningInfo_frame = new QFrame(centralWidget);
        WarningInfo_frame->setObjectName(QString::fromUtf8("WarningInfo_frame"));
        WarningInfo_frame->setGeometry(QRect(10, 1200, 491, 641));
        WarningInfo_frame->setStyleSheet(QString::fromUtf8(""));
        WarningInfo_frame->setFrameShape(QFrame::StyledPanel);
        WarningInfo_frame->setFrameShadow(QFrame::Raised);
        layoutWidget_4 = new QWidget(WarningInfo_frame);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(0, 0, 491, 51));
        verticalLayout_32 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setContentsMargins(11, 11, 11, 11);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        verticalLayout_32->setContentsMargins(0, 0, 0, 0);
        line_10 = new QFrame(layoutWidget_4);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_32->addWidget(line_10);

        Mass1_label_11 = new QLabel(layoutWidget_4);
        Mass1_label_11->setObjectName(QString::fromUtf8("Mass1_label_11"));
        Mass1_label_11->setFont(font);

        verticalLayout_32->addWidget(Mass1_label_11);

        line_11 = new QFrame(layoutWidget_4);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        verticalLayout_32->addWidget(line_11);

        red_1 = new QLabel(WarningInfo_frame);
        red_1->setObjectName(QString::fromUtf8("red_1"));
        red_1->setGeometry(QRect(10, 95, 51, 51));
        red_1->setMinimumSize(QSize(51, 51));
        red_1->setMaximumSize(QSize(51, 51));
        red_1->setPixmap(QPixmap(QString::fromUtf8(":/darkstyle/red_light.png")));
        red_1->setScaledContents(true);
        green_1 = new QLabel(WarningInfo_frame);
        green_1->setObjectName(QString::fromUtf8("green_1"));
        green_1->setGeometry(QRect(10, 95, 51, 51));
        green_1->setMinimumSize(QSize(51, 51));
        green_1->setMaximumSize(QSize(51, 51));
        green_1->setPixmap(QPixmap(QString::fromUtf8(":/darkstyle/green_light.png")));
        green_1->setScaledContents(true);
        red_2 = new QLabel(WarningInfo_frame);
        red_2->setObjectName(QString::fromUtf8("red_2"));
        red_2->setGeometry(QRect(10, 176, 51, 51));
        red_2->setMinimumSize(QSize(51, 51));
        red_2->setMaximumSize(QSize(51, 51));
        red_2->setPixmap(QPixmap(QString::fromUtf8(":/darkstyle/red_light.png")));
        red_2->setScaledContents(true);
        red_3 = new QLabel(WarningInfo_frame);
        red_3->setObjectName(QString::fromUtf8("red_3"));
        red_3->setGeometry(QRect(10, 257, 51, 51));
        red_3->setMinimumSize(QSize(51, 51));
        red_3->setMaximumSize(QSize(51, 51));
        red_3->setPixmap(QPixmap(QString::fromUtf8(":/darkstyle/red_light.png")));
        red_3->setScaledContents(true);
        red_4 = new QLabel(WarningInfo_frame);
        red_4->setObjectName(QString::fromUtf8("red_4"));
        red_4->setGeometry(QRect(10, 338, 51, 51));
        red_4->setMinimumSize(QSize(51, 51));
        red_4->setMaximumSize(QSize(51, 51));
        red_4->setPixmap(QPixmap(QString::fromUtf8(":/darkstyle/red_light.png")));
        red_4->setScaledContents(true);
        red_5 = new QLabel(WarningInfo_frame);
        red_5->setObjectName(QString::fromUtf8("red_5"));
        red_5->setGeometry(QRect(10, 419, 51, 51));
        red_5->setMinimumSize(QSize(51, 51));
        red_5->setMaximumSize(QSize(51, 51));
        red_5->setPixmap(QPixmap(QString::fromUtf8(":/darkstyle/red_light.png")));
        red_5->setScaledContents(true);
        red_6 = new QLabel(WarningInfo_frame);
        red_6->setObjectName(QString::fromUtf8("red_6"));
        red_6->setGeometry(QRect(10, 500, 51, 51));
        red_6->setMinimumSize(QSize(51, 51));
        red_6->setMaximumSize(QSize(51, 51));
        red_6->setPixmap(QPixmap(QString::fromUtf8(":/darkstyle/red_light.png")));
        red_6->setScaledContents(true);
        green_2 = new QLabel(WarningInfo_frame);
        green_2->setObjectName(QString::fromUtf8("green_2"));
        green_2->setGeometry(QRect(10, 176, 51, 51));
        green_2->setMinimumSize(QSize(51, 51));
        green_2->setMaximumSize(QSize(51, 51));
        green_2->setPixmap(QPixmap(QString::fromUtf8(":/darkstyle/green_light.png")));
        green_2->setScaledContents(true);
        green_3 = new QLabel(WarningInfo_frame);
        green_3->setObjectName(QString::fromUtf8("green_3"));
        green_3->setGeometry(QRect(10, 257, 51, 51));
        green_3->setMinimumSize(QSize(51, 51));
        green_3->setMaximumSize(QSize(51, 51));
        green_3->setPixmap(QPixmap(QString::fromUtf8(":/darkstyle/green_light.png")));
        green_3->setScaledContents(true);
        green_4 = new QLabel(WarningInfo_frame);
        green_4->setObjectName(QString::fromUtf8("green_4"));
        green_4->setGeometry(QRect(10, 338, 51, 51));
        green_4->setMinimumSize(QSize(51, 51));
        green_4->setMaximumSize(QSize(51, 51));
        green_4->setPixmap(QPixmap(QString::fromUtf8(":/darkstyle/green_light.png")));
        green_4->setScaledContents(true);
        green_5 = new QLabel(WarningInfo_frame);
        green_5->setObjectName(QString::fromUtf8("green_5"));
        green_5->setGeometry(QRect(10, 419, 51, 51));
        green_5->setMinimumSize(QSize(51, 51));
        green_5->setMaximumSize(QSize(51, 51));
        green_5->setPixmap(QPixmap(QString::fromUtf8(":/darkstyle/green_light.png")));
        green_5->setScaledContents(true);
        green_6 = new QLabel(WarningInfo_frame);
        green_6->setObjectName(QString::fromUtf8("green_6"));
        green_6->setGeometry(QRect(10, 500, 51, 51));
        green_6->setMinimumSize(QSize(51, 51));
        green_6->setMaximumSize(QSize(51, 51));
        green_6->setPixmap(QPixmap(QString::fromUtf8(":/darkstyle/green_light.png")));
        green_6->setScaledContents(true);
        Fuel_status_label = new QLabel(WarningInfo_frame);
        Fuel_status_label->setObjectName(QString::fromUtf8("Fuel_status_label"));
        Fuel_status_label->setGeometry(QRect(80, 110, 136, 23));
        Fuel_status_label->setFont(font);
        ENG_L_status_label = new QLabel(WarningInfo_frame);
        ENG_L_status_label->setObjectName(QString::fromUtf8("ENG_L_status_label"));
        ENG_L_status_label->setGeometry(QRect(80, 190, 180, 23));
        ENG_L_status_label->setFont(font);
        Ven_L_status_label = new QLabel(WarningInfo_frame);
        Ven_L_status_label->setObjectName(QString::fromUtf8("Ven_L_status_label"));
        Ven_L_status_label->setGeometry(QRect(80, 270, 191, 23));
        Ven_L_status_label->setFont(font);
        T1_T3PR_label = new QLabel(WarningInfo_frame);
        T1_T3PR_label->setObjectName(QString::fromUtf8("T1_T3PR_label"));
        T1_T3PR_label->setGeometry(QRect(80, 350, 192, 23));
        T1_T3PR_label->setFont(font);
        T3_T1PR_label = new QLabel(WarningInfo_frame);
        T3_T1PR_label->setObjectName(QString::fromUtf8("T3_T1PR_label"));
        T3_T1PR_label->setGeometry(QRect(80, 430, 192, 23));
        T3_T1PR_label->setFont(font);
        Temp_status = new QLabel(WarningInfo_frame);
        Temp_status->setObjectName(QString::fromUtf8("Temp_status"));
        Temp_status->setGeometry(QRect(80, 510, 141, 23));
        Temp_status->setFont(font);
        fuel_status_ind = new QLabel(WarningInfo_frame);
        fuel_status_ind->setObjectName(QString::fromUtf8("fuel_status_ind"));
        fuel_status_ind->setGeometry(QRect(280, 110, 80, 23));
        fuel_status_ind->setFont(font);
        P4_status_ind = new QLabel(WarningInfo_frame);
        P4_status_ind->setObjectName(QString::fromUtf8("P4_status_ind"));
        P4_status_ind->setGeometry(QRect(280, 190, 58, 23));
        P4_status_ind->setFont(font);
        P3_status_ind = new QLabel(WarningInfo_frame);
        P3_status_ind->setObjectName(QString::fromUtf8("P3_status_ind"));
        P3_status_ind->setGeometry(QRect(280, 270, 58, 23));
        P3_status_ind->setFont(font);
        P1_status_ind = new QLabel(WarningInfo_frame);
        P1_status_ind->setObjectName(QString::fromUtf8("P1_status_ind"));
        P1_status_ind->setGeometry(QRect(280, 350, 58, 23));
        P1_status_ind->setFont(font);
        P2_status_ind = new QLabel(WarningInfo_frame);
        P2_status_ind->setObjectName(QString::fromUtf8("P2_status_ind"));
        P2_status_ind->setGeometry(QRect(280, 430, 58, 23));
        P2_status_ind->setFont(font);
        temp_status_ind = new QLabel(WarningInfo_frame);
        temp_status_ind->setObjectName(QString::fromUtf8("temp_status_ind"));
        temp_status_ind->setGeometry(QRect(280, 510, 85, 23));
        temp_status_ind->setFont(font);
        green_3->raise();
        green_4->raise();
        green_1->raise();
        green_5->raise();
        green_2->raise();
        green_6->raise();
        layoutWidget_4->raise();
        red_1->raise();
        red_2->raise();
        red_3->raise();
        red_4->raise();
        red_5->raise();
        red_6->raise();
        Fuel_status_label->raise();
        ENG_L_status_label->raise();
        Ven_L_status_label->raise();
        T1_T3PR_label->raise();
        T3_T1PR_label->raise();
        Temp_status->raise();
        fuel_status_ind->raise();
        P4_status_ind->raise();
        P3_status_ind->raise();
        P1_status_ind->raise();
        P2_status_ind->raise();
        temp_status_ind->raise();
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(TankREAR, SIGNAL(valueChanged(int)), REAR_per, SLOT(display(int)));
        QObject::connect(TankFWD, SIGNAL(valueChanged(int)), FWD_per, SLOT(display(int)));
        QObject::connect(TankMID, SIGNAL(valueChanged(int)), MID_per, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Fuel System Indicator", nullptr));
        TankREAR->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        LTank_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#55ffff;\">Left Wing Tank</span></p></body></html>", nullptr));
        LTank_vol_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#55ffff;\">L</span></p></body></html>", nullptr));
        LTank_per_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#55ffff;\">%</span></p></body></html>", nullptr));
        RTank_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#55ffff;\">Right WingTank</span></p></body></html>", nullptr));
        RTank_vol_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#55ffff;\">L</span></p></body></html>", nullptr));
        RTank_per_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#55ffff;\">%</span></p></body></html>", nullptr));
        Fwd_tank->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#55ffff;\">Forward Tank</span></p></body></html>", nullptr));
        FWD_vol_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#55ffff;\">L</span></p></body></html>", nullptr));
        FWD_per_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#55ffff;\">%</span></p></body></html>", nullptr));
        Mid_tank->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#55ffff;\">Mid Tank</span></p></body></html>", nullptr));
        MID_vol_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#55ffff;\">L</span></p></body></html>", nullptr));
        MID_per_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#55ffff;\">%</span></p></body></html>", nullptr));
        Rear_tank->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#55ffff;\">Rear Tank</span></p></body></html>", nullptr));
        REAR_vol_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#55ffff;\">L</span></p></body></html>", nullptr));
        REAR_per_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#55ffff;\">%</span></p></body></html>", nullptr));
        Connection_staus_Label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#55ffff;\">Connection Status:</span></p></body></html>", nullptr));
        Connection_Status->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#00ff00;\">Connected</span></p></body></html>", nullptr));
        Retrybutton->setText(QCoreApplication::translate("MainWindow", "Retry", nullptr));
        Mass1_label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#bdcbb7;\">FUEL MONITORING PANEL</span></p></body></html>", nullptr));
        Mass1_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff00ff;\">MASS FWD:</span></p></body></html>", nullptr));
        Mass2_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff00ff;\">MASS MID:</span></p></body></html>", nullptr));
        Mass3_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff00ff;\">MASS REAR:</span></p></body></html>", nullptr));
        Mass4_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff00ff;\">MASS LT:</span></p></body></html>", nullptr));
        Mass5_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff00ff;\">MASS RT:</span></p></body></html>", nullptr));
        Mass1_label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff00ff;\">KG</span></p></body></html>", nullptr));
        Mass1_label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff00ff;\">KG</span></p></body></html>", nullptr));
        Mass1_label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff00ff;\">KG</span></p></body></html>", nullptr));
        Mass1_label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff00ff;\">KG</span></p></body></html>", nullptr));
        Mass1_label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff00ff;\">KG</span></p></body></html>", nullptr));
        Lvl1_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffaa00;\">LVL FWD:</span></p></body></html>", nullptr));
        Lvl2_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffaa00;\">LVL MID:</span></p></body></html>", nullptr));
        Lvl3_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffaa00;\">LVL REAR:</span></p></body></html>", nullptr));
        Lvl3_label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffaa00;\">LVL LT:</span></p></body></html>", nullptr));
        Lvl3_label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffaa00;\">LVL RT:</span></p></body></html>", nullptr));
        Lvl1_label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffaa00;\">mm</span></p></body></html>", nullptr));
        Lvl1_label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffaa00;\">mm</span></p></body></html>", nullptr));
        Lvl1_label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffaa00;\">mm</span></p></body></html>", nullptr));
        Lvl1_label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffaa00;\">mm</span></p></body></html>", nullptr));
        Lvl1_label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffaa00;\">mm</span></p></body></html>", nullptr));
        Temp->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff5500;\">TEMP:</span></p></body></html>", nullptr));
        Temp_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff5500;\">'C</span></p></body></html>", nullptr));
        fuel_av_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#ffaa00;\">Fuel Available:</span></p></body></html>", nullptr));
        Fuel_av_vol_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#ffaa00;\">L</span></p></body></html>", nullptr));
        fuel_con_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#ffaa00;\">Fuel Consumed:</span></p></body></html>", nullptr));
        fuel_con_vol->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#ffaa00;\">L</span></p></body></html>", nullptr));
        ffr_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#ffaa00;\">Fuel Flow Rate:</span></p></body></html>", nullptr));
        ffr_rate_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#ffaa00;\">L/min</span></p></body></html>", nullptr));
        Mass1_label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#bdcbb7;\">PRESSURE MONITORING PANEL</span></p></body></html>", nullptr));
        Mass1_label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#bdcbb7;\">MANUAL CONTROL PANEL</span></p></body></html>", nullptr));
        T1_T3_pump_but_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffaa00;\">T1 -&gt; T3 PMP:</span></p></body></html>", nullptr));
        T1_T3_Pump_button->setText(QString());
        T3_T1_but_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffaa00;\">T3 -&gt; T1 PMP:</span></p></body></html>", nullptr));
        T3_T1_Pump_button->setText(QString());
        LT_MID_but_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffaa00;\">LT -&gt; MID VLV:</span></p></body></html>", nullptr));
        LT_MID_vale_button->setText(QString());
        RT_MID_but_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ffaa00;\">RT -&gt; MID VLV:</span></p></body></html>", nullptr));
        RT_MID_valve_button->setText(QString());
        Pump_P1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#55ffff;\">T1 -&gt; T3.PR:</span></p></body></html>", nullptr));
        Pump_P2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#55ffff;\">T3 -&gt; T1.PR:</span></p></body></html>", nullptr));
        Pump_P3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#55ffff;\">VENT-L.PR:</span></p></body></html>", nullptr));
        M2_x->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#55ffff;\">ENG-L.PR:</span></p></body></html>", nullptr));
        Lvl1_label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#55ffff;\">PSI</span></p></body></html>", nullptr));
        Lvl1_label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#55ffff;\">PSI</span></p></body></html>", nullptr));
        Lvl1_label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#55ffff;\">PSI</span></p></body></html>", nullptr));
        Lvl1_label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#55ffff;\">PSI</span></p></body></html>", nullptr));
        Lvl1_label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#55ffff;\">PSI</span></p></body></html>", nullptr));
        LT_MID_valve_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#55ffff;\">LT -&gt; MID VALVE:</span></p></body></html>", nullptr));
        Valve_status1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff0000;\">CLOSED</span></p></body></html>", nullptr));
        RT_MID_valve_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#55ffff;\">RT -&gt; MID VALVE:</span></p></body></html>", nullptr));
        Valve_status2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff0000;\">CLOSED</span></p></body></html>", nullptr));
        AUX_valve1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#55ffff;\">AUX-VALVE 1:</span></p></body></html>", nullptr));
        Valve_status3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff0000;\">CLOSED</span></p></body></html>", nullptr));
        AUX_valve2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#55ffff;\">AUX-VALVE 2:</span></p></body></html>", nullptr));
        Valve_status4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff0000;\">CLOSED</span></p></body></html>", nullptr));
        T1_T3_pump->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#55ffff;\">T1 -&gt; T3 :</span></p></body></html>", nullptr));
        Pump_status1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff0000;\">OFF</span></p></body></html>", nullptr));
        T3_T1_pump->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#55ffff;\">T3 -&gt; T1 :</span></p></body></html>", nullptr));
        Pump_status2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff0000;\">OFF</span></p></body></html>", nullptr));
        datetime_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><br/></p></body></html>", nullptr));
        Mass1_label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#bdcbb7;\">WARNING STATUS PANEL</span></p></body></html>", nullptr));
        red_1->setText(QString());
        green_1->setText(QString());
        red_2->setText(QString());
        red_3->setText(QString());
        red_4->setText(QString());
        red_5->setText(QString());
        red_6->setText(QString());
        green_2->setText(QString());
        green_3->setText(QString());
        green_4->setText(QString());
        green_5->setText(QString());
        green_6->setText(QString());
        Fuel_status_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#55ffff;\">FUEL STATUS:</span></p></body></html>", nullptr));
        ENG_L_status_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#55ffff;\">ENG-L.PR STATUS:</span></p></body></html>", nullptr));
        Ven_L_status_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#55ffff;\">VENT-L.PR STATUS:</span></p></body></html>", nullptr));
        T1_T3PR_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#55ffff;\">T1-&gt;T3.PR STATUS:</span></p></body></html>", nullptr));
        T3_T1PR_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#55ffff;\">T3-&gt;T1.PR STATUS:</span></p></body></html>", nullptr));
        Temp_status->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#55ffff;\">TEMP STATUS:</span></p></body></html>", nullptr));
        fuel_status_ind->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">LO FUEL</span></p></body></html>", nullptr));
        P4_status_ind->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">LO PR</span></p></body></html>", nullptr));
        P3_status_ind->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">LO PR</span></p></body></html>", nullptr));
        P1_status_ind->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">LO PR</span></p></body></html>", nullptr));
        P2_status_ind->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">LO PR</span></p></body></html>", nullptr));
        temp_status_ind->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">LO TEMP</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
