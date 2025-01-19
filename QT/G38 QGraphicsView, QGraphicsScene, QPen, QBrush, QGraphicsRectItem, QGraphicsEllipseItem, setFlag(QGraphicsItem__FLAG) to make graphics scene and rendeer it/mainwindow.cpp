#include "mainwindow.h"
#include "ui_mainwindow.h"

// Drawing graphics
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Scene is like canvas
    myScene=new QGraphicsScene(this);
    ui->graphicsView->setScene(myScene);

    // Pen to draw
    myPen=new QPen(Qt::black);
    myPen->setWidth(6);

    // Brush to color
    redBrush=new QBrush(Qt::red);
    blueBrush=new QBrush(Qt::blue);

    // This method is used to add items in graphics scene
    myRect=myScene->addRect(-100,-100,90,90,*myPen,*blueBrush);
    myEllipse=myScene->addEllipse(100,100,100,100,*myPen,*redBrush);

    // This is how we can set properties for added item or modify them entirely
    myRect->setFlag(QGraphicsItem::ItemIsMovable);
    myEllipse->setFlag(QGraphicsItem::ItemIsSelectable);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// We added button to rotate canvas
void MainWindow::on_pushButton_clicked()
{
    ui->graphicsView->rotate(10);
}
// This is for reversing rotate back to normal
void MainWindow::on_pushButton_2_clicked()
{
    ui->graphicsView->rotate(-10);
}
