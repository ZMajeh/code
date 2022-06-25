#include "mainwindow.h"
#include "ui_mainwindow.h"

// Using QSettings

// To store in settings
// Make object with Org name and App id
// Make Groups like Data, Settings, etc.
// Add values in group
// End group

// To load from settings
// Make object with Org name and App id
// Make Groups like Data, Settings, etc.
// Get values grom group
// End group

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // Save data
    // Settings object
    QSettings obj("G41","All");
    // Make group
    obj.beginGroup("Data");
    // Store values in group
    obj.setValue("UserName",ui->lineEdit->text());
    obj.setValue("Email",ui->lineEdit_2->text());
    obj.setValue("Mobile",ui->lineEdit_3->text());
    // Close group
    obj.endGroup();

    qDebug() << "Data saved";
}

void MainWindow::on_pushButton_2_clicked()
{
    // Load data
    // Settings object
    QSettings obj("G41","All");
    // Make group
    obj.beginGroup("Data");
    // Load values from group
    ui->lineEdit->setText(obj.value("UserName").toString());
    ui->lineEdit_2->setText(obj.value("Email").toString());
    ui->lineEdit_3->setText(obj.value("Mobile").toString());
    // Close group
    obj.endGroup();

    qDebug() << "Data loaded";
}


// Similar can be done with many other things
// We can store QVarient
// We can load QVarient and convert to needed object
void MainWindow::on_pushButton_3_clicked()
{
    // Save settings
    QSettings obj("G41","All");
    obj.beginGroup("Window");
    obj.setValue("Bounds",this->geometry());
    obj.endGroup();

    qDebug() << "Settings saved";
}

void MainWindow::on_pushButton_4_clicked()
{
    // Load settings
    QSettings obj("G41","All");
    obj.beginGroup("Window");
    this->setGeometry(obj.value("Bounds").toRect());
    obj.endGroup();

    qDebug() << "Settings loaded";
}
