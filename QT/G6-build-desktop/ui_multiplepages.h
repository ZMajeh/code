/********************************************************************************
** Form generated from reading UI file 'multiplepages.ui'
**
** Created: Tue 19. Apr 21:17:22 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLEPAGES_H
#define UI_MULTIPLEPAGES_H

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

class Ui_multiplePages
{
public:
    QAction *actionNew;
    QAction *actionClose;
    QAction *actionNew_modeled;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *multiplePages)
    {
        if (multiplePages->objectName().isEmpty())
            multiplePages->setObjectName(QString::fromUtf8("multiplePages"));
        multiplePages->resize(400, 300);
        actionNew = new QAction(multiplePages);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionClose = new QAction(multiplePages);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionNew_modeled = new QAction(multiplePages);
        actionNew_modeled->setObjectName(QString::fromUtf8("actionNew_modeled"));
        centralWidget = new QWidget(multiplePages);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        multiplePages->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(multiplePages);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        multiplePages->setMenuBar(menuBar);
        mainToolBar = new QToolBar(multiplePages);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        multiplePages->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(multiplePages);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        multiplePages->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionNew_modeled);
        menuFile->addAction(actionClose);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionNew_modeled);
        mainToolBar->addAction(actionClose);

        retranslateUi(multiplePages);

        QMetaObject::connectSlotsByName(multiplePages);
    } // setupUi

    void retranslateUi(QMainWindow *multiplePages)
    {
        multiplePages->setWindowTitle(QApplication::translate("multiplePages", "multiplePages", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("multiplePages", "New normal", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("multiplePages", "close", 0, QApplication::UnicodeUTF8));
        actionNew_modeled->setText(QApplication::translate("multiplePages", "New modeled", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("multiplePages", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class multiplePages: public Ui_multiplePages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLEPAGES_H
