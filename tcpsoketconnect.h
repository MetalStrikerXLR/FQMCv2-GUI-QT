#ifndef TCPSOKETCONNECT_H
#define TCPSOKETCONNECT_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <string>
#include <QTextStream>

class TCPsoketconnect : public QObject
{
    Q_OBJECT

public:

    explicit TCPsoketconnect(QObject *parent = nullptr);
    ~TCPsoketconnect();

    void start();

signals:

    void updateConnectionStatus(QString);
    void sendUpdate(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);

public slots:

    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    void retry();
    void requestSignal();

private:

    QTcpSocket *socket;
    QString serialBuffer = "";
    QStringList splitData;
    QString connectionStatus = "Disconnected";

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
    float cf = 0;
};

#endif // TCPSOKETCONNECT_H
