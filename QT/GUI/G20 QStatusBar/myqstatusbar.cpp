#include "myqstatusbar.h"
#include "ui_myqstatusbar.h"
#include<QtCore>
#include<QtGui>

myQStatusBar::myQStatusBar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myQStatusBar)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("Welcome to statusbar, drag on slider to change progressbar",5000);
    lbl=new QLabel(this);
    QProgressBar *pb=new QProgressBar(this);
    QSlider *qhs= new QSlider(Qt::Horizontal,this);
    ui->statusBar->addPermanentWidget(lbl);
    ui->statusBar->addPermanentWidget(pb);
    ui->verticalLayout_2->addWidget(qhs);
    pb->setValue(0);
    lbl->setText("0%");

    connect(qhs,SIGNAL(valueChanged(int)),pb,SLOT(setValue(int)));
    connect(qhs,SIGNAL(valueChanged(int)),this,SLOT(setVal(int)));
}

myQStatusBar::~myQStatusBar()
{
    delete ui;
}

void myQStatusBar::setVal(int x)
{

    lbl->setText(QString::number(x)+"%");
}
