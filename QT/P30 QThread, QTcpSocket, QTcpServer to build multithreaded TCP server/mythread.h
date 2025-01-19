#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QString>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(int handle,QObject *parent = 0);

signals:
    void error(QTcpSocket::SocketError socketError);
public slots:
    void readyRead();
    void disconnected();
protected:
    void run();
private:
    int handle;
    QTcpSocket *socket;
    QString buffer;
};

#endif // MYTHREAD_H
