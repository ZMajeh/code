#include "d1.h"
#include "ui_d1.h"

D1::D1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::D1)
{
    ui->setupUi(this);
}

D1::~D1()
{
    delete ui;
}


void D1::doInit(QMainWindow *toClose)
{
    connect(ui->pushButton_2,SIGNAL(clicked()),toClose,SLOT(close()));
}
