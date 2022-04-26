/********************************************************************************
** Form generated from reading UI file 'listwidget.ui'
**
** Created: Tue 26. Apr 23:27:42 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWIDGET_H
#define UI_LISTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listWidget
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *listWidget)
    {
        if (listWidget->objectName().isEmpty())
            listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->resize(400, 300);
        centralWidget = new QWidget(listWidget);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        verticalLayout->addWidget(listWidget_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        listWidget->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(listWidget);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        listWidget->setMenuBar(menuBar);
        mainToolBar = new QToolBar(listWidget);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        listWidget->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(listWidget);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        listWidget->setStatusBar(statusBar);

        retranslateUi(listWidget);

        QMetaObject::connectSlotsByName(listWidget);
    } // setupUi

    void retranslateUi(QMainWindow *listWidget)
    {
        listWidget->setWindowTitle(QApplication::translate("listWidget", "listWidget", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("listWidget", "Kill the", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("listWidget", "Remove", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class listWidget: public Ui_listWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWIDGET_H
