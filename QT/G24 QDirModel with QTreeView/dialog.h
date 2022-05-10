#ifndef DIALOG_H
#define DIALOG_H

// GUI
#include<QDialog>
#include<QPushButton>
#include<QTreeView>
#include<QSpacerItem>

// Model
#include<QDirModel>
#include<QDir>

// UI
#include<QInputDialog>
#include<QMessageBox>

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
    QDirModel *model;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // DIALOG_H
