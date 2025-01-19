/********************************************************************************
** Form generated from reading UI file 'myqsliderandqprogressbar.ui'
**
** Created: Thu 28. Apr 21:41:39 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYQSLIDERANDQPROGRESSBAR_H
#define UI_MYQSLIDERANDQPROGRESSBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myQSliderAndQProgressBar
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *myQSliderAndQProgressBar)
    {
        if (myQSliderAndQProgressBar->objectName().isEmpty())
            myQSliderAndQProgressBar->setObjectName(QString::fromUtf8("myQSliderAndQProgressBar"));
        myQSliderAndQProgressBar->resize(400, 300);
        centralWidget = new QWidget(myQSliderAndQProgressBar);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        myQSliderAndQProgressBar->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myQSliderAndQProgressBar);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        myQSliderAndQProgressBar->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myQSliderAndQProgressBar);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        myQSliderAndQProgressBar->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(myQSliderAndQProgressBar);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        myQSliderAndQProgressBar->setStatusBar(statusBar);

        retranslateUi(myQSliderAndQProgressBar);

        QMetaObject::connectSlotsByName(myQSliderAndQProgressBar);
    } // setupUi

    void retranslateUi(QMainWindow *myQSliderAndQProgressBar)
    {
        myQSliderAndQProgressBar->setWindowTitle(QApplication::translate("myQSliderAndQProgressBar", "myQSliderAndQProgressBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myQSliderAndQProgressBar: public Ui_myQSliderAndQProgressBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYQSLIDERANDQPROGRESSBAR_H
