/********************************************************************************
** Form generated from reading UI file 'mythreadcounter.ui'
**
** Created: Sun 1. May 14:56:06 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTHREADCOUNTER_H
#define UI_MYTHREADCOUNTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myThreadCounter
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *myThreadCounter)
    {
        if (myThreadCounter->objectName().isEmpty())
            myThreadCounter->setObjectName(QString::fromUtf8("myThreadCounter"));
        myThreadCounter->resize(620, 268);
        centralWidget = new QWidget(myThreadCounter);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 594, 186));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(scrollAreaWidgetContents);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        myThreadCounter->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myThreadCounter);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 620, 20));
        myThreadCounter->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myThreadCounter);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        myThreadCounter->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(myThreadCounter);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        myThreadCounter->setStatusBar(statusBar);

        retranslateUi(myThreadCounter);

        QMetaObject::connectSlotsByName(myThreadCounter);
    } // setupUi

    void retranslateUi(QMainWindow *myThreadCounter)
    {
        myThreadCounter->setWindowTitle(QApplication::translate("myThreadCounter", "myThreadCounter", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("myThreadCounter", "Number counts here", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("myThreadCounter", "1", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myThreadCounter", "Add thread", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myThreadCounter", "Start all", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myThreadCounter", "Stop all", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myThreadCounter: public Ui_myThreadCounter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTHREADCOUNTER_H
