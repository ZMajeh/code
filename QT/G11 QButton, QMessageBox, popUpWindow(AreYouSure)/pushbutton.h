#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

#include <QDialog>

namespace Ui {
    class PushButton;
}

class PushButton : public QDialog
{
    Q_OBJECT

public:
    explicit PushButton(QWidget *parent = 0);
    ~PushButton();

private:
    Ui::PushButton *ui;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // PUSHBUTTON_H
