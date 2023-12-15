#include <QApplication>
#include <QColorDialog>
#include <QPushButton>
#include <QColor>
#include <QDialog>
#include <QPalette>
#include <QObject>

// Free function to open color dialog and change button color
void openColors(QPushButton *mpb)
{
    QColorDialog myCD;
    if(myCD.exec() == QDialog::Accepted)
    {
        mpb->setAutoFillBackground(true);
        QColor myColor = myCD.currentColor();
        QPalette palette = mpb->palette();
        // Text color
        palette.setColor(QPalette::Button, myColor);
        // Button border
        palette.setColor(QPalette::Window, myColor);
        mpb->setPalette(palette);
        mpb->repaint();
    }
}

int main(int c, char **a)
{
    QApplication myApp(c, a);
    QPushButton *mb = new QPushButton("Change Color");//, (QWidget*)&myApp);
    // connect signal to lambda function
    QObject::connect(mb, &QPushButton::clicked, [mb](){openColors(mb);});
    mb->show();
    // Wait for dialog to close
    return myApp.exec();
}

