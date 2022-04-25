/********************************************************************************
** Form generated from reading UI file 'label.ui'
**
** Created: Tue 26. Apr 00:03:52 2022
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABEL_H
#define UI_LABEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Label
{
public:
    QWidget *centralWidget;
    QLabel *label;

    void setupUi(QMainWindow *Label)
    {
        if (Label->objectName().isEmpty())
            Label->setObjectName(QString::fromUtf8("Label"));
        Label->resize(590, 319);
        centralWidget = new QWidget(Label);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 60, 311, 161));
        Label->setCentralWidget(centralWidget);

        retranslateUi(Label);

        QMetaObject::connectSlotsByName(Label);
    } // setupUi

    void retranslateUi(QMainWindow *Label)
    {
        Label->setWindowTitle(QApplication::translate("Label", "Label", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Label", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.5pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">Hello World</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Label: public Ui_Label {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABEL_H
