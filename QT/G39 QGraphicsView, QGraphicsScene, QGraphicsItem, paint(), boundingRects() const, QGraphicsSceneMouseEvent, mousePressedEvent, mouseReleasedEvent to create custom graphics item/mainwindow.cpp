#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    item=new MyGraphicsItem();
    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    scene->addItem(item);
}

MainWindow::~MainWindow()
{
    delete ui;
}
