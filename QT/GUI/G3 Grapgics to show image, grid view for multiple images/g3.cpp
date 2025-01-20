#include "g3.h"
#include "ui_g3.h"

G3::G3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::G3)
{
    int width=150,height=150,perLine=10,spacingW=20,spacingH=20;
    ui->setupUi(this);
    addImage("d:\\Book\\B1\\p1.png",ui->graphicsView);
    ui->graphicsView->resize(400,400);
    ui->graphicsView->setGeometry(QRect(0,0,400,400));
    for(int j=0,i=0;j<3;i++)
    {
        QGraphicsView *gv1=new QGraphicsView(this);
        addImage("d:\\Book\\B1\\p1.png",gv1);
        gv1->resize(width,height);
        gv1->setGeometry(QRect(width*i+spacingW*i,height*j+spacingH*j,width,height));
        if((i+1)%perLine==0)
        {
            j++;i=-1;
        }
    }


}
void G3::addImage(const char *file,QGraphicsView *gv)
{
    QImage image(file);
    //image.scaled(100, 100, Qt::KeepAspectRatio);
    QGraphicsScene* scene = new QGraphicsScene();
    gv->setScene(scene);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
    //scene->setSceneRect(0,0,100,100);
   // item->scale();
    item->scale(gv->viewport()->width()/item->sceneBoundingRect().width(),
                gv->viewport()->height()/item->sceneBoundingRect().height());
    scene->addItem(item);
    connect(gv,SIGNAL(clicked()),this,SLOT(close()));
}

G3::~G3()
{
    delete ui;
}
