#ifndef LINEEDIT_H
#define LINEEDIT_H

#include <QMainWindow>

namespace Ui {
    class lineEdit;
}

class lineEdit : public QMainWindow
{
    Q_OBJECT

public:
    explicit lineEdit(QWidget *parent = 0);
    ~lineEdit();

private:
    Ui::lineEdit *ui;

private slots:
    void on_checkBox_clicked();
    void on_pushButton_clicked();
};

#endif // LINEEDIT_H
