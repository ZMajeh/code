#ifndef MULTIPLEPAGES_H
#define MULTIPLEPAGES_H

#include <QMainWindow>
#include <d1.h>
namespace Ui {
    class multiplePages;
}

class multiplePages : public QMainWindow
{
    Q_OBJECT

public:
    explicit multiplePages(QWidget *parent = 0);
    ~multiplePages();

private:
    Ui::multiplePages *ui;
    D1 *dialog;

private slots:
    void on_actionClose_triggered();
    void on_actionNew_modeled_triggered();
    void on_actionNew_triggered();
};

#endif // MULTIPLEPAGES_H
