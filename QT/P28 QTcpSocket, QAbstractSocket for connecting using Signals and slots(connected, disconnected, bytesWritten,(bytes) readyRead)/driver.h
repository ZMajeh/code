#ifndef DRIVER_H
#define DRIVER_H
#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDebug>

class driver: QObject
{
    Q_OBJECT
public:
    driver();
    void drive();
    QTcpSocket *socket;
public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
};

#endif // DRIVER_H
