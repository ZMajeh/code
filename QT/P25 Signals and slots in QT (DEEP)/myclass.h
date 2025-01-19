#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QString>
#include <QDebug>

class myClass : public QObject
{
    Q_OBJECT
public:
    myClass(QString);
    QString name;
    void say(QString);
signals:
    void mySignal(QString);
public slots:
    void mySlot(QString);
};

#endif // MYCLASS_H
