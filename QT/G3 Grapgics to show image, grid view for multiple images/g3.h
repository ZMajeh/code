#ifndef G3_H
#define G3_H
#include<Qt>
#include <QGraphicsPixmapItem>
#include <QMainWindow>
#include <QGraphicsView>

namespace Ui {
    class G3;
}

class G3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit G3(QWidget *parent = 0);
    ~G3();
    void addImage(const char *file,QGraphicsView *gv);
private:
    Ui::G3 *ui;
};

#endif // G3_H
