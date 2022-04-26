#include "checkbox.h"
#include "ui_checkbox.h"
#include<QMessageBox>

checkBox::checkBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkBox)
{
    ui->setupUi(this);
}

checkBox::~checkBox()
{
    delete ui;
}

void checkBox::on_pushButton_clicked()
{
    if(ui->checkBox_2->isChecked())
    {
        QMessageBox::information(this,"Damn","You are going darker");
    }
    else QMessageBox::information(this,"Nice","You are sane");
}
