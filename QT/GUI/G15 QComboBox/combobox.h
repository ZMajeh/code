#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QMainWindow>

namespace Ui {
    class comboBox;
}

class comboBox : public QMainWindow
{
    Q_OBJECT

public:
    explicit comboBox(QWidget *parent = 0);
    ~comboBox();

private:
    Ui::comboBox *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // COMBOBOX_H
