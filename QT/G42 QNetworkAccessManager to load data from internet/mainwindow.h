#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNodeList>
#include <QDomNode>
#include <QStandardItemModel>
#include <QFile>
#include <QDebug>
#include <QDomNamedNodeMap>
#include <QList>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void saveFile();
    void loadFile();
    void parse(QStandardItem *root,QDomElement element);
private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    QFile *file;
};

#endif // MAINWINDOW_H
