#include<QApplication>
#include<QLabel>

int main(int argc, char **argv)
{
    QApplication myApp(argc, argv);
    QLabel myLabel("Hello World!");
    myLabel.show();
    return myApp.exec();
}
