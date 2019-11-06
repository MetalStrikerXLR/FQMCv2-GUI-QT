#include "tcpsoketconnect.h"

TCPsoketconnect::TCPsoketconnect(QObject *parent) :
    QObject(parent)
{

}

TCPsoketconnect::~TCPsoketconnect()
{
    qDebug() << "Socket Destructor";
    socket->close();
    delete socket;
}

void TCPsoketconnect::start()
{
    socket = new QTcpSocket(this);

    connect(socket,SIGNAL(connected()), this, SLOT(connected()));                      // When socket connected calls connected function
    connect(socket,SIGNAL(disconnected()), this, SLOT(disconnected()));                // When socket disconnected calls disconnected function
    connect(socket,SIGNAL(readyRead()), this, SLOT(readyRead()));                      // When data is available at socket to be read, calls readyRead function
    connect(socket,SIGNAL(bytesWritten(qint64)),this,SLOT(bytesWritten(qint64)));      // When data written on socket, calls bytesWritten function and tells number of bytes written

retry:

    connectionStatus = "Retrying";
    emit updateConnectionStatus(connectionStatus);

    qDebug() << "Connecting....";

    socket ->connectToHost("192.168.2.10",6000);  //192.168.2.10

    if(!socket->waitForConnected(5000))
    {
        qDebug() << "Error: " << socket->errorString();
        goto retry;

    }
}

void TCPsoketconnect::connected()
{
    qDebug() << "Connected!";

    socket->write("Hello");                          // Send Confirmation Message to Arduino to begin data upload

    connectionStatus = "Connected";
    emit updateConnectionStatus(connectionStatus);

}

void TCPsoketconnect::disconnected()
{
    qDebug() << "Connection to Server closed";                      // Disconnected

    connectionStatus = "Disconnected";
    emit updateConnectionStatus(connectionStatus);

    Pump_state1 = 0;
    Pump_state2 = 0;

    Valve_state1 = 0;
    Valve_state2 = 0;
    Valve_state3 = 0;
    Valve_state4 = 0;


    disconnect(socket,SIGNAL(connected()), this, SLOT(connected()));
    disconnect(socket,SIGNAL(disconnected()), this, SLOT(disconnected()));
    disconnect(socket,SIGNAL(readyRead()), this, SLOT(readyRead()));
    disconnect(socket,SIGNAL(bytesWritten(qint64)),this,SLOT(bytesWritten(qint64)));

    socket->close();
}

void TCPsoketconnect::bytesWritten(qint64 bytes)
{
    qDebug() << "we wrote: " << bytes;
}

void TCPsoketconnect::readyRead()
{
    qDebug() << "Reading.....";

    serialBuffer = socket->readAll();

    splitData = serialBuffer.split(",");

    qDebug() << serialBuffer;
    qDebug() << splitData;
    qDebug() << splitData.size();

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//    if(splitData.size() >= 6)
//    {
//        if(splitData[0].compare("r") == 0 && splitData[2].compare("pi") == 0 && splitData[4].compare("h") == 0)
//        {
//            QTextStream in1(&splitData[1]);
//            in1 >> Roll;

//            QTextStream in2(&splitData[3]);
//            in2 >> Pitch;

//            QTextStream in3(&splitData[5]);
//            in3 >> Heading;


//            qDebug() << "Roll: " << Roll << "Pitch: " << Pitch << "Heading: " << Heading;

//        }
//    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//    if(splitData.size() >= 12)
//    {
//        if(splitData[6].compare("t1") == 0 && splitData[8].compare("t2") == 0 && splitData[10].compare("t3") == 0)
//        {

//            QTextStream in4(&splitData[7]);
//            in4 >> temp1;

//            QTextStream in5(&splitData[9]);
//            in5 >> temp2;

//            QTextStream in6(&splitData[11]);
//            in6 >> temp3;


//            qDebug() << "Temperature 1: " << temp1 << "Temperature 2: " << temp2 << "Temperature 3: " << temp3;

//        }
//    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//    if(splitData.size() >= 26)
//    {
//        if(splitData[12].compare("p1") == 0 && splitData[14].compare("p2") == 0 && splitData[16].compare("p3") == 0 && splitData[18].compare("p4") == 0 && splitData[20].compare("p5") == 0 && splitData[22].compare("p6") == 0 && splitData[24].compare("ep") == 0)
//        {

//            QTextStream in7(&splitData[13]);
//            in7 >> pressure1;

//            QTextStream in8(&splitData[15]);
//            in8 >> pressure2;

//            QTextStream in9(&splitData[17]);
//            in9 >> pressure3;

//            QTextStream in10(&splitData[19]);
//            in10 >> pressure4;

//            QTextStream in11(&splitData[21]);
//            in11 >> pressure5;

//            QTextStream in12(&splitData[23]);
//            in12 >> pressure6;

//            QTextStream in13(&splitData[25]);
//            in13 >> Epressure;

//            qDebug() << "Pressure 1: " << pressure1 << "Pressure 2: " << pressure2 << "Pressure 3: " << pressure3 << "Pressure 4: " << pressure4 << "Pressure 5: " << pressure5 << "Pressure 6: " << pressure6 << "Engine Pressure: " << Epressure;

//        }
//    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//    if(splitData.size() >= 32)
//    {
//        if(splitData[26].compare("v1") == 0 && splitData[28].compare("v2") == 0 && splitData[30].compare("v3") == 0)
//        {
//            QTextStream in14(&splitData[27]);
//            in14 >> volume1;

//            QTextStream in15(&splitData[29]);
//            in15 >> volume2;

//            QTextStream in16(&splitData[31]);
//            in16 >> volume3;

//            qDebug() << "Volume 1: " << volume1 << "Volume 2: " << volume2 << "Volume 3: " << volume3;

//        }
//    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//    if(splitData.size() >= 38)
//    {
//        if(splitData[32].compare("l1") == 0 && splitData[34].compare("l2") == 0 && splitData[36].compare("l3") == 0)
//        {
//            QTextStream in17(&splitData[33]);
//            in17 >> level1;

//            QTextStream in18(&splitData[35]);
//            in18 >> level2;

//            QTextStream in19(&splitData[37]);
//            in19 >> level3;

//            qDebug() << "Level 1: " << level1 << "Level 2: " << level2 << "Level 3: " << level3;

//        }
//    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//    if(splitData.size() >= 44)
//    {
//        if(splitData[38].compare("per1") == 0 && splitData[40].compare("per2") == 0 && splitData[42].compare("per3") == 0)
//        {

//            QTextStream in20(&splitData[39]);
//            in20 >> percentage1;

//            QTextStream in21(&splitData[41]);
//            in21 >> percentage2;

//            QTextStream in22(&splitData[43]);
//            in22 >> percentage3;

//            qDebug() << "Percentage 1: " << percentage1 << "Percentage 2: " << percentage2 << "Percentage 3: " << percentage3;

//        }
//    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//    if(splitData.size() >= 52)
//    {
//        if(splitData[44].compare("pst1") == 0 && splitData[46].compare("pst2") == 0 && splitData[48].compare("pst3") == 0 && splitData[50].compare("pst4") == 0)
//        {
//            QTextStream in23(&splitData[45]);
//            in23 >> Pump_state1;

//            QTextStream in24(&splitData[47]);
//            in24 >> Pump_state2;


//            qDebug() << "Pump Status 1: " << Pump_state1 << "Pump Status 2: " << Pump_state2;

//        }
//    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//    if(splitData.size() >= 60)
//    {
//        if(splitData[52].compare("pst5") == 0 && splitData[54].compare("pst6") == 0 && splitData[56].compare("vst1") == 0 && splitData[58].compare("vst2") == 0)
//        {


//            QTextStream in29(&splitData[57]);
//            in29 >> Valve_state1;

//            QTextStream in30(&splitData[59]);
//            in30 >> Valve_state2;

//            qDebug() << "Valve Status 1: " << Valve_state1 << "Valve Status 2: " << Valve_state2;

//        }
//    }


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//    if(splitData.size() >= 60)
//    {
//        if(splitData[61].compare("cgx") == 0 && splitData[63].compare("cgy") == 0)
//        {
//            QTextStream in31(&splitData[62]);
//            in31 >> CGx;

//            QTextStream in32(&splitData[64]);
//            in32 >> CGy;

//            qDebug() << "CG x-coordinates: " << CGx << "CG y-coordinates: " << CGy;

//        }
//    }

}

void TCPsoketconnect::retry()
{
    start();
}

void TCPsoketconnect::requestSignal()
{
    emit sendUpdate(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
}



