#ifndef LABEL_H
#define LABEL_H

#include <QMainWindow>

namespace Ui {
    class Label;
}

class Label : public QMainWindow
{
    Q_OBJECT

public:
    explicit Label(QWidget *parent = 0);
    ~Label();

private:
    Ui::Label *ui;
};

#endif // LABEL_H
