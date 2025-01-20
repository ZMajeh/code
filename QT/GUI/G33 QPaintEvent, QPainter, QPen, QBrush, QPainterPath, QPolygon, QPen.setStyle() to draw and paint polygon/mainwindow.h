#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QPainterPath>
#include <QPolygon>
#include <QPoint>

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
    void paintEvent(QPaintEvent *);
};

#endif // MAINWINDOW_H
