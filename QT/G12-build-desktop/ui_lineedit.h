/********************************************************************************
** Form generated from reading UI file 'lineedit.ui'
**
** Created: Tue 26. Apr 22:57:48 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEEDIT_H
#define UI_LINEEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lineEdit
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *lineEdit)
    {
        if (lineEdit->objectName().isEmpty())
            lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->resize(409, 264);
        centralWidget = new QWidget(lineEdit);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_2->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);

        lineEdit->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(lineEdit);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 409, 20));
        lineEdit->setMenuBar(menuBar);
        mainToolBar = new QToolBar(lineEdit);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        lineEdit->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(lineEdit);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        lineEdit->setStatusBar(statusBar);

        retranslateUi(lineEdit);

        QMetaObject::connectSlotsByName(lineEdit);
    } // setupUi

    void retranslateUi(QMainWindow *lineEdit)
    {
        lineEdit->setWindowTitle(QApplication::translate("lineEdit", "lineEdit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("lineEdit", "Username", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("lineEdit", "Password", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QString());
        pushButton->setText(QApplication::translate("lineEdit", "Check", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class lineEdit: public Ui_lineEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEEDIT_H
