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

// Drawing text on screen
void MainWindow::paintEvent(QPaintEvent *e)
{
    // Simply use drawText
    QPainter myPainter(this);
    myPainter.drawText(100,100,"Normal pointwise draw: Hello world!!");

    // Or can use rect as area
    QRect r1(100,110,350,25);
    myPainter.drawRect(r1);
    myPainter.drawText(r1,Qt::AlignLeft | Qt::AlignVCenter,"Left(rect wise draw)");
    myPainter.drawText(r1,Qt::AlignCenter,"Center");
    myPainter.drawText(r1,Qt::AlignRight | Qt::AlignVCenter,"Right");

    // If area is not enough it will auto clip extra text
    QRect r2(100,150,25,25);
    myPainter.drawRect(r2);
    myPainter.drawText(r2,"Clip: This will be clipped");

    // This can be used to display HTML document
    QTextDocument myDoc(this);
    QRect r3(0,0,100,100);
    myPainter.drawRect(r3);
    myDoc.setTextWidth(r3.width());
    myDoc.setHtml("This is HTML document.<h1><u>Hello</u></h1><h2><b><font color=red>World!!</font></b></h2>");
    myDoc.drawContents(&myPainter);



}
