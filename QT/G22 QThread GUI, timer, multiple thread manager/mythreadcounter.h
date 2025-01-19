#ifndef MYTHREADCOUNTER_H
#define MYTHREADCOUNTER_H

#include <QMainWindow>
#include<mythread.h>
#define MyLimit 100
namespace Ui {
    class myThreadCounter;
}

class myThreadCounter : public QMainWindow
{
    Q_OBJECT

public:
    explicit myThreadCounter(QWidget *parent = 0);
    ~myThreadCounter();
    int curCount;
    MyThread *mt[MyLimit];
    int i;

private:
    Ui::myThreadCounter *ui;

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void clickThreadStart();
    void clickThreadSop();
    void increment();
};

#endif // MYTHREADCOUNTER_H
