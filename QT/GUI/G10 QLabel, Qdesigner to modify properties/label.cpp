#include "label.h"
#include "ui_label.h"

Label::Label(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Label)
{
    ui->setupUi(this);
    ui->label->setText("Program running");//Can add html tags here
}

Label::~Label()
{
    delete ui;
}
