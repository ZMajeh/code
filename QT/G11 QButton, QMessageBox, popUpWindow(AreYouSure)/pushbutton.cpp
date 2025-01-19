#include "pushbutton.h"
#include "ui_pushbutton.h"
#include <QMessageBox>
#include<QDebug>
PushButton::PushButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PushButton)
{
    ui->setupUi(this);
//Pushbutton dont support HTML tag in its text
}

PushButton::~PushButton()
{
    delete ui;
}

void PushButton::on_pushButton_clicked()
{
    qDebug()<<"Returned with : "<<QMessageBox::information(this,"Click event","You just pressed the button? You idiot!",1,2,3);
}

void PushButton::on_pushButton_2_clicked()
{
    if(QMessageBox::information(this,"Click event","You just pressed the button? You idiot!",1,2)==1)
        close();
}
