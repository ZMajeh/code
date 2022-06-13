#ifndef MYITEM_H
#define MYITEM_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QBrush>
#include <QPen>
#include <QPainter>
#include <QWidget>

class MyItem : public QGraphicsItem
{
public:
    MyItem();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void doCollision();
protected:
    void advance(int phase);
private:
    qreal angle,speed,collided;

};

#endif // MYITEM_H
