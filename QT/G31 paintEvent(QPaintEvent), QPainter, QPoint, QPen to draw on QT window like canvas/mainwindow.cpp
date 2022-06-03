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


void MainWindow::paintEvent(QPaintEvent *e)
{
    QPainter myPainter(this);
    QPen myPen(Qt::red);
    QPoint p1(30,30),p2(100,100);
    myPen.setWidth(2);
    myPainter.setPen(myPen);
    myPainter.drawLine(p1,p2);
    myPen.setColor(Qt::black);
    myPen.setWidth(6);
    myPainter.setPen(myPen);
    myPainter.drawPoint(p1);
    myPainter.drawPoint(p2);

}
