#ifndef MAINWINDOW_H
#define MAINWINDOW_H

////////////////////////////////////////////////////////////////////////////////

#include <QMainWindow>
#include <iostream>
#include <math.h>
#include <string>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QTime>
#include <QTimer>
#include <QDateTime>
#include <QByteArray>
#include <QCloseEvent>
#include <QScrollBar>
#include <QThread>
#include "ltankwidget.h"
#include "rtankwidget.h"
#include "tcpsoketconnect.h"
#include "qcgaugewidget.h"

////////////////////////////////////////////////////////////////////////////////

namespace Ui
{
    class MainWindow;
}

////////////////////////////////////////////////////////////////////////////////

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QThread socketThread;
    TCPsoketconnect TCPsocket;
    
public:

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:

    void timerEvent(QTimerEvent *event);

private slots:

    void applyUpdate(float data1, float data2, float data3, float data4, float data5, float data6, float data7, float data8, float data9, float data10, float data11, float data12, float data13, float data14, float data15, float data16, float data17, float data18, float data19, float data20, float data21, float data22, float data23, float data24, float data25, float data26, float data27, float data28, float data29, float data30, float data31, float data32, float data33, float data34, float data35, float data36, float data37, float data38, float data39, float data40);
    void connectionStatus(QString status);
    void updatePumpandValves();
    void checkWarnings();
    void on_Retrybutton_clicked();
    void updateLog();
    void blink();

signals:

    void requestData();
    void retrySignal();

private:

    Ui::MainWindow *m_ui;

    QcGaugeWidget * PressureGauge1;
    QcNeedleItem *Needle1;
    QcGaugeWidget * PressureGauge2;
    QcNeedleItem *Needle2;
    QcGaugeWidget * PressureGauge3;
    QcNeedleItem *Needle3;
    QcGaugeWidget * PressureGauge4;
    QcNeedleItem *Needle4;

    int m_timerId;
    int m_steps;
    float m_realTime;
    QTime m_time;

    QDateTime *systemtime;
    QTimer *logtimer;
    QTimer *blinkTimer;
    QScrollBar *scrollbar;

    QString ConnectionStatusLogin = "";

    int trigger = 0;
    int redLight_1 = 1;
    int redLight_2 = 1;
    int redLight_3 = 1;
    int redLight_4 = 1;
    int redLight_5 = 1;
    int redLight_6 = 1;

    float roll = 0;
    float pitch = 0;
    float heading = 0;

    float temp = 0;

    float per1 = 0;
    float per2 = 0;
    float per3 = 0;
    float per4 = 0;
    float per5 = 0;

    float lvl1 = 0;
    float lvl2 = 0;
    float lvl3 = 0;
    float lvl4 = 0;
    float lvl5 = 0;

    float mass1 = 0;
    float mass2 = 0;
    float mass3 = 0;
    float mass4 = 0;
    float mass5 = 0;

    float vol1 = 0;
    float vol2 = 0;
    float vol3 = 0;
    float vol4 = 0;
    float vol5 = 0;

    float pres1 = 0;
    float pres2 = 0;
    float pres3 = 0;
    float EnPres = 0;

    int Pump_state1 = 0;
    int Pump_state2 = 0;

    int Valve_state1 = 0;
    int Valve_state2 = 0;
    int Valve_state3 = 0;
    int Valve_state4 = 0;

    float CGx;
    float CGy;

    float ffr = 0;
    float av_fuel = 0;
    float con_fuel = 0;

};

////////////////////////////////////////////////////////////////////////////////

#endif
