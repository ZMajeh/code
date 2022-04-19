/********************************************************************************
** Form generated from reading UI file 'notepaddemo.ui'
**
** Created: Tue 19. Apr 21:07:47 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPADDEMO_H
#define UI_NOTEPADDEMO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_notepadDemo
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *notepadDemo)
    {
        if (notepadDemo->objectName().isEmpty())
            notepadDemo->setObjectName(QString::fromUtf8("notepadDemo"));
        notepadDemo->resize(400, 300);
        centralWidget = new QWidget(notepadDemo);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(120, 40, 104, 78));
        notepadDemo->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(notepadDemo);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        notepadDemo->setMenuBar(menuBar);
        mainToolBar = new QToolBar(notepadDemo);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        notepadDemo->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(notepadDemo);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        notepadDemo->setStatusBar(statusBar);

        retranslateUi(notepadDemo);

        QMetaObject::connectSlotsByName(notepadDemo);
    } // setupUi

    void retranslateUi(QMainWindow *notepadDemo)
    {
        notepadDemo->setWindowTitle(QApplication::translate("notepadDemo", "notepadDemo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class notepadDemo: public Ui_notepadDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPADDEMO_H
