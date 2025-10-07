#include "combobox.h"
#include "ui_combobox.h"
#include<QMessageBox>
comboBox::comboBox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::comboBox)
{
    ui->setupUi(this);
    ui->comboBox_2->addItem("Headphone");
    ui->comboBox_2->addItem("Dog");
    ui->comboBox_2->addItem("Horse");
    ui->comboBox_2->addItem("Laptop");
}

comboBox::~comboBox()
{
    delete ui;
}

void comboBox::on_pushButton_clicked()
{
    QString item=ui->comboBox_2->currentText();
    if(item=="Cat")
        if(QMessageBox::information(this,"Results","Cat lover, so cute","Thanks","Shut up")==1)
             QMessageBox::information(this,"Results","So rude","Than");
    else if(item=="Dog")
        QMessageBox::information(this,"Results","Dogs are loyal","I know");
    else if(item=="Mango")
        QMessageBox::information(this,"Results","Dont eat too much mango, or else you might gain weight");
    else if(item=="Mobile")
        QMessageBox::information(this,"Results","Mobile? Dont use in dark room, or get a glasses, like me:)");
    else if(item=="Headphone")
        QMessageBox::information(this,"Results","Music or gaming or movies?","Music","Gaming","Movies");
    else if(item=="Horse")
        while(QMessageBox::information(this,"Results","Do you even know how to ride one?","Yes","No","Manditory Question?")==2)
            QMessageBox::information(this,"Results","Yes");
    else if(item=="Laptop")
            QMessageBox::information(this,"Results","For work, or gaming?","Work","Gaming");
}
