/********************************************************************************
** Form generated from reading UI file 'myqmessagebox.ui'
**
** Created: Fri 29. Apr 23:33:25 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYQMESSAGEBOX_H
#define UI_MYQMESSAGEBOX_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myQMessageBox
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *myQMessageBox)
    {
        if (myQMessageBox->objectName().isEmpty())
            myQMessageBox->setObjectName(QString::fromUtf8("myQMessageBox"));
        myQMessageBox->resize(400, 300);
        centralWidget = new QWidget(myQMessageBox);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        myQMessageBox->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myQMessageBox);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        myQMessageBox->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myQMessageBox);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        myQMessageBox->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(myQMessageBox);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        myQMessageBox->setStatusBar(statusBar);

        retranslateUi(myQMessageBox);

        QMetaObject::connectSlotsByName(myQMessageBox);
    } // setupUi

    void retranslateUi(QMainWindow *myQMessageBox)
    {
        myQMessageBox->setWindowTitle(QApplication::translate("myQMessageBox", "myQMessageBox", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myQMessageBox", "Information", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myQMessageBox", "Question", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myQMessageBox", "Warning", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("myQMessageBox", "Custom", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myQMessageBox: public Ui_myQMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYQMESSAGEBOX_H
