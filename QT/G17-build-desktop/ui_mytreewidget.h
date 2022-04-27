/********************************************************************************
** Form generated from reading UI file 'mytreewidget.ui'
**
** Created: Wed 27. Apr 22:08:14 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTREEWIDGET_H
#define UI_MYTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_myTreeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *myTreeWidget)
    {
        if (myTreeWidget->objectName().isEmpty())
            myTreeWidget->setObjectName(QString::fromUtf8("myTreeWidget"));
        myTreeWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(myTreeWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(myTreeWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        lineEdit = new QLineEdit(myTreeWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(myTreeWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(myTreeWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(myTreeWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(myTreeWidget);

        QMetaObject::connectSlotsByName(myTreeWidget);
    } // setupUi

    void retranslateUi(QDialog *myTreeWidget)
    {
        myTreeWidget->setWindowTitle(QApplication::translate("myTreeWidget", "myTreeWidget", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myTreeWidget", "Add item at selected", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myTreeWidget", "Add item at root", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myTreeWidget", "Delete selected", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myTreeWidget: public Ui_myTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTREEWIDGET_H
