#include "menudemo.h"
#include "ui_menudemo.h"


menuDemo::menuDemo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menuDemo)
{
    ui->setupUi(this);
}

menuDemo::~menuDemo()
{
    delete ui;
}

void menuDemo::on_actionNewButton_triggered()
{
    this->close();
}
