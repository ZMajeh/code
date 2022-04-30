#ifndef MYTIMER_H
#define MYTIMER_H

#include <QObject>

#include<QtCore>

class MyTimer : public QObject
{
    Q_OBJECT
public:
    MyTimer(int time=1000);
    QTimer *timer;
    void stop();

signals:

public slots:
    virtual void post();

};

#endif // MYTIMER_H
