#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    x1=300,y1=300;
    radius=100;
    angle=90;
}

MainWindow::~MainWindow()
{
    delete ui;
}


// Drwing gradients, there are 3 types are available
void MainWindow::paintEvent(QPaintEvent *e)
{
    ui->label->setText("X1 : "+QString::number(x1));
    ui->label_2->setText("Y1 : "+QString::number(y1));
    ui->label_4->setText("Radius : "+QString::number(radius));
    ui->label_3->setText("Angle : "+QString::number(angle));
    QPainter myPaint(this);
    QConicalGradient myConi(450,200,angle);    // Clockwise, draws angle wise, first point should be center point
    QLinearGradient myLine(100,100,x1,y1); // This should be the same point as rectangles
    QRadialGradient myRadi(700,200,radius); // Circle type, draw on basis of radius

    // This is how we set colors at position
    myLine.setColorAt(0,Qt::white);
    myLine.setColorAt(0.5,Qt::green);
    myLine.setColorAt(1,Qt::black);

    myConi.setColorAt(0,Qt::white);
    myConi.setColorAt(0.5,Qt::green);
    myConi.setColorAt(0.8,Qt::black);

    myRadi.setColorAt(0,Qt::white);
    myRadi.setColorAt(0.5,Qt::green);
    myRadi.setColorAt(1,Qt::black);

    // This is how we actually draw them
    myPaint.fillRect(QRect(100,100,200,200),myLine);
    myPaint.fillRect(QRect(350,100,200,200),myConi);
    myPaint.fillRect(QRect(600,100,200,200),myRadi);

}

void MainWindow::on_horizontalScrollBar_sliderMoved(int position)
{
    radius=position*2;
    this->repaint();
}

void MainWindow::on_horizontalScrollBar_2_sliderMoved(int position)
{
    angle=position*3.6;
    this->repaint();
}

void MainWindow::on_horizontalScrollBar_4_sliderMoved(int position)
{
    x1=position*5;
    this->repaint();
}

void MainWindow::on_horizontalScrollBar_3_sliderMoved(int position)
{
    y1=position*5;
    this->repaint();
}
