#include "myqmessagebox.h"
#include "ui_myqmessagebox.h"
#include<QMessageBox>

myQMessageBox::myQMessageBox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myQMessageBox)
{
    ui->setupUi(this);
}

myQMessageBox::~myQMessageBox()
{
    delete ui;
}

void myQMessageBox::on_pushButton_clicked()
{
    //Normal notify kind alert window
    QMessageBox::information(this,"Info","I shows information");
}

void myQMessageBox::on_pushButton_2_clicked()
{
    //To ask simple question
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Question","I am supposed to ask question, do you understand?",QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes)
        QMessageBox::information(this,"response","Good, you are learning well");
}

void myQMessageBox::on_pushButton_3_clicked()
{
    //To show warning
    QMessageBox::warning(this,"Warning","Use me when something is wrong");
}

void myQMessageBox::on_pushButton_4_clicked()
{   //Many buttons are possible to add here
    QMessageBox::question(this,"Custom","You can add Multiple buttons too",QMessageBox::Reset|QMessageBox::YesToAll|QMessageBox::Yes|QMessageBox::No|QMessageBox::NoToAll);
}
