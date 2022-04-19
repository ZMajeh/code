/********************************************************************************
** Form generated from reading UI file 'g1.ui'
**
** Created: Mon 18. Apr 19:59:36 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_G1_H
#define UI_G1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_G1
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *G1)
    {
        if (G1->objectName().isEmpty())
            G1->setObjectName(QString::fromUtf8("G1"));
        G1->resize(400, 300);
        centralWidget = new QWidget(G1);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 0, 93, 28));
        G1->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(G1);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        G1->setMenuBar(menuBar);
        mainToolBar = new QToolBar(G1);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        G1->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(G1);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        G1->setStatusBar(statusBar);

        retranslateUi(G1);
        QObject::connect(pushButton, SIGNAL(clicked()), G1, SLOT(close()));

        QMetaObject::connectSlotsByName(G1);
    } // setupUi

    void retranslateUi(QMainWindow *G1)
    {
        G1->setWindowTitle(QApplication::translate("G1", "G1", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("G1", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class G1: public Ui_G1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_G1_H
