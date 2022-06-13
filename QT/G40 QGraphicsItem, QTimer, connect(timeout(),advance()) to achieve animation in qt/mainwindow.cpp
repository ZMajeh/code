#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    items=1;
    ui->setupUi(this);
    paintAgain();
}

// Basic animation using QT
void MainWindow::paintAgain()
{
    // Make scene
    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-200,-200,400,400);

    QPen myPen=QPen(Qt::red);

    // This is bounding block
    QLineF topLine(scene->sceneRect().topLeft(),scene->sceneRect().topRight());
    QLineF leftLine(scene->sceneRect().topLeft(),scene->sceneRect().bottomLeft());
    QLineF rightLine(scene->sceneRect().topRight(),scene->sceneRect().bottomRight());
    QLineF bottomLine(scene->sceneRect().bottomLeft(),scene->sceneRect().bottomRight());

    scene->addLine(topLine,myPen);
    scene->addLine(leftLine,myPen);
    scene->addLine(rightLine,myPen);
    scene->addLine(bottomLine,myPen);

    // Add items, can be anything, make custiom one
    for(int i=0;i<items;i++)
    {
        MyItem *item=new MyItem();
        scene->addItem(item);
    }

    // Timer will be called when timeout is occured
    myTimer=new QTimer(this);
    connect(myTimer,SIGNAL(timeout()),scene,SLOT(advance()));
    myTimer->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// When we click add item, we just add extra item and restart process
void MainWindow::on_pushButton_2_clicked()
{
    items++;
    myTimer->stop();
    while(myTimer->isActive());
    delete scene;
    delete myTimer;
    paintAgain();
}

// When we click remove item, we just remove item and restart process
void MainWindow::on_pushButton_clicked()
{
    items--;
    myTimer->stop();
    while(myTimer->isActive());
    delete scene;
    delete myTimer;
    paintAgain();
}
