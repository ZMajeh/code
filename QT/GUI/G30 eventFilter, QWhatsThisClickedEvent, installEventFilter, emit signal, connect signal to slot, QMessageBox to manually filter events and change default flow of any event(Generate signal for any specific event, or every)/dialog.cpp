#include "dialog.h"
#include "ui_dialog.h"


/*
Qt event filter.
When you need to filter any event and manually set events, then use this
Steps:
1.1. Create class inheriting QObject
1.2. have at least 1 signal and overload protected method eventFilter(QObject*,QEvent*)
1.3. Add emit for that signal in eventFilter on your favorable condition
2. In main design, create object for above class
3. Use method installEventFilter(QObject*) on any widget to set event filter to that particular widget
4. use connect() to connect to signal from filter class, to your favorable slot from anywhere\


Simple words, it is to manually filter any event on particular widget, and generate signals from it
*/
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    // Create Object for filter
    myEventFilter *filter=new myEventFilter(this);
    // Install filter
    ui->pushButton->installEventFilter(filter);
    // Initialize GUI as per need
    ui->pushButton->setWhatsThis("Iruna online is <a href ='Mass Multiplayer Online Role Playing'>MMORPG</a> game.");
    // Connect manuallycreated signal to slot
    connect(filter,SIGNAL(linkClicked(QString)),this,SLOT(performClickOnLink(QString)));
}

void Dialog::performClickOnLink(const QString &myStr)
{
    // This is executed when your manual signal is generated
    QMessageBox::information(this,"Clicked on Link",myStr);
}

Dialog::~Dialog()
{
    delete ui;
}
