/********************************************************************************
** Form generated from reading UI file 'checkbox.ui'
**
** Created: Tue 26. Apr 23:02:34 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKBOX_H
#define UI_CHECKBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_checkBox
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_2;
    QPushButton *pushButton;

    void setupUi(QDialog *checkBox)
    {
        if (checkBox->objectName().isEmpty())
            checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->resize(400, 300);
        verticalLayout = new QVBoxLayout(checkBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox_2 = new QCheckBox(checkBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);

        pushButton = new QPushButton(checkBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(checkBox);

        QMetaObject::connectSlotsByName(checkBox);
    } // setupUi

    void retranslateUi(QDialog *checkBox)
    {
        checkBox->setWindowTitle(QApplication::translate("checkBox", "checkBox", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("checkBox", "Make it black", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("checkBox", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class checkBox: public Ui_checkBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKBOX_H
