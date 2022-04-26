/********************************************************************************
** Form generated from reading UI file 'combobox.ui'
**
** Created: Tue 26. Apr 23:14:56 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOBOX_H
#define UI_COMBOBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_comboBox
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *comboBox)
    {
        if (comboBox->objectName().isEmpty())
            comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->resize(380, 106);
        centralWidget = new QWidget(comboBox);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        comboBox->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(comboBox);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 380, 20));
        comboBox->setMenuBar(menuBar);
        mainToolBar = new QToolBar(comboBox);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        comboBox->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(comboBox);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        comboBox->setStatusBar(statusBar);

        retranslateUi(comboBox);

        QMetaObject::connectSlotsByName(comboBox);
    } // setupUi

    void retranslateUi(QMainWindow *comboBox)
    {
        comboBox->setWindowTitle(QApplication::translate("comboBox", "comboBox", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("comboBox", "Mango", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("comboBox", "Cat", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("comboBox", "Mobile", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("comboBox", "Select favourite", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class comboBox: public Ui_comboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOBOX_H
