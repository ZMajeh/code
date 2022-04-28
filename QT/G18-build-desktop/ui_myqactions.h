/********************************************************************************
** Form generated from reading UI file 'myqactions.ui'
**
** Created: Thu 28. Apr 21:38:34 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYQACTIONS_H
#define UI_MYQACTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myQactions
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionClose;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *myQactions)
    {
        if (myQactions->objectName().isEmpty())
            myQactions->setObjectName(QString::fromUtf8("myQactions"));
        myQactions->resize(400, 300);
        actionNew = new QAction(myQactions);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(myQactions);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionClose = new QAction(myQactions);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        centralWidget = new QWidget(myQactions);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        myQactions->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myQactions);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        myQactions->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myQactions);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        myQactions->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(myQactions);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        myQactions->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionClose);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionClose);

        retranslateUi(myQactions);

        QMetaObject::connectSlotsByName(myQactions);
    } // setupUi

    void retranslateUi(QMainWindow *myQactions)
    {
        myQactions->setWindowTitle(QApplication::translate("myQactions", "myQactions", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("myQactions", "New", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("myQactions", "Open", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("myQactions", "Close", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("myQactions", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myQactions: public Ui_myQactions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYQACTIONS_H
