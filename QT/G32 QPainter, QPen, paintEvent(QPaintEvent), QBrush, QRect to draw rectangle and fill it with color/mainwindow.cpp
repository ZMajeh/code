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

// Now we fill color in drawing
void MainWindow::paintEvent(QPaintEvent *e)
{
    // Make painter(canvas)
    QPainter painter(this);
    // Make pen
    QPen pen(Qt::red);
    // Make rect to draw
    QRect myRect(30,30,100,100);
    QRect myRect1(150,30,100,100);
    // Make brush to paint
    QBrush myBrush(Qt::blue,Qt::SolidPattern);
    // Init pen and set it to painter
    pen.setWidth(6);
    painter.setPen(pen);

    // Sequence matters when drawing
    painter.fillRect(myRect,myBrush);
    painter.drawRect(myRect);       // This simply draw our rectangle
    painter.drawEllipse(myRect);    // This will make elipse inside our rect's area

    // Changing sequence of drawing will change output
    myBrush.setStyle(Qt::CrossPattern);
    painter.drawRect(myRect1);
    painter.drawEllipse(myRect1);
    painter.fillRect(myRect1,myBrush);
}
