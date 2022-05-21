#ifndef MYEVENTFILTER_H
#define MYEVENTFILTER_H

#include <QObject>
#include <QtGui>
#include <QtCore>

class myEventFilter : public QObject
{
    Q_OBJECT
public:
    explicit myEventFilter(QObject *parent = 0);

signals:
    void linkClicked(const QString &);
protected:
    bool eventFilter(QObject *object, QEvent *event);
public slots:
};

#endif // MYEVENTFILTER_H
