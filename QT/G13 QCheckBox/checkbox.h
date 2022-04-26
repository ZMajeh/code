#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <QDialog>

namespace Ui {
    class checkBox;
}

class checkBox : public QDialog
{
    Q_OBJECT

public:
    explicit checkBox(QWidget *parent = 0);
    ~checkBox();

private:
    Ui::checkBox *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // CHECKBOX_H
