#include "notepaddemo.h"
#include "ui_notepaddemo.h"

notepadDemo::notepadDemo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::notepadDemo)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
}

notepadDemo::~notepadDemo()
{
    delete ui;
}
