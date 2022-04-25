/********************************************************************************
** Form generated from reading UI file 'pushbutton.ui'
**
** Created: Tue 26. Apr 00:09:56 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUSHBUTTON_H
#define UI_PUSHBUTTON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PushButton
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *PushButton)
    {
        if (PushButton->objectName().isEmpty())
            PushButton->setObjectName(QString::fromUtf8("PushButton"));
        PushButton->resize(413, 125);
        pushButton = new QPushButton(PushButton);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 50, 93, 28));
        pushButton_2 = new QPushButton(PushButton);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 50, 93, 28));

        retranslateUi(PushButton);

        QMetaObject::connectSlotsByName(PushButton);
    } // setupUi

    void retranslateUi(QDialog *PushButton)
    {
        PushButton->setWindowTitle(QApplication::translate("PushButton", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PushButton", "Click Me", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("PushButton", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PushButton: public Ui_PushButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUSHBUTTON_H
