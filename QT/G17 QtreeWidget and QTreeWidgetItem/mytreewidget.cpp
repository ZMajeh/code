#include "mytreewidget.h"
#include "ui_mytreewidget.h"

myTreeWidget::myTreeWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myTreeWidget)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(1);
    QTreeWidgetItem *item=new QTreeWidgetItem(ui->treeWidget);
        item->setText(0,"Hi");
        ui->treeWidget->addTopLevelItem(item);
    QTreeWidgetItem *item1=new QTreeWidgetItem(ui->treeWidget);
        item1->setText(0,"Oy");
        ui->treeWidget->addTopLevelItem(item1);
    QTreeWidgetItem *i1=new QTreeWidgetItem();
        i1->setText(0,"MYMY");
        item->addChild(i1);
    QTreeWidgetItem *i2=new QTreeWidgetItem();
        i2->setText(0,"TYTY");
        item->addChild(i2);
    QTreeWidgetItem *i3=new QTreeWidgetItem();
        i3->setText(0,"KaY");
        item1->addChild(i3);
    QTreeWidgetItem *i4=new QTreeWidgetItem();
        i4->setText(0,"Lai");
        item1->addChild(i4);
}

myTreeWidget::~myTreeWidget()
{
    delete ui;
}

void myTreeWidget::on_pushButton_clicked()
{
    QTreeWidgetItem *item1=new QTreeWidgetItem();
    item1->setText(0,ui->lineEdit->text());
    if(ui->treeWidget->currentItem())
        ui->treeWidget->currentItem()->addChild(item1);
}

void myTreeWidget::on_pushButton_2_clicked()
{
    QTreeWidgetItem *item1=new QTreeWidgetItem(ui->treeWidget);
    item1->setText(0,ui->lineEdit->text());
}

void myTreeWidget::on_pushButton_3_clicked()
{
    if(ui->treeWidget->currentItem())
        delete ui->treeWidget->currentItem();
}
