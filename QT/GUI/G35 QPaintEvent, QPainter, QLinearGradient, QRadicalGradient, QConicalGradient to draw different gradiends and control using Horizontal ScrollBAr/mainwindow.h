#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QRadialGradient>
#include <QLinearGradient>
#include <QConicalGradient>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int x1,y1;
    int radius;
    int angle;
protected:
    void paintEvent(QPaintEvent *);

private slots:
    void on_horizontalScrollBar_3_sliderMoved(int position);
    void on_horizontalScrollBar_4_sliderMoved(int position);
    void on_horizontalScrollBar_2_sliderMoved(int position);
    void on_horizontalScrollBar_sliderMoved(int position);
};

#endif // MAINWINDOW_H
