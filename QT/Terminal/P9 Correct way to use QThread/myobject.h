#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>
#include<QThread>
#include<QMutex>
class MyObject : public QObject
{
    Q_OBJECT
public:
    QThread *runningThread;
    QMutex *mux;
    explicit MyObject(QObject *parent = 0);
    void initObject(QThread &initThread,QString name,QMutex *mux);
    static int data;
    bool done;
    QString name;
signals:

public slots:
    void startThread();

};

#endif // MYOBJECT_H
