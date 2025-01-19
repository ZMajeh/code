#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    // Qt Tool tip, can display almost all html tags, and rendeer them correctly
    ui->pushButton->setToolTip("<h1>First <font color='red'>button</font></h1><br><h2>1.png</h2><img src=':/myRes/1.png'><br><h2>2.png</h2><img src=':/myRes/2.png'><br>");
    ui->pushButton_2->setToolTip("<h1>Second <font color='blue'>button</font></h1><h2>3.png</h2><img src=':/myRes/3.png'><br>");
}

Dialog::~Dialog()
{
    delete ui;
}
