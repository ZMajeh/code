/********************************************************************************
** Form generated from reading UI file 'g3.ui'
**
** Created: Mon 18. Apr 21:05:01 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_G3_H
#define UI_G3_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_G3
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *G3)
    {
        if (G3->objectName().isEmpty())
            G3->setObjectName(QString::fromUtf8("G3"));
        G3->resize(400, 300);
        centralWidget = new QWidget(G3);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(70, 20, 256, 192));
        G3->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(G3);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        G3->setMenuBar(menuBar);
        mainToolBar = new QToolBar(G3);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        G3->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(G3);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        G3->setStatusBar(statusBar);

        retranslateUi(G3);

        QMetaObject::connectSlotsByName(G3);
    } // setupUi

    void retranslateUi(QMainWindow *G3)
    {
        G3->setWindowTitle(QApplication::translate("G3", "G3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class G3: public Ui_G3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_G3_H
