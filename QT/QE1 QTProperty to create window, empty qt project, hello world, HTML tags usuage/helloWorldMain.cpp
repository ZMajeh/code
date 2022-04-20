
#include<QApplication>
#include<QLabel>
//This is not needed
#include<QMainWindow>
//Whenever new widget is called show(), new QMainWindow is generated automatically
void main(int a,char **c)
{
    QApplication *b=new QApplication(a,c);
    QLabel *l1=new QLabel(
            "<h1>1. <b>Hello</b> <font color=red><i>world</i></font></h1>");//This suppports all html attributes
    l1->show(); //Creates window automatically QMainWindow
    QLabel *l2=new QLabel(
            "<h1>2. <b>Hello</b> <font color=red><i>world</i></font></h1>");//This suppports all html attributes
    l2->show(); //Creates window automatically QMainWindow
    QMainWindow *q=new QMainWindow();
    q->show();      //No need to manually create this :)
    b->exec();


    return;
}
