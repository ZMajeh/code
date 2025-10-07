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

// Drawing line with style
void MainWindow::paintEvent(QPaintEvent *e)
{
    QPainter myPainter(this);
    QPen myPen(Qt::black);
    QPoint p1(30,100),p2(200,100);
    myPen.setWidth(15);

    // FlatCap style pen
    myPen.setCapStyle(Qt::FlatCap);
    myPainter.setPen(myPen);
    myPainter.drawLine(p1,p2);

    // SquareCap style pen
    p1.setY(130);p2.setY(130);
    myPen.setCapStyle(Qt::SquareCap);
    myPainter.setPen(myPen);
    myPainter.drawLine(p1,p2);

    // RoundCap style pen
    p1.setY(160);p2.setY(160);
    myPen.setCapStyle(Qt::RoundCap);
    myPainter.setPen(myPen);
    myPainter.drawLine(p1,p2);
}
