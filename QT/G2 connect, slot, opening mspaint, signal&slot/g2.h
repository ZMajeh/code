#ifndef G2_H
#define G2_H

#include<iostream>
#include <QMainWindow>

namespace Ui {
    class G2;
}

class G2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit G2(QWidget *parent = 0);
    ~G2();
    public Q_SLOTS:
    void printOut();

private:
    Ui::G2 *ui;
};

#endif // G2_H
