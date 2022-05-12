#ifndef DIALOG_H
#define DIALOG_H
// GUI
#include <QDialog>
#include <QTableView>
// Model
#include <QStandardItemModel>
#include <QModelIndex>
// Custom item delegate, of QItemDelegate
#include "myitemdelegate.h"

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
    // This is model and delegate for table view
    QStandardItemModel *model;
    MyItemDelegate *itemDelegate;
};

#endif // DIALOG_H
