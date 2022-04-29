#ifndef MYQMESSAGEBOX_H
#define MYQMESSAGEBOX_H

#include <QMainWindow>

namespace Ui {
    class myQMessageBox;
}

class myQMessageBox : public QMainWindow
{
    Q_OBJECT

public:
    explicit myQMessageBox(QWidget *parent = 0);
    ~myQMessageBox();

private:
    Ui::myQMessageBox *ui;

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // MYQMESSAGEBOX_H
