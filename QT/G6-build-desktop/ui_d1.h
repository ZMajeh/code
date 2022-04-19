/********************************************************************************
** Form generated from reading UI file 'd1.ui'
**
** Created: Tue 19. Apr 21:26:44 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_D1_H
#define UI_D1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_D1
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *D1)
    {
        if (D1->objectName().isEmpty())
            D1->setObjectName(QString::fromUtf8("D1"));
        D1->resize(312, 199);
        pushButton = new QPushButton(D1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 30, 93, 28));
        pushButton_2 = new QPushButton(D1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 100, 121, 28));

        retranslateUi(D1);
        QObject::connect(pushButton, SIGNAL(clicked()), D1, SLOT(close()));

        QMetaObject::connectSlotsByName(D1);
    } // setupUi

    void retranslateUi(QDialog *D1)
    {
        D1->setWindowTitle(QApplication::translate("D1", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("D1", "Close this", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("D1", "Close everything", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class D1: public Ui_D1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D1_H
