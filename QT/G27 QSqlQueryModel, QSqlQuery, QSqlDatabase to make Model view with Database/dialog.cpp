#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    // Add driver
    qsqldb=QSqlDatabase::addDatabase("QODBC");
    // Give DSN
    qsqldb.setDatabaseName("def");
    // Open connection
    qsqldb.open();
    // Set database
    QSqlQuery qsqlq;
    qsqlq.exec("use myDatabase");
    // Make model
    model=new QSqlQueryModel(this);
    model->setQuery("select * from emp");
    // Set model to view
    ui->tableView->setModel(model);
}

Dialog::~Dialog()
{
    delete ui;
}
