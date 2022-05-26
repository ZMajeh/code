#include "driver.h"

driver::driver()
{
    // Create object of class which have signal and object for class which have slot
    myClass obj1("Anand"),obj2("Vijay"),obj3("Ajay");// This class have both
    connect(&obj1,SIGNAL(mySignal(QString)),&obj2,SLOT(mySlot(QString)));// This connects Signal of one class with slot of other
    connect(&obj1,SIGNAL(mySignal(QString)),&obj3,SLOT(mySlot(QString)));// Same
    obj1.say("QT's Signal and slot is very easy"); // Time to call method to emit signal, as signals are protected
}
