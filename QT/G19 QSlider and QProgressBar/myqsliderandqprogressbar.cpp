#include "myqsliderandqprogressbar.h"
#include "ui_myqsliderandqprogressbar.h"

myQSliderAndQProgressBar::myQSliderAndQProgressBar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myQSliderAndQProgressBar)
{
    ui->setupUi(this);
    ui->progressBar->setValue(ui->horizontalSlider->value());
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
}

myQSliderAndQProgressBar::~myQSliderAndQProgressBar()
{
    delete ui;
}
