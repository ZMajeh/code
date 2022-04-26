#ifndef RADIOBUTTON_H
#define RADIOBUTTON_H

#include <QMainWindow>

namespace Ui {
    class radioButton;
}

class radioButton : public QMainWindow
{
    Q_OBJECT

public:
    explicit radioButton(QWidget *parent = 0);
    ~radioButton();

private:
    Ui::radioButton *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // RADIOBUTTON_H
