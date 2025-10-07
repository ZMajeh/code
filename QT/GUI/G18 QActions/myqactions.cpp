#include "myqactions.h"
#include "ui_myqactions.h"
#include<QtGui>
#include<QtCore>
myQactions::myQactions(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myQactions)
{
    ui->setupUi(this);
}

myQactions::~myQactions()
{
    delete ui;
}

void myQactions::on_actionClose_triggered()
{
    this->close();
}

void myQactions::on_actionOpen_triggered()
{
    QMessageBox::information(this,"Error","Opening file is not implemented yet.");
}

void myQactions::on_actionNew_triggered()
{
    QMessageBox::information(this,"Error","Creating new file is not implemented yet.");
}
