#ifndef MYGAME_H
#define MYGAME_H

#include <QMainWindow>

namespace Ui {
    class myGame;
}

class myGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit myGame(QWidget *parent = 0);
    ~myGame();
    void iterate(QString msg,int time);

private:
    Ui::myGame *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // MYGAME_H
