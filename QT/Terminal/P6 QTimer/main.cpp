#include <QtCore/QCoreApplication>
#include<mytimer.h>
#include<QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //QTimer can be used as, delayed call for function
    //MyTimer t;

    //Can make one method virtual, so we can create anonymous class
    //And set task which to be called in delayed fation.
    class :MyTimer{
    public:
        int flag;
        void post()
        {
            if(flag==100)timer->stop();

            timer->setInterval(100);
            qDebug()<<"from annonymous class";
            flag++;
        }
    }delayedPost;
    delayedPost.flag=0;
    return a.exec();
}
