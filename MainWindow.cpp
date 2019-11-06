
#ifndef MAINWINDOW_CPP
#define MAINWINDOW_CPP
#endif

#include "MainWindow.h"
#include "ui_MainWindow.h"

using namespace std;

MainWindow::MainWindow( QWidget *parent ) :
    QMainWindow( parent ),
    m_ui( new Ui::MainWindow ),
    m_timerId ( 0 ),
    m_steps   ( 0 ),
    m_realTime ( 0.0 )
{
    m_ui->setupUi( this );
    logtimer = new QTimer(this);
    blinkTimer = new QTimer(this);

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    m_ui->Connection_Status->setTextFormat(Qt::RichText);
    m_ui->Connection_Status->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>Disconnected</span>");

    m_ui->Pump_status1->setTextFormat(Qt::RichText);
    m_ui->Pump_status2->setTextFormat(Qt::RichText);

    m_ui->Valve_status1->setTextFormat(Qt::RichText);
    m_ui->Valve_status2->setTextFormat(Qt::RichText);
    m_ui->Valve_status3->setTextFormat(Qt::RichText);
    m_ui->Valve_status4->setTextFormat(Qt::RichText);

    m_ui->Pump_status1->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>OFF</span>");
    m_ui->Pump_status2->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>OFF</span>");

    m_ui->Valve_status1->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>CLOSED</span>");
    m_ui->Valve_status2->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>CLOSED</span>");
    m_ui->Valve_status3->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>CLOSED</span>");
    m_ui->Valve_status4->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>CLOSED</span>");

    m_ui->green_1->hide();
    m_ui->green_2->hide();
    m_ui->green_3->hide();
    m_ui->green_4->hide();
    m_ui->green_5->hide();
    m_ui->green_6->hide();

    m_ui->red_1->hide();
    m_ui->red_2->hide();
    m_ui->red_3->hide();
    m_ui->red_4->hide();
    m_ui->red_5->hide();
    m_ui->red_6->hide();

    redLight_1 = 1;
    redLight_2 = 1;
    redLight_3 = 1;
    redLight_4 = 1;
    redLight_5 = 1;
    redLight_6 = 1;

    m_ui->fuel_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>LO FUEL</span>");
    m_ui->P1_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>LO PR</span>");
    m_ui->P2_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>LO PR</span>");
    m_ui->P3_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>LO PR</span>");
    m_ui->P4_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>LO PR</span>");
    m_ui->temp_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>LO TEMP</span>");

    m_ui->Log_frame->setStyleSheet("#Log_frame { border: 3px solid cyan; }");
    scrollbar = m_ui->Log_Display->verticalScrollBar();

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    PressureGauge1 = new QcGaugeWidget;
    PressureGauge1->addBackground(99);
    QcBackgroundItem *bkg1 = PressureGauge1->addBackground(92);
    bkg1->clearrColors();
    bkg1->addColor(float(0.1),Qt::black);
    bkg1->addColor(1.0,Qt::white);

    QcBackgroundItem *bkg2 = PressureGauge1->addBackground(88);
    bkg2->clearrColors();
    bkg2->addColor(float(0.1),Qt::darkGray);
    bkg2->addColor(1.0,Qt::darkGray);

    PressureGauge1->addArc(55);
    PressureGauge1->addDegrees(65)->setValueRange(0,50);
    PressureGauge1->addColorBand(50);
    PressureGauge1->addValues(75)->setValueRange(0,50);

    PressureGauge1->addLabel(65)->setText("T1->T3");
    QcLabelItem *lab = PressureGauge1->addLabel(40);
    lab->setText("0");
    Needle1 = PressureGauge1->addNeedle(60);
    Needle1->setLabel(lab);
    Needle1->setColor(Qt::black);
    Needle1->setValueRange(0,50);
    PressureGauge1->addBackground(7);
    PressureGauge1->addGlass(88);
    m_ui->p1_gauge_layout->addWidget(PressureGauge1);

    PressureGauge2 = new QcGaugeWidget;
    PressureGauge2->addBackground(99);
    QcBackgroundItem *bkg3 = PressureGauge2->addBackground(92);
    bkg3->clearrColors();
    bkg3->addColor(float(0.1),Qt::black);
    bkg3->addColor(1.0,Qt::white);

    QcBackgroundItem *bkg4 = PressureGauge2->addBackground(88);
    bkg4->clearrColors();
    bkg4->addColor(float(0.1),Qt::darkGray);
    bkg4->addColor(1.0,Qt::darkGray);

    PressureGauge2->addArc(55);
    PressureGauge2->addDegrees(65)->setValueRange(0,50);
    PressureGauge2->addColorBand(50);

    PressureGauge2->addValues(75)->setValueRange(0,50);

    PressureGauge2->addLabel(65)->setText("T3->T1");
    QcLabelItem *lab2 = PressureGauge2->addLabel(40);
    lab2->setText("0");
    Needle2 = PressureGauge2->addNeedle(60);
    Needle2->setLabel(lab2);
    Needle2->setColor(Qt::black);
    Needle2->setValueRange(0,50);
    PressureGauge2->addBackground(7);
    PressureGauge2->addGlass(88);
    m_ui->p2_gauge_layout->addWidget(PressureGauge2);

    PressureGauge3 = new QcGaugeWidget;
    PressureGauge3->addBackground(99);
    QcBackgroundItem *bkg5 = PressureGauge3->addBackground(92);
    bkg5->clearrColors();
    bkg5->addColor(float(0.1),Qt::black);
    bkg5->addColor(1.0,Qt::white);

    QcBackgroundItem *bkg6 = PressureGauge3->addBackground(88);
    bkg6->clearrColors();
    bkg6->addColor(float(0.1),Qt::darkGray);
    bkg6->addColor(1.0,Qt::darkGray);

    PressureGauge3->addArc(55);
    PressureGauge3->addDegrees(65)->setValueRange(0,50);
    PressureGauge3->addColorBand(50);

    PressureGauge3->addValues(75)->setValueRange(0,50);

    PressureGauge3->addLabel(65)->setText("VENT-L");
    QcLabelItem *lab3 = PressureGauge3->addLabel(40);
    lab3->setText("0");
    Needle3 = PressureGauge3->addNeedle(60);
    Needle3->setLabel(lab3);
    Needle3->setColor(Qt::black);
    Needle3->setValueRange(0,50);
    PressureGauge3->addBackground(7);
    PressureGauge3->addGlass(88);
    m_ui->p3_gauge_layout->addWidget(PressureGauge3);

    PressureGauge4 = new QcGaugeWidget;
    PressureGauge4->addBackground(99);
    QcBackgroundItem *bkg7 = PressureGauge4->addBackground(92);
    bkg7->clearrColors();
    bkg7->addColor(float(0.1),Qt::black);
    bkg7->addColor(1.0,Qt::white);

    QcBackgroundItem *bkg8 = PressureGauge4->addBackground(88);
    bkg8->clearrColors();
    bkg8->addColor(float(0.1),Qt::darkGray);
    bkg8->addColor(1.0,Qt::darkGray);

    PressureGauge4->addArc(55);
    PressureGauge4->addDegrees(65)->setValueRange(0,50);
    PressureGauge4->addColorBand(50);

    PressureGauge4->addValues(75)->setValueRange(0,50);

    PressureGauge4->addLabel(65)->setText("ENG-L");
    QcLabelItem *lab4 = PressureGauge4->addLabel(40);
    lab4->setText("0");
    Needle4 = PressureGauge4->addNeedle(60);
    Needle4->setLabel(lab4);
    Needle4->setColor(Qt::black);
    Needle4->setValueRange(0,50);
    PressureGauge4->addBackground(7);
    PressureGauge4->addGlass(88);
    m_ui->p4_gauge_layout->addWidget(PressureGauge4);

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    connect(logtimer, SIGNAL(timeout()),this, SLOT(updateLog()));
    connect(blinkTimer, SIGNAL(timeout()),this, SLOT(blink()));
    connect(&TCPsocket, SIGNAL(sendUpdate(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)), this, SLOT(applyUpdate(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)));
    connect(&TCPsocket,SIGNAL(updateConnectionStatus(QString)),this,SLOT(connectionStatus(QString)));            // Connection Status Signal
    connect(this,SIGNAL(retrySignal()),&TCPsocket,SLOT(retry()));                                                // Retry Button Signal
    connect(this, SIGNAL(requestData()),&TCPsocket, SLOT(requestSignal()));

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    TCPsocket.moveToThread(&socketThread);
    socketThread.start();
    emit retrySignal();

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    m_timerId  = startTimer( 0 );
    m_time.start();
    logtimer->start(1000);
    blinkTimer->start(500);

}

///////////////////////////////// MainWindow Destructor ///////////////////////////////////////////////////////

MainWindow::~MainWindow()  // Main Window Destructor
{
    socketThread.quit();
    socketThread.wait();

    cout << "Average time step: " << ( double(m_realTime) ) / ( double(m_steps )) << " s" << endl;
    if ( m_timerId ) killTimer( m_timerId );

    if ( m_ui )
    {
        delete m_ui;
    }

    m_ui = nullptr;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void MainWindow::timerEvent( QTimerEvent *event )
{
    /////////////////////////////////
    QMainWindow::timerEvent( event );
    /////////////////////////////////

    float timeStep = m_time.restart();
    m_realTime = m_realTime + timeStep / 1000.0f;

    emit requestData();

    m_ui->Temp_display->display(double(temp));

    m_ui->PP1_display->display(double(pres1));
    m_ui->PP2_display->display(double(pres2));
    m_ui->PP3_display->display(double(pres3));
    m_ui->EPP_display->display(double(EnPres));

    Needle1->setCurrentValue(pres1);
    Needle2->setCurrentValue(pres2);
    Needle3->setCurrentValue(pres3);
    Needle4->setCurrentValue(EnPres);

    m_ui->FWD_vol->display(double(vol1));
    m_ui->MID_vol->display(double(vol2));
    m_ui->REAR_vol->display(double(vol3));
    m_ui->LT_vol_display->display(double(vol4));
    m_ui->RT_vol_display->display(double(vol5));

    m_ui->Lvl1_display->display(double(lvl1));
    m_ui->Lvl2_display->display(double(lvl2));
    m_ui->Lvl3_display->display(double(lvl3));
    m_ui->Lvl4_display->display(double(lvl4));
    m_ui->Lvl5_display->display(double(lvl5));

    m_ui->TankFWD->setValue(int(per1));
    m_ui->TankMID->setValue(int(per2));
    m_ui->TankREAR->setValue(int(per3));
    m_ui->RTank->setPercentage(int(per4));
    m_ui->LTank->setPercentage(int(per5));

    m_ui->TankFWD->setFormat("FWD: "+QString::number(double(per1))+"%"+" | "+QString::number(double(vol1))+"L");
    m_ui->TankMID->setFormat("MID: "+QString::number(double(per2))+"%"+" | "+QString::number(double(vol2))+"L");
    m_ui->TankREAR->setFormat("REAR: "+QString::number(double(per3))+"%"+" | "+QString::number(double(vol3))+"L");

    m_ui->TankFWD->update();
    m_ui->TankMID->update();
    m_ui->TankREAR->update();

    updatePumpandValves();
    checkWarnings();

    m_ui->datetime_label->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"));

    m_steps++;
}

void MainWindow::applyUpdate(float data1, float data2, float data3, float data4, float data5, float data6, float data7, float data8, float data9, float data10, float data11, float data12, float data13, float data14, float data15, float data16, float data17, float data18, float data19, float data20, float data21, float data22, float data23, float data24, float data25, float data26, float data27, float data28, float data29, float data30, float data31, float data32, float data33, float data34, float data35, float data36, float data37, float data38, float data39, float data40)
{
    roll = data1;
    pitch = data2;
    heading = data3;

    temp = data4;

    per1 = data5;
    per2 = data6;
    per3 = data7;
    per4 = data8;
    per5 = data9;

    mass1 = data10;
    mass2 = data11;
    mass3 = data12;
    mass4 = data13;
    mass5 = data14;

    vol1 = data15;
    vol2 = data16;
    vol3 = data17;
    vol4 = data18;
    vol5 = data19;

    lvl1 = data20;
    lvl2 = data21;
    lvl3 = data22;
    lvl4 = data23;
    lvl5 = data24;

    //    pressure1 = data;
    //    pressure2 = data;
    //    pressure3 = data;
    //    EPres = data;

    //    Pump_state1 = data;
    //    Pump_state2 = data;

    //    Valve_state1 = data;
    //    Valve_state2 = data;
    //    Valve_state3 = data;
    //    Valve_state4 = data;

    //    CGx = data;
    //    CGy = data;

    //    av_fuel = data;
    //    ffr = data;
    //    con_fuel = data;

}

void MainWindow::updateLog()
{
    scrollbar->setValue(scrollbar->maximum());
    m_ui->Log_Display->insertPlainText(QDateTime::currentDateTime().toString("[yyyy-MM-dd HH:mm:ss] ") + "pitch: " + QString::number(double(pitch)) + ", roll: " + QString::number(double(roll)) + ", heading: " + QString::number(double(heading)) + ", temp: " + QString::number(double(temp)) + ", perFWD: " + QString::number(double(per1)) + ", perMID: " + QString::number(double(per2)) + ", perREAR: " + QString::number(double(per3)) + ", perLT: " + QString::number(double(per4)) + ", perRT: " + QString::number(double(per5)) + ", massFWD: " + QString::number(double(mass1)) + ", massMID: " + QString::number(double(mass2)) + ", massREAR: " + QString::number(double(mass3)) + ", massLT: " + QString::number(double(mass4)) + ", massRT: " + QString::number(double(mass5)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + ", roll: " + QString::number(double(roll)) + "\n");

}

void MainWindow::blink()
{
    if(trigger == 0)
    {
        if(redLight_1 == 1)
        {
            m_ui->red_1->show();
        }
        else
        {
            m_ui->green_1->show();
        }

        if(redLight_2 == 1)
        {
            m_ui->red_2->show();
        }
        else
        {
            m_ui->green_2->show();
        }

        if(redLight_3 == 1)
        {
            m_ui->red_3->show();
        }
        else
        {
            m_ui->green_3->show();
        }

        if(redLight_4 == 1)
        {
            m_ui->red_4->show();
        }
        else
        {
            m_ui->green_4->show();
        }

        if(redLight_5 == 1)
        {
            m_ui->red_5->show();
        }
        else
        {
            m_ui->green_5->show();
        }

        if(redLight_6 == 1)
        {
            m_ui->red_6->show();
        }
        else
        {
            m_ui->green_6->show();
        }

        trigger = 1;
    }
    else
    {
        if(redLight_1 == 1)
        {
            m_ui->red_1->hide();
        }
        else
        {
            m_ui->green_1->hide();
        }

        if(redLight_2 == 1)
        {
            m_ui->red_2->hide();
        }
        else
        {
            m_ui->green_2->hide();
        }

        if(redLight_3 == 1)
        {
            m_ui->red_3->hide();
        }
        else
        {
            m_ui->green_3->hide();
        }

        if(redLight_4 == 1)
        {
            m_ui->red_4->hide();
        }
        else
        {
            m_ui->green_4->hide();
        }

        if(redLight_5 == 1)
        {
            m_ui->red_5->hide();
        }
        else
        {
            m_ui->green_5->hide();
        }

        if(redLight_6 == 1)
        {
            m_ui->red_6->hide();
        }
        else
        {
            m_ui->green_6->hide();
        }

        trigger = 0;
    }
}

void MainWindow::connectionStatus(QString status)
{
    ConnectionStatusLogin = status;

    if(status == "Connected")
    {
        m_ui->Connection_Status->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>Connected</span>");
    }
    else if(status == "Retrying")
    {
        m_ui->Connection_Status->setText("<span style=' font-size:14pt; font-weight:600; color:#ffaa00;'>Connecting</span>");
    }
    else
    {
        m_ui->Connection_Status->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>Disconnected</span>");
    }
}

void MainWindow::updatePumpandValves()
{
    if(Pump_state1 == 1)
    {
        m_ui->Pump_status1->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>ON</span>");
    }
    else
    {
        m_ui->Pump_status1->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>OFF</span>");
    }

    if(Pump_state2 == 1)
    {
        m_ui->Pump_status2->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>ON</span>");
    }
    else
    {
        m_ui->Pump_status2->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>OFF</span>");
    }


    if(Valve_state1 == 1)
    {
        m_ui->Valve_status1->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>OPEN</span>");
    }
    else
    {
        m_ui->Valve_status1->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>CLOSED</span>");
    }

    if(Valve_state2 == 1)
    {
        m_ui->Valve_status2->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>OPEN</span>");
    }
    else
    {
        m_ui->Valve_status2->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>CLOSED</span>");
    }

    if(Valve_state3 == 1)
    {
        m_ui->Valve_status3->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>OPEN</span>");
    }
    else
    {
        m_ui->Valve_status3->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>CLOSED</span>");
    }

    if(Valve_state4 == 1)
    {
        m_ui->Valve_status4->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>OPEN</span>");
    }
    else
    {
        m_ui->Valve_status4->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>CLOSED</span>");
    }
}

void MainWindow::checkWarnings()
{
    if(av_fuel <= 70)
    {
        m_ui->fuel_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>LO FUEL</span>");
        redLight_1 = 1;
    }
    else
    {
        m_ui->fuel_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>NORMAL</span>");
        redLight_1 = 0;
    }

    if(pres1 <= 20 && pres1 >= 12)
    {
        m_ui->P1_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>NORMAL</span>");
        redLight_4 = 0;
    }
    else if(pres1 > 20)
    {
        m_ui->P1_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>HI PR</span>");
        redLight_4 = 1;
    }
    else
    {
        m_ui->P1_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>LO PR</span>");
        redLight_4 = 1;
    }

    if(pres2 <= 20 && pres2 >= 12)
    {
        m_ui->P2_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>NORMAL</span>");
        redLight_5 = 0;
    }
    else if(pres2 > 20)
    {
        m_ui->P2_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>HI PR</span>");
        redLight_5 = 1;
    }
    else
    {
        m_ui->P2_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>LO PR</span>");
        redLight_5 = 1;
    }

    if(pres3 <= 20 && pres3 >= 12)
    {
        m_ui->P3_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>NORMAL</span>");
        redLight_2 = 0;
    }
    else if(pres3 > 20)
    {
        m_ui->P3_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>HI PR</span>");
        redLight_2 = 1;
    }
    else
    {
        m_ui->P3_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>LO PR</span>");
        redLight_2 = 1;
    }

    if(EnPres <= 40 && EnPres >= 20)
    {
        m_ui->P4_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>NORMAL</span>");
        redLight_3 = 0;
    }
    else if(EnPres > 20)
    {
        m_ui->P4_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>HI PR</span>");
        redLight_3 = 1;
    }
    else
    {
        m_ui->P4_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>LO PR</span>");
        redLight_3 = 1;
    }

    if(temp <= 50 && temp >= 0)
    {
        m_ui->temp_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#00ff00'>NORMAL</span>");
        redLight_6 = 0;
    }
    else if(temp > 50)
    {
        m_ui->temp_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>HI TEMP</span>");
        redLight_6 = 1;
    }
    else
    {
        m_ui->temp_status_ind->setText("<span style=' font-size:14pt; font-weight:600; color:#ff0000'>LO TEMP</span>");
        redLight_6 = 1;
    }

}

void MainWindow::on_Retrybutton_clicked()
{
    emit retrySignal();
}
