#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "myeventfilter.h"

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
public slots:
    void performClickOnLink(const QString&);
};

#endif // DIALOG_H
