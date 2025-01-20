#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    // Init model
    dir=new QFileSystemModel(this);
    file=new QFileSystemModel(this);
    dir->setRootPath("d:\\");
    file->setRootPath("d:\\");
    dir->setFilter(QDir::NoDotAndDotDot|QDir::AllDirs);
    file->setFilter(QDir::NoDotAndDotDot|QDir::Files);
    // Set model to view
    ui->treeView->setModel(dir);
    ui->listView->setModel(file);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_treeView_clicked(QModelIndex index)
{
    //Change directory when user click on dir
    ui->listView->setRootIndex(file->setRootPath(dir->fileInfo(index).absoluteFilePath()));
}
