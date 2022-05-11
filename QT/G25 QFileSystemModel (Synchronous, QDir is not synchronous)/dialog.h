#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QFileSystemModel>
#include <QTreeView>
#include <QListView>
#include <QDir>

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
    QFileSystemModel *dir,*file;

private slots:
    void on_treeView_clicked(QModelIndex index);
};

#endif // DIALOG_H
