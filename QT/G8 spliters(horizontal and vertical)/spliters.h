#ifndef SPLITERS_H
#define SPLITERS_H

#include <QMainWindow>

namespace Ui {
    class spliters;
}

class spliters : public QMainWindow
{
    Q_OBJECT

public:
    explicit spliters(QWidget *parent = 0);
    ~spliters();

private:
    Ui::spliters *ui;
};

#endif // SPLITERS_H
