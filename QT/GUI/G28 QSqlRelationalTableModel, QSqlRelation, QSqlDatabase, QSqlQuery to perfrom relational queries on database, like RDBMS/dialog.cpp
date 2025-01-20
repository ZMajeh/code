#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // Driver setup
    db=QSqlDatabase::addDatabase("QODBC");
    // DSN setup
    db.setDatabaseName("def");
    // Connect
    db.open();
    // Add table addition manager to emp table emp(eid,ename,sal)
    QSqlQuery q;
    q.exec("use myDatabase");
    q.exec("drop table manager");
    q.exec("create table manager(eid INT NOT NULL PRIMARY KEY IDENTITY, name varchar(50))");
    q.exec("delete from manager");
    q.exec("insert into manager (name) values('Anuj')");
    q.exec("insert into manager (name) values('Kamal')");
    q.exec("insert into manager (name) values('Ram')");
    q.exec("insert into manager (name) values('Shyam')");
    q.exec("insert into manager (name) values('Sita')");

    // Setup model
    model=new QSqlRelationalTableModel(this);
    // Relation From table
    model->setTable("emp");
    // Relation to table
    model->setRelation(0,QSqlRelation("manager","eid","name"));
    // Perform selection
    model->select();

    // Attach model to view
    ui->tableView->setModel(model);
}

Dialog::~Dialog()
{
    delete ui;
}
