#include "spliters.h"
#include "ui_spliters.h"

spliters::spliters(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::spliters)
{
    ui->setupUi(this);
}

spliters::~spliters()
{
    delete ui;
}
