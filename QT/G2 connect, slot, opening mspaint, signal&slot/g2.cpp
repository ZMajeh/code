#include "g2.h"
#include "ui_g2.h"
G2::G2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::G2)
{
    ui->setupUi(this);
//    connect(ui->pushButton,SIGNAL(clicked()),ui->progressBar,SLOT(reset()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(printOut()));
    disconnect(ui->pushButton_2,SIGNAL(clicked()),ui->progressBar_2,SLOT(reset()));
    disconnect(ui->pushButton_2,SIGNAL(clicked()),ui->progressBar,SLOT(reset()));
}

G2::~G2()
{
    delete ui;
}

void G2::printOut()
{

    std::string cmd = "if exist \"d:\\Book\\B1\\p1.png\" (echo Page found) else copy \"d:\\Book\\Source\\template.png\" \"d:\\Book\\B1\\p1.png\"";
    system(cmd.c_str());
    std::string cmd1 = "C:\\Windows\\system32\\mspaint.exe \"d:\\Book\\B1\\p1.png\"";
    system(cmd1.c_str());
    std::cout<<"Hello world from c++";
    connect(ui->pushButton_2,SIGNAL(clicked()),ui->progressBar_2,SLOT(reset()));
    connect(ui->pushButton_2,SIGNAL(clicked()),ui->progressBar,SLOT(reset()));
}
