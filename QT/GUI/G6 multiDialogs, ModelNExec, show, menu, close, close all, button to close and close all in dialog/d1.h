#ifndef D1_H
#define D1_H


#include <QDialog>
#include <QMainWindow>
class multiplePages;
namespace Ui {
    class D1;
}

class D1 : public QDialog
{
    Q_OBJECT

public:
    explicit D1(QWidget *parent = 0);
    ~D1();

void doInit(QMainWindow*);
private:
    Ui::D1 *ui;

};

#endif // D1_H
