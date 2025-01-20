#include <QtCore/QCoreApplication>
//To learn QDir
#include<QDir>
#include<QDebug>
#include<iostream>

void inputStringMethod()
{
    char buff[100];
    qDebug()<<"What is your name?";
    std::cin>>buff;
    qDebug()<<"Hello"<<buff;
}

void showDrives()
{
    QDir q;
    qDebug()<<"This shows the list of drives in the system...";
    foreach(QFileInfo item,q.drives())
    {
        qDebug()<<"\t"<<item.absolutePath();
    }
}
void explore()
{
    QDir q;
    int x=-1;
    while(x!=100)
    {
        QList<QFileInfo> drives;
        if(x==-1)
           drives=q.drives();
        else drives=q.entryInfoList();
        int i=0;
        for(QList<QFileInfo>::iterator item=drives.begin();item!=drives.end();item++,i++)
        {
            if((*item).isDir())
               qDebug()<<"\t"<<i<<"."<<(*item).absoluteFilePath();
        }
        i=0;;
        for(QList<QFileInfo>::iterator item=drives.begin();item!=drives.end();item++,i++)
        {
            if((*item).isFile())
               qDebug()<<"\t"<<i<<"."<<(*item).absoluteFilePath();
        }
        qDebug()<<"-1. to show drives\n100. to exit to main menu";
        std::cin>>x;
        if(drives.length()>=x&&x>=0)
            q.cd(drives.at(x).absoluteFilePath());
    }

}


void createDirectory()
{
    char buff[1000];
    qDebug("Enter path : ");
    std::cin>>buff;
    QDir q;
    if(q.exists(buff))
        qDebug()<<"Directory exists alredy";
    else
    {
        q.mkpath(buff);
        qDebug()<<"Directory created";
    }

}

int main(int argc, char *argv[])
{
    int c1=0,exit=100;
    QCoreApplication a(argc, argv);
    while(c1!=exit)
    {
        qDebug()<<"1. Input string test\n2. List the drives in the system\n3. Explore\n4. Create directory\n100. exit";
        std::cin>>c1;
        switch(c1)
        {
        case 0:break;
        case 1:
            inputStringMethod();
            break;
        case 2:
                showDrives();
            break;
        case 3:
            explore();
            break;
        case 4:
            createDirectory();
            break;
        case 100:
            qDebug()<<"Thanks for using(ctrl+c to exit)";
            break;
        }
    }
    return a.exec();
}
