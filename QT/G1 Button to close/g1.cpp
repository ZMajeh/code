#include "g1.h"
#include "ui_g1.h"
G1::G1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::G1)
{
    ui->setupUi(this);
    ui->pushButton->setText("Hello world OA");
}

G1::~G1()
{
    delete ui;
}

void G1::printOut()
{
    std::cout<<"Hello world from c++";
}
