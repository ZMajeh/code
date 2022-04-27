#ifndef MYTREEWIDGET_H
#define MYTREEWIDGET_H

#include <QDialog>

namespace Ui {
    class myTreeWidget;
}

class myTreeWidget : public QDialog
{
    Q_OBJECT

public:
    explicit myTreeWidget(QWidget *parent = 0);
    ~myTreeWidget();

private:
    Ui::myTreeWidget *ui;

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // MYTREEWIDGET_H
