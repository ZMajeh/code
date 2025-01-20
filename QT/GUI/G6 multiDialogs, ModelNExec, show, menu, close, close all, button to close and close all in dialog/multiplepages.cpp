#include "multiplepages.h"
#include "ui_multiplepages.h"

multiplePages::multiplePages(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::multiplePages)
{
    ui->setupUi(this);
}

multiplePages::~multiplePages()
{
    delete ui;
}

void multiplePages::on_actionNew_triggered()
{
    dialog=new D1(this);
    dialog->doInit(this);
    dialog->show();
}

void multiplePages::on_actionNew_modeled_triggered()
{
    dialog=new D1(this);
    dialog->doInit(this);
    dialog->setWindowTitle("This is priority form");
    dialog->setModal(true);
    dialog->exec();
}

void multiplePages::on_actionClose_triggered()
{
    this->close();
}
