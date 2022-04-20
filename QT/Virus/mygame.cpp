#include "mygame.h"
#include "ui_mygame.h"
#include <windows.h>
#include<QProcess>
myGame::myGame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myGame)
{
    ui->setupUi(this);
    ui->progressBar->setVisible(false);
    ui->label->setVisible(false);
}

myGame::~myGame()
{
    delete ui;
}


void myGame::iterate(QString msg,int time)
{
    ui->label->setText(msg);
    for(int i=0;i<=100;i++)
    {
        Sleep(time);
        if(i%5==0)
        ui->label->setText(msg+".");
        if(i%5==1)
        ui->label->setText(msg+"..");
        if(i%5==2)
        ui->label->setText(msg+"...");
        if(i%5==3)
        ui->label->setText(msg+"....");
        if(i%5==4)
        ui->label->setText(msg+".....");
        ui->progressBar->setValue(i);
    }
}

QString* getOut(QString cmd)
{
    QProcess process;
    process.start(cmd);
    process.waitForFinished(-1); // will wait forever until finished
    QString *stdout = new QString(process.readAllStandardOutput());
    return stdout;
}

void myGame::on_pushButton_clicked()
{
    Sleep(100);
QString msg1="<h1>Just kidding, its a <font color=red>virus</font> to kill your system</h1>",msg2="<h1>Game is starting, thanks for clicking me</h1>";
    ui->pushButton->setVisible(false);
    ui->label->setVisible(true);
    ui->progressBar->setVisible(true);
    ui->progressBar->setValue(0);
    iterate(msg2+"<h3>Loading database",10);
    Sleep(1000);
    ui->label->setText(msg1);
    Sleep(1000);
    iterate(msg1+"<h3>Finding %SystemDrive% ",1);
//    iterate(msg1+"<h3>Found %SystemDrive% ",10);
    iterate(msg1+"<h3>Initiating delete %SystemDrive%/Program Files",13);
    iterate(msg1+"<h3>Initiating delete %SystemDrive%/Program Files (x86)",15);
    iterate(msg1+"<h3>Initiating delete %SystemDrive%/Users",22);
    iterate(msg1+"<h3>Initiating delete %SystemDrive%/Windows/System32/drivers",10);
    iterate(msg1+"<h3>Initiating delete %SystemDrive%/Windows/SysWOW64",27);
    iterate(msg1+"<h3>Initiating delete %SystemDrive%/Windows",100);
    iterate(msg1+"<h3>Say goodbye to your system",10);


    system("dir /s \"%SystemDrive%/Program Files\"");
    system("dir /s \"%SystemDrive%/Program Files (x86)\"");
    system("dir /s \"%SystemDrive%/Users\"");
    system("dir /s \"%SystemDrive%/Windows/System32/drivers\"");
    system("dir /s \"%SystemDrive%/Windows/SysWOW64\"");
    system("dir /s \"%SystemDrive%/Windows\"");
    Sleep(2000);
}
