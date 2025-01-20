#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



// dRAWING AND FILLING POLYGON
void MainWindow::paintEvent(QPaintEvent *)
{
    // dECLARE ALL VARIABLES
    QPainter myPainter(this);
    QBrush myBrush;
    QPolygon myPolygon,myPolygon1,myPolygon2,myPolygon3;
    QPen myPen;
    QPainterPath myPainterPath;

    // Init polygon
    myPolygon << QPoint(30,30);
    myPolygon << QPoint(30,100);
    myPolygon << QPoint(100,30);
    myPolygon << QPoint(100,100);

    // Init pen
    myPen.setColor(Qt::red);
    myPen.setWidth(6);
    myPen.setStyle(Qt::DashDotDotLine);
    myPen.setJoinStyle(Qt::RoundJoin);

    // Init brush
    myBrush.setStyle(Qt::SolidPattern);
    myBrush.setColor(Qt::green);

    // Init path
    myPainterPath.addPolygon(myPolygon);

    // Draw all
    myPainter.setPen(myPen);
    myPainter.drawPolygon(myPolygon);
    myPainter.fillPath(myPainterPath,myBrush);


    // Init polygon 1
    myPolygon1 << QPoint(230,30);
    myPolygon1 << QPoint(230,100);
    myPolygon1 << QPoint(300,30);
    myPolygon1 << QPoint(300,100);

    // Init path
    myPainterPath.addPolygon(myPolygon1);

    // Init pen
    myPen.setStyle(Qt::DashDotLine);
    myPen.setJoinStyle(Qt::MiterJoin);
    myPainter.setPen(myPen);

    // Draw all
    myPainter.drawPolygon(myPolygon1);
    myPainter.fillPath(myPainterPath,myBrush);


    // Init polygon 2
    myPolygon2 << QPoint(30,130);
    myPolygon2 << QPoint(30,200);
    myPolygon2 << QPoint(100,130);
    myPolygon2 << QPoint(100,200);

    // Init path
    myPainterPath.addPolygon(myPolygon2);

    // Init pen
    myPen.setStyle(Qt::DashLine);
    myPen.setJoinStyle(Qt::BevelJoin);
    myPainter.setPen(myPen);

    // Draw all
    myPainter.fillPath(myPainterPath,myBrush);
    myPainter.drawPolygon(myPolygon2);

    // Init polygon 3
    myPolygon3 << QPoint(230,130);
    myPolygon3 << QPoint(230,200);
    myPolygon3 << QPoint(300,130);
    myPolygon3 << QPoint(300,200);

    // Innit path
    myPainterPath.addPolygon(myPolygon3);

    // Init pen
    myPen.setStyle(Qt::SolidLine);
    myPen.setJoinStyle(Qt::SvgMiterJoin);
    myPainter.setPen(myPen);

    // Draw all
    myPainter.fillPath(myPainterPath,myBrush);
    myPainter.drawPolygon(myPolygon3);

}
