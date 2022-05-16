#include <QtCore/QCoreApplication>

#include <QtSql>
#include <QDebug>


int connectToDatabase(QSqlDatabase qsqldb,QString db="myDatabase")
{
    QSqlQuery qsqlq;
    // Try to connect to database
    if(qsqlq.exec("USE "+db))
    {
        qDebug()<<"Connected to "+db;
    }// If not exist
    else
    {
        qDebug()<<"No databse found, creating new "+db;
        qDebug()<<qsqldb.lastError();
        // Try creating database
        if(qsqlq.exec("CREATE DATABASE "+db))
        {
            qDebug()<<"Created "+db;
            // Once created, connect to it
            if(qsqlq.exec("USE "+db))
            {
                qDebug()<<"Connected to "+db;
            }
            else
            {
                // Created but couldnt donnect
                qDebug()<<"Creation is done but no databse found named "+db+" aborting operation";
                qDebug()<<qsqldb.lastError();
                qsqldb.close();
                return -1;
            }
        }
        else
        {// Could not create Database
            qDebug()<<"Failed to create "+db;
            qDebug()<<qsqldb.lastError();
            qsqldb.close();
            return -1;
        }
    }
    return 0;
}

// Connect to DB and fire query
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Select database
    QSqlDatabase qsqldb=QSqlDatabase::addDatabase("QODBC");
    // DSN
    qsqldb.setDatabaseName("def");
    // Connect
    if(qsqldb.open())
    {
        qDebug()<<"Connection opened";
        QSqlQuery qsqlq;

        // Create databse if not exist and connect to it
        if(connectToDatabase(qsqldb)!=0)
            return -1;
        // Create table if not exist
        if(qsqlq.exec("create table emp(eid INT NOT NULL PRIMARY KEY IDENTITY, ename varchar(50), sal INT)"))
        {
            qDebug()<<"Table emp created";
        }
        else
        {
            qDebug()<<"Couldnt create table, alredy exist";
            qDebug()<<qsqldb.lastError();
        }
        // Insert 1 record in table
        if(qsqlq.exec("insert into emp (ename,sal) values('Vijay',50000)"))
        {
            qDebug()<<"data added to emp";
        }
        else
        {
            qDebug()<<"Couldnt add data to table";
            qDebug()<<qsqldb.lastError();
        }
        // Print all records in table(Each run adds 1 value.
        if(qsqlq.exec("select * from emp"))
        {
            qDebug()<< "Data extracting ...\nID\tName\tSalary";
            while(qsqlq.next())
            {
                qDebug()<< qsqlq.value(0).toInt()<<". "<<qsqlq.value(1).toString()<<"\t"<<qsqlq.value(2).toInt();
            }
        }
    }
    else
    {
        qDebug()<<"Connection failed";
        qDebug()<<qsqldb.lastError();
    }

    return a.exec();
}
