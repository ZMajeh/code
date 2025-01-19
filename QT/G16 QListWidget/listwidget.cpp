#include "listwidget.h"
#include "ui_listwidget.h"
listWidget::listWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::listWidget)
{
    ui->setupUi(this);
    ui->listWidget_2->addItem("Cat");
    ui->listWidget_2->addItem("Dog");
    ui->listWidget_2->addItem("Mouse");
    ui->listWidget_2->addItem("Horse");
    ui->listWidget_2->addItem("Cow");
    ui->listWidget_2->addItem("Lion");
    ui->listWidget_2->addItem("Wolf");
    ui->listWidget_2->addItem("Tiger");
}

listWidget::~listWidget()
{
    delete ui;
}

void listWidget::on_pushButton_clicked()
{
    ui->listWidget_2->currentItem()->setText("-----------------------");
    ui->listWidget_2->currentItem()->setBackgroundColor(Qt::red);
}

void listWidget::on_pushButton_2_clicked()
{
    delete ui->listWidget_2->currentItem();
}
