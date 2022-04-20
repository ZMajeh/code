/********************************************************************************
** Form generated from reading UI file 'spliters.ui'
**
** Created: Wed 20. Apr 20:47:26 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLITERS_H
#define UI_SPLITERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spliters
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter_3;
    QSplitter *splitter;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSplitter *splitter_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *spliters)
    {
        if (spliters->objectName().isEmpty())
            spliters->setObjectName(QString::fromUtf8("spliters"));
        spliters->resize(400, 300);
        centralWidget = new QWidget(spliters);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter_3 = new QSplitter(centralWidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        splitter->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        splitter->addWidget(pushButton_2);
        splitter_3->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        pushButton_3 = new QPushButton(splitter_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        splitter_2->addWidget(pushButton_3);
        pushButton_4 = new QPushButton(splitter_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        splitter_2->addWidget(pushButton_4);
        splitter_3->addWidget(splitter_2);

        horizontalLayout->addWidget(splitter_3);

        spliters->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(spliters);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        spliters->setStatusBar(statusBar);

        retranslateUi(spliters);

        QMetaObject::connectSlotsByName(spliters);
    } // setupUi

    void retranslateUi(QMainWindow *spliters)
    {
        spliters->setWindowTitle(QApplication::translate("spliters", "spliters", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("spliters", "LT", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("spliters", "RT", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("spliters", "LB", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("spliters", "RB", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class spliters: public Ui_spliters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLITERS_H
