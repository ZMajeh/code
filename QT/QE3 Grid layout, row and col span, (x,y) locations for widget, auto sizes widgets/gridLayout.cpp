#include<QApplication>
//All gui like QPushButton, QLabel, etc
#include<QtGui>
//All core component like QString, etc
#include<QtCore>

int main(int a,char **b)
{
    QApplication *app=new QApplication(a,b);
    QWidget *window=new QWidget();

    window->setWindowTitle("Main window");
    QGridLayout *layout=new QGridLayout();

    QLabel *l1=new QLabel("Username");
    QLabel *l2=new QLabel("Password");
    QLineEdit *le1=new QLineEdit();
    QLineEdit *le2=new QLineEdit();
    QPushButton *b1=new QPushButton("Ok");

    layout->addWidget(l1,0,0);
    layout->addWidget(l2,1,0);
    layout->addWidget(b1,2,0,1,2);
    layout->addWidget(le1,0,1);
    layout->addWidget(le2,1,1);

    window->setLayout(layout);
    window->show();
    return app->exec();
}
