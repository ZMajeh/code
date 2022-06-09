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


// Transformations
void MainWindow::paintEvent(QPaintEvent *e)
{
    // Initialize all necessary objects
    QPainter myPainter(this);
    QPen p1(Qt::black);
    QPen p2(Qt::red);
    QPen p3(Qt::green);
    QPen p4(Qt::blue);
    p1.setWidth(6);
    p2.setWidth(6);
    p3.setWidth(6);
    p4.setWidth(6);
    QRect r1(100,100,100,100);

    // Normal draw
    myPainter.setPen(p1);
    myPainter.drawRect(r1);

    // Translate and rotate
    myPainter.translate(150,-60);
    myPainter.rotate(45);
    myPainter.setPen(p2);
    myPainter.drawRect(r1);

    // Scale
    myPainter.scale(0.5,0.5);
    myPainter.setPen(p3);
    myPainter.drawRect(r1);

    // Reset all transformations
    myPainter.resetTransform();

    // Sheer
    myPainter.shear(0.2,0.2);
    myPainter.setPen(p4);
    myPainter.drawRect(r1);
}
