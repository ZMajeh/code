#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model=new QStandardItemModel(0,5,this);
    file=new QFile("MyContacts.dat");
    loadFile();
    ui->treeView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::parse(QStandardItem *root,QDomElement element)
{
    QDomNodeList myList=element.childNodes();
    qDebug() << myList.count();
    for(int i=0;i<myList.count();i++)
    {
        if(myList.at(i).isElement())
        {
            QStandardItem *item=new QStandardItem(myList.at(i).toElement().tagName());
            QDomNamedNodeMap myMap=myList.at(i).toElement().attributes();
            qDebug() << "Col is : " << myMap.count();
            root->appendRow(item);
            for(int j=0;j<myMap.count();j++)
            {
                QStandardItem *i1=new QStandardItem(myMap.item(j).toAttr().name());
                QStandardItem *i2=new QStandardItem(myMap.item(j).toAttr().value());
                QList<QStandardItem*> *myColList=new QList<QStandardItem*>();
                myColList->append(i1);
                myColList->append(i2);
                root->appendColumn(*myColList);
            }
            parse(item,myList.at(i).toElement());
        }
    }
}

void MainWindow::loadFile()
{
    if(file->open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QDomDocument doc;
        doc.setContent(file);
        file->close();
        QDomElement element=doc.firstChildElement();
        QStandardItem *root=new QStandardItem("Root");
        parse(root,element);
        model->appendRow(root);
    }
    else
    {
        qDebug() << "Error loading file";
        exit(1);
    }
}

void MainWindow::saveFile()
{

}
