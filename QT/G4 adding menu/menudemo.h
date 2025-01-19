#ifndef MENUDEMO_H
#define MENUDEMO_H

#include <QMainWindow>

namespace Ui {
    class menuDemo;
}

class menuDemo : public QMainWindow
{
    Q_OBJECT

public:
    explicit menuDemo(QWidget *parent = 0);
    ~menuDemo();

private:
    Ui::menuDemo *ui;

private slots:
    void on_actionNewButton_triggered();
};

#endif // MENUDEMO_H
