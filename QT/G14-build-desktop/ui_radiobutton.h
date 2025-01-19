/********************************************************************************
** Form generated from reading UI file 'radiobutton.ui'
**
** Created: Tue 26. Apr 23:05:17 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOBUTTON_H
#define UI_RADIOBUTTON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_radioButton
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *radioButton)
    {
        if (radioButton->objectName().isEmpty())
            radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->resize(400, 300);
        centralWidget = new QWidget(radioButton);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);


        horizontalLayout->addLayout(verticalLayout);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        radioButton->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(radioButton);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        radioButton->setMenuBar(menuBar);
        mainToolBar = new QToolBar(radioButton);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        radioButton->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(radioButton);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        radioButton->setStatusBar(statusBar);

        retranslateUi(radioButton);

        QMetaObject::connectSlotsByName(radioButton);
    } // setupUi

    void retranslateUi(QMainWindow *radioButton)
    {
        radioButton->setWindowTitle(QApplication::translate("radioButton", "radioButton", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("radioButton", "Male", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("radioButton", "Female", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("radioButton", "Test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class radioButton: public Ui_radioButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOBUTTON_H
