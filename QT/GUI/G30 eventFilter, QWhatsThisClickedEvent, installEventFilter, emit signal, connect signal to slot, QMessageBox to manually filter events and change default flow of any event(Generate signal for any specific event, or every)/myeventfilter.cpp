#include "myeventfilter.h"

myEventFilter::myEventFilter(QObject *parent) :
    QObject(parent)
{
}

/*
This is eventFilter, when it is true then event is skipped and your manual event can be executed, if False default event is performed
*/
bool myEventFilter::eventFilter(QObject *object, QEvent *event)
{
    // There are many events that can be filtered, I choose you "WhatsThisClicked"
    if(event->type()==QEvent::WhatsThisClicked)
    {
        // Static cast QEvent pointer to your selected event
        QWhatsThisClickedEvent *qwtcEvent=static_cast<QWhatsThisClickedEvent*>(event);
        // Emit means generate signal
        emit linkClicked(qwtcEvent->href());
        // Skip default flow of event
        return true;
    }
    return false;
}
