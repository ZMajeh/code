#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    // Init Model
    model=new QStandardItemModel(4,2,this);
    for(int i=0,j=0;j<2;i++,j=(i<4?j:(i=0)+j+1))
        model->setData(model->index(i,j,QModelIndex()),0);
    // Init Item delegate
    itemDelegate=new MyItemDelegate(this);
    // Set model to table view
    ui->tableView->setModel(model);
    // Set ItemDelegate to table view
    ui->tableView->setItemDelegate(itemDelegate);
}

Dialog::~Dialog()
{
    delete ui;
}
