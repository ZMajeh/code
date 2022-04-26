#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QMainWindow>

namespace Ui {
    class listWidget;
}

class listWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit listWidget(QWidget *parent = 0);
    ~listWidget();

private:
    Ui::listWidget *ui;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // LISTWIDGET_H
