#include <QtCore/QCoreApplication>
#include <QtSql>
#include <QDebug>


// Microsoft localDB, to connect you need to get instance running first
// Following are just cmd commands to setup localDB of MS
// sqllocaldb c v11.0       // Creation of instance
// sqllocaldb s v11.0       // Starting instance
// sqllocaldb i v11.0       // Get info, like server address *** and is on or off, call above command to start

// Now just create DSN
// From start, ODBC data source (32/64 - bit)                       // Use one with particular architecture
// Click system DSN
// add
// select SQL server,then finish
// give DSN name which you use as server name
// Give proper description
// in server, insert server address from above(Line 10/ ***)
// Finish
// click Test data source
// It should instantly show: TESTS COMPLETED SUCCESSFULLY!
//   If not that means server is not running, so just call "sqllocaldb s v11.0" to start and "sqllocaldb i v11.0" to get new server address
//      Add this new server address in server input box and try again
// Once Tests complete successfully, DB is ready and following code will work

// Replace def from following code to DSN name you gave above.


// NOTE: 32-bit or 64-bit matters, so if 32-bit did not work, use 64-bit. add following line in code, to see last error from SQL code of QT
// qDebug()<< "Error : " <<qsqldb.lastError();


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // This is my DSN name
    QString server="def";
    // QODBC is for Microsoft database(Must change this as per database)
    QSqlDatabase qsqldb=QSqlDatabase::addDatabase("QODBC");
    /*
    Available options (In 2012 or so)
Driver	Class name	Constructor arguments                                                   File to include
QPSQL   QPSQLDriver     PGconn *connection                                                      qsql_psql.cpp
QMYSQL  QMYSQLDriver    MYSQL *connection                                                       qsql_mysql.cpp
QOCI    QOCIDriver      OCIEnv *environment, OCISvcCtx *serviceContext                          qsql_oci.cpp
QODBC   QODBCDriver     SQLHANDLE environment, SQLHANDLE connection                             qsql_odbc.cpp
QDB2    QDB2            SQLHANDLE environment, SQLHANDLE connection                             qsql_db2.cpp
QTDS    QTDSDriver      LOGINREC *loginRecord, DBPROCESS *dbProcess, const QString &hostName    qsql_tds.cpp
QSQLITE QSQLiteDriver   sqlite *connection                                                      qsql_sqlite.cpp
QIBASE  QIBaseDriver    isc_db_handle connection                                                qsql_ibase.cpp
    */
    // This is done before opening connection
    qsqldb.setConnectOptions();
    // This is provided with DSN name to perform connection
    qsqldb.setDatabaseName(server);
    // This open connection to DB, true if connected
    if(qsqldb.open())
    {
        qDebug()<<"Connected successfully";
        qsqldb.close();     // To close connection with DB(Is recommended to do so)
    }
    else
    {
        // When some error occured, lastError will show you error
           qDebug()<<"Connected Unsuccessful";
           qDebug()<< "Error : " <<qsqldb.lastError();
    }
    return a.exec();
}
