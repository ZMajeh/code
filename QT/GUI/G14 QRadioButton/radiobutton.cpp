#include "radiobutton.h"
#include "ui_radiobutton.h"
#include<QMessageBox>

radioButton::radioButton(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::radioButton)
{
    ui->setupUi(this);
}

radioButton::~radioButton()
{
    delete ui;
}

void radioButton::on_pushButton_clicked()
{
    if(ui->radioButton_2->isChecked())
        QMessageBox::information(this,"Gender test","You are boy");
    else if(ui->radioButton_3->isChecked())
        QMessageBox::information(this,"Gender test","You are girl");
    else
        QMessageBox::information(this,"Gender test","Please press radio button first");
}
