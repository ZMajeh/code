/********************************************************************************
** Form generated from reading UI file 'menudemo.ui'
**
** Created: Tue 19. Apr 21:09:33 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUDEMO_H
#define UI_MENUDEMO_H

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

class Ui_menuDemo
{
public:
    QAction *actionNewButton;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *menuDemo)
    {
        if (menuDemo->objectName().isEmpty())
            menuDemo->setObjectName(QString::fromUtf8("menuDemo"));
        menuDemo->resize(400, 300);
        actionNewButton = new QAction(menuDemo);
        actionNewButton->setObjectName(QString::fromUtf8("actionNewButton"));
        centralWidget = new QWidget(menuDemo);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        menuDemo->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(menuDemo);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuDemo->setMenuBar(menuBar);
        mainToolBar = new QToolBar(menuDemo);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        menuDemo->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(menuDemo);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        menuDemo->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNewButton);
        mainToolBar->addAction(actionNewButton);

        retranslateUi(menuDemo);

        QMetaObject::connectSlotsByName(menuDemo);
    } // setupUi

    void retranslateUi(QMainWindow *menuDemo)
    {
        menuDemo->setWindowTitle(QApplication::translate("menuDemo", "menuDemo", 0, QApplication::UnicodeUTF8));
        actionNewButton->setText(QApplication::translate("menuDemo", "close", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("menuDemo", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class menuDemo: public Ui_menuDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUDEMO_H
