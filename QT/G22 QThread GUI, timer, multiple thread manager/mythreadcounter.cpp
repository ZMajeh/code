#include "mythreadcounter.h"
#include "ui_mythreadcounter.h"
#include<mythread.h>
#include<QtCore>
#include<QtGui>
//Init Threads, i is counter data
myThreadCounter::myThreadCounter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myThreadCounter)
{
    ui->setupUi(this);
    curCount=-1;        //Current running threads
    i=0;
    for(int k=0;k<MyLimit;k++)
        mt[k]=NULL;     //Init all memory space
}

myThreadCounter::~myThreadCounter()
{
    delete ui;

}

//Slot for adding button
void myThreadCounter::on_pushButton_clicked()
{
    int toCreate=ui->lineEdit->text().toInt();      //How many threads to create at a time
    if(toCreate<1)toCreate=1;
    for(int k=0;k<toCreate;k++)
    {
        if(curCount>=MyLimit-1)
        {
            QMessageBox::information(this,"Thread : ","Thread memory full, cant create any more");
            return;
        }
        curCount++;                                                         //Thread count
        QPushButton *b1=new QPushButton(this),*b2=new QPushButton(this);    //Control buttons
        b1->setText("Start Thread "+QString::number(curCount));
        b2->setText("Stop Thread "+QString::number(curCount));
        connect(b1,SIGNAL(clicked()),this,SLOT(clickThreadStart()));        //Connect signals to slots
        connect(b2,SIGNAL(clicked()),this,SLOT(clickThreadSop()));
        QHBoxLayout *qhbl=new QHBoxLayout(this);                            //Layout for buttons/Horizontal
        qhbl->addWidget(b1);
        qhbl->addWidget(b2);
        QWidget *tmp=new QWidget(this);                                     //Widget is needed to add on main window
        tmp->setLayout(qhbl);
        ui->verticalLayout_2->addWidget(tmp);
    }
}




//SLOT to start and stop thread
void myThreadCounter::clickThreadStart()
{
    int clickedThread=((QPushButton*)sender())->text().split(" ")[2].toInt();                                   //Get number for thread of pressed button
    if(mt[clickedThread]!=NULL)                                                                                 //If alredy exist, mean no need to start one more
    {
        QMessageBox::information(this,"Thread : ","Thread is alredy running : "+QString::number(clickedThread));
        return;
    }
    mt[clickedThread]=new MyThread();
    mt[clickedThread]->start();
    mt[clickedThread]->flag=1;
    connect(mt[clickedThread],SIGNAL(valueChanged()),this,SLOT(increment()));
    QMessageBox::information(this,"Thread : ","Started : "+QString::number(clickedThread));

}

void myThreadCounter::clickThreadSop()
{

    int clickedThread=((QPushButton*)sender())->text().split(" ")[2].toInt();
    if(mt[clickedThread]!=NULL)
        mt[clickedThread]->flag=0;
    mt[clickedThread]=NULL;
    QMessageBox::information(this,"Thread : ","Stopped : "+QString::number(clickedThread));
}
//SLOT for incrementing
void myThreadCounter::increment()
{
    i++;
    ui->label->setText(QString::number(i));
}


//Start all
void myThreadCounter::on_pushButton_2_clicked()
{
    int started=0;
    for(int k=0;k<=curCount;k++)
    {
        int clickedThread=k;
        if(mt[clickedThread]!=NULL)
        {
            QMessageBox::information(this,"Thread : ","Thread is alredy running : "+QString::number(clickedThread));
            continue;
        }
        mt[clickedThread]=new MyThread();
        mt[clickedThread]->start();
        mt[clickedThread]->flag=1;
        connect(mt[clickedThread],SIGNAL(valueChanged()),this,SLOT(increment()));
        started++;
    }
    QMessageBox::information(this,"Thread : ","Started "+QString::number(started)+" Threads");
}


//Stop all
void myThreadCounter::on_pushButton_3_clicked()
{
    int stopped=0;
    for(int k=0;k<=curCount;k++)
    {
        int clickedThread=k;
        if(mt[clickedThread]!=NULL)
        {
            mt[clickedThread]->flag=0;
            stopped++;
        }
         mt[clickedThread]=NULL;
    }
    QMessageBox::information(this,"Thread : ","Stopped "+QString::number(stopped)+" Threads");
}
