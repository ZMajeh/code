#ifndef NOTEPADDEMO_H
#define NOTEPADDEMO_H

#include <QMainWindow>

namespace Ui {
    class notepadDemo;
}

class notepadDemo : public QMainWindow
{
    Q_OBJECT

public:
    explicit notepadDemo(QWidget *parent = 0);
    ~notepadDemo();

private:
    Ui::notepadDemo *ui;
};

#endif // NOTEPADDEMO_H
