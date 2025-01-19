#ifndef MYQSTATUSBAR_H
#define MYQSTATUSBAR_H

#include <QMainWindow>
#include<QLabel>
namespace Ui {
    class myQStatusBar;
}

class myQStatusBar : public QMainWindow
{
    Q_OBJECT

public:
    explicit myQStatusBar(QWidget *parent = 0);
    ~myQStatusBar();
    QLabel *lbl;

private:
    Ui::myQStatusBar *ui;
public Q_SLOTS:
    void setVal(int x);
};

#endif // MYQSTATUSBAR_H
