/********************************************************************************
** Form generated from reading UI file 'myqstatusbar.ui'
**
** Created: Thu 28. Apr 21:51:35 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYQSTATUSBAR_H
#define UI_MYQSTATUSBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myQStatusBar
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *myQStatusBar)
    {
        if (myQStatusBar->objectName().isEmpty())
            myQStatusBar->setObjectName(QString::fromUtf8("myQStatusBar"));
        myQStatusBar->resize(400, 300);
        centralWidget = new QWidget(myQStatusBar);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        myQStatusBar->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myQStatusBar);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        myQStatusBar->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myQStatusBar);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        myQStatusBar->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(myQStatusBar);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        myQStatusBar->setStatusBar(statusBar);

        retranslateUi(myQStatusBar);

        QMetaObject::connectSlotsByName(myQStatusBar);
    } // setupUi

    void retranslateUi(QMainWindow *myQStatusBar)
    {
        myQStatusBar->setWindowTitle(QApplication::translate("myQStatusBar", "myQStatusBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myQStatusBar: public Ui_myQStatusBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYQSTATUSBAR_H
