#ifndef MYQSLIDERANDQPROGRESSBAR_H
#define MYQSLIDERANDQPROGRESSBAR_H

#include <QMainWindow>

namespace Ui {
    class myQSliderAndQProgressBar;
}

class myQSliderAndQProgressBar : public QMainWindow
{
    Q_OBJECT

public:
    explicit myQSliderAndQProgressBar(QWidget *parent = 0);
    ~myQSliderAndQProgressBar();

private:
    Ui::myQSliderAndQProgressBar *ui;
};

#endif // MYQSLIDERANDQPROGRESSBAR_H
