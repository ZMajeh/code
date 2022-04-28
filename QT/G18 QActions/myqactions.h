#ifndef MYQACTIONS_H
#define MYQACTIONS_H

#include <QMainWindow>

namespace Ui {
    class myQactions;
}

class myQactions : public QMainWindow
{
    Q_OBJECT

public:
    explicit myQactions(QWidget *parent = 0);
    ~myQactions();

private:
    Ui::myQactions *ui;

private slots:
    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionClose_triggered();
};

#endif // MYQACTIONS_H
