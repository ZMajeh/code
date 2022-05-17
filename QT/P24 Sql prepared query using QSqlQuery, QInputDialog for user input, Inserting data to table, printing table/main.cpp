#include <QtCore/QCoreApplication>      // When no GUI needed
#include <QApplication>                 // When GUI is needed
#include <QtSql>
#include <QDebug>
#include <QInputDialog>                 // To take user input

// This method prints emp table from db
void printTab(QSqlQuery qsqlq)
{
    // Fire query to select, points to -1th index
    qsqlq.exec("select * from emp");
    qDebug()<<"ID\tName\tSalary";
    while(qsqlq.next()) // Move to first and keep moving forward(Like cursor)
    {
        // Print 1 record
        qDebug()<<qsqlq.value(0).toInt()<<"\t"<<qsqlq.value(1).toString()<<"\t"<<qsqlq.value(2).toString();
    }
}

// This method add 1 record normally
void addRecNormally(QSqlQuery qsqlq,QString name,int sal)
{
    // Fire insert query, returns true if success
    if(qsqlq.exec("insert into emp (ename,sal) values('"+name+"',"+QString::number(sal)+")"))
    {
        qDebug()<<"Record inserted\n\tName : "<<name<<"\n\tSal : "<<sal;
    }
    // On error
    else qDebug()<<"Record cannot be inserted\n\tName : "<<name<<"\n\tSal : "<<sal;
}

// This method add 1 record using prepared query
void addRecPrepare(QSqlQuery qsqlq,QString name,int sal)
{
    // Prepare SQL query in memory, : is used as place holder starter
    qsqlq.prepare("insert into emp (ename,sal) values(:name,:sal)");
    // 2 ways to bind values in place holders
    //    qsqlq.bindValue(0,name);
    //    qsqlq.bindValue(1,sal);
    qsqlq.bindValue(":name",name);
    qsqlq.bindValue(":sal",sal);

    // true if success
    if(qsqlq.exec())
    {
        qDebug()<<"Record inserted\n\tName : "<<name<<"\n\tSal : "<<sal;
    }
    // On error
    else qDebug()<<"Record cannot be inserted\n\tName : "<<name<<"\n\tSal : "<<sal;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget tmp;    // This is parent for gui

    // Add SQL driver
    QSqlDatabase qsqldb=QSqlDatabase::addDatabase("QODBC");

    // Set DB name
    qsqldb.setDatabaseName("def");

    // Connect to db
    if(!qsqldb.open())
    {
        // When fail to connect
        qDebug()<<"Error connecting: "<<qsqldb.lastError();
    }
    else
    {
        // Connnected, ready to query
        QSqlQuery qsqlq;
        if(!qsqlq.exec("use myDatabase"))   // Select database
        {
            // On fail
            qDebug()<<"Error opening DB: "<<qsqldb.lastError();
        }
        else
        {
            // DB selected
            // Temp vars for input from user
            QString name;
            int sal;
            // Display table
            printTab(qsqlq);

            // Get input from user
            name=QInputDialog::getText(&tmp,"Name","Enter employee name  : ");
            sal=QInputDialog::getText(&tmp,"Salary","Enter employee Sal : ").toInt();
            // Add to DB using normal query
            addRecNormally(qsqlq,name,sal);

            // Display table
            printTab(qsqlq);

            // Get input from user
            name=QInputDialog::getText(&tmp,"Name","Enter employee name  : ");
            sal=QInputDialog::getText(&tmp,"Salary","Enter employee Sal : ").toInt();
            // Add to DB using prepared query
            addRecPrepare(qsqlq,name,sal);

            // Display table
            printTab(qsqlq);
        }
    }
    return a.exec();
}
