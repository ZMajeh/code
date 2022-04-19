/********************************************************************************
** Form generated from reading UI file 'g2.ui'
**
** Created: Mon 18. Apr 20:05:00 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_G2_H
#define UI_G2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_G2
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QScrollBar *horizontalScrollBar;
    QProgressBar *progressBar_2;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *G2)
    {
        if (G2->objectName().isEmpty())
            G2->setObjectName(QString::fromUtf8("G2"));
        G2->resize(400, 300);
        centralWidget = new QWidget(G2);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 0, 93, 28));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(150, 60, 118, 23));
        progressBar->setValue(24);
        horizontalScrollBar = new QScrollBar(centralWidget);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(110, 120, 160, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        progressBar_2 = new QProgressBar(centralWidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(140, 160, 118, 23));
        progressBar_2->setValue(24);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 200, 93, 28));
        G2->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(G2);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        G2->setMenuBar(menuBar);
        mainToolBar = new QToolBar(G2);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        G2->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(G2);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        G2->setStatusBar(statusBar);

        retranslateUi(G2);
        QObject::connect(horizontalScrollBar, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(horizontalScrollBar, SIGNAL(valueChanged(int)), progressBar_2, SLOT(setValue(int)));
        QObject::connect(pushButton_2, SIGNAL(clicked()), progressBar_2, SLOT(reset()));

        QMetaObject::connectSlotsByName(G2);
    } // setupUi

    void retranslateUi(QMainWindow *G2)
    {
        G2->setWindowTitle(QApplication::translate("G2", "G2", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("G2", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("G2", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class G2: public Ui_G2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_G2_H
