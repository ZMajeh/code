#include "mygraphicsitem.h"

MyGraphicsItem::MyGraphicsItem()
{
    clicked=false;
    setFlag(ItemIsMovable);
}

// Creating custom graphics item, needs 2 methods, boundingRect() const and paint()

// This is initial bounding rects
QRectF MyGraphicsItem::boundingRect() const
{
    return QRectF(0,0,100,100);
}

// This is paint method, called when object is paint, repaint or update
void MyGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //  Get bounding rects
    QRectF rec=boundingRect();
    // We can paint anything, as long as its in those bounds
    QBrush *myBrush;
    if(clicked)
    {
        myBrush=new QBrush(Qt::red);
        painter->fillRect(rec,*myBrush);
        QPolygon polly;
        polly << QPoint(rec.x()+rec.width()/2,rec.y());
        polly << QPoint(rec.x(),rec.y()+rec.height());
        polly << QPoint(rec.x()+rec.width(),rec.y()+rec.height());
        polly << QPoint(rec.x()+rec.width()/2,rec.y());
        painter->drawPolygon(polly);
    }
    else
    {
        myBrush=new QBrush(Qt::green);
        painter->fillRect(rec,*myBrush);
        painter->drawEllipse(rec);
    }
    painter->drawRect(rec);

}

// This execute when mouse is clicked
void MyGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    clicked=true;
    update();   // This is to repaint
    QGraphicsItem::mousePressEvent(event);
}

// This executes when mouse is released
void MyGraphicsItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    clicked=false;
    update();   // This is to repaint
    QGraphicsItem::mouseReleaseEvent(event);
}
