#include "myclass.h"

myClass::myClass(QString name)
{
    this->name=name;
}
void myClass::say(QString msg)
{
    // Need to emit signal here
    qDebug() << name << "Says," << msg;
    emit mySignal(msg);
}

void myClass::mySlot(QString s)
{
    // This is slot, so when signal is triggered, this method will be executed
    qDebug() << name << "says, someone told me .. "<< s;
}
