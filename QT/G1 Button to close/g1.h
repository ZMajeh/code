#ifndef G1_H
#define G1_H

#include<iostream>
#include <QMainWindow>

namespace Ui {
    class G1;
}

class G1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit G1(QWidget *parent = 0);
    ~G1();
    void printOut();

private:
    Ui::G1 *ui;
};

#endif // G1_H
