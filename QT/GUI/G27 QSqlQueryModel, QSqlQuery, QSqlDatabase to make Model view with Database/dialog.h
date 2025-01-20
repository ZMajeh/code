#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QSqlQueryModel *model;
    QSqlDatabase qsqldb;

};

#endif // DIALOG_H
