#ifndef MYGRAPHICSITEM_H
#define MYGRAPHICSITEM_H

#include <QGraphicsItem>
#include <QPainter>
#include <QWidget>
#include <QGraphicsSceneMouseEvent>
#include <QStyleOptionGraphicsItem>
#include <QRectF>
#include <QBrush>

class MyGraphicsItem : public QGraphicsItem
{
private:
    bool clicked;
public:
    MyGraphicsItem();
    QRectF boundingRect() const;
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // MYGRAPHICSITEM_H
