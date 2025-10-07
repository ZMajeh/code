#include "myitem.h"

// Lets init item
MyItem::MyItem()
{
    // Angle, speed and position is necessary
    angle=qrand()%360;
    setRotation(angle);
    speed=5;
    // Map to parent is very useful, it transform coordinates to parent
    // Remmeber, if this bounds goes out side of our main bounds, then segmentation fault occurs
    setPos(mapToParent((qrand()%2==0)?(qrand()%-100):(qrand()%100),(qrand()%2==0)?(qrand()%-100):(qrand()%100)));
    // This is collide duration to do some other task during collision
    collided=0;
}

// boundingRect and paint are manditory virtual methods for making new QGraphicsItem
QRectF MyItem::boundingRect() const
{
    return QRectF(0,0,20,20);
}

// This is called when object is to be painted
void MyItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // Reduce collision time if its non zero
    if(collided>0)collided--;
    else collided=0;    // Cant be negative, so minimum 0
    // Get bounds
    QRectF rec=boundingRect();
    // Check if item outside the scene rect
    if(!scene()->sceneRect().contains(mapToParent(-rec.width(),-(rec.width()+2))))
        doCollision();
    // Brush to paint item
    QBrush myBrush(Qt::green);
    // Check for collision
    if(scene()->collidingItems(this).isEmpty())
    {
        // No collision
        // But collision time is over or not
        if(collided<=0)
            // No collision time
            myBrush.setColor(Qt::green);
        else
            // Active collision time, can do anything here(Like adding different image insted also possible
            myBrush.setColor(Qt::red);
    }
    else
    {
        // Collosion occured
        myBrush.setColor(Qt::red);
        // Add collision time
        collided+=3;
        // And do something in collision time, can be anything
        doCollision();
    }
    // This is just drawing out our object
    painter->fillRect(rec,myBrush);
    painter->drawRect(rec);
}

// Todo when coollision is occured
void MyItem::doCollision()
{
    // We here changed angle of rotation for our object
    if(qrand()%2==0)
    {
        setRotation(rotation()+90+(qrand()%45));
    }
    else
    {
        setRotation(rotation()-90-(qrand()%45));
    }
    // Check if new point is inside or outside of bounding rect
    QPointF newPoint=mapToParent(-(boundingRect().width()),-(boundingRect().width()+2));

    // When point is in bounds
    if(scene()->sceneRect().contains(newPoint))
    {
        // just set it
        setPos(newPoint);
    }
    else
    {
        // Fix again
        // Going outside of block : setPos(mapToParent(0,0));
        doCollision();
    }
}

// This is slot, called each time on timer's timeout signal, we have to set it using connect
// This is very important to achieve animation
void MyItem::advance(int phase)
{
    if(!phase)return;
    //QPointF position=pos();
    setPos(mapToParent(0,-(speed)));
}
