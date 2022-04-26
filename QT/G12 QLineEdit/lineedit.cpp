#include "lineedit.h"
#include "ui_lineedit.h"
#include<QMessageBox>

lineEdit::lineEdit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lineEdit)
{
    ui->setupUi(this);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
}

lineEdit::~lineEdit()
{
    delete ui;
}

void lineEdit::on_pushButton_clicked()
{
    if(ui->lineEdit_2->text()=="andy"&&
            ui->lineEdit_3->text()=="143")
        QMessageBox::information(this,"Login Successful","Welcome to system");
    else QMessageBox::information(this,"Login Failed","Username or password is wrong");
}

void lineEdit::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked())
        ui->lineEdit_3->setEchoMode(QLineEdit::Normal);
   else
        ui->lineEdit_3->setEchoMode(QLineEdit::Password);
}
