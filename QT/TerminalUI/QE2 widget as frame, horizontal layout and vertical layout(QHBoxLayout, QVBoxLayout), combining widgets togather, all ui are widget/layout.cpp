#include<QApplication>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QPushButton>

int main(int a,char **b)
{
    QApplication *app=new QApplication(a,b);

    //Creating widget is easy, its an empty frame kind thing
    //We can make it do anything
    QWidget *w1=new QWidget();                      //Empty frame
    QPushButton *b1=new QPushButton("One");         //Lets cereate 3 buttons
    QPushButton *b2=new QPushButton("two");
    QPushButton *b3=new QPushButton("three");
    QHBoxLayout *hl1=new QHBoxLayout;               //Horizontal layout to hold buttons
    hl1->addWidget(b1);                             //Add all 3 buttons to layout
    hl1->addWidget(b2);
    hl1->addWidget(b3);
    w1->setLayout(hl1);                             //Set layout to widget....
    //if we use show(), it opens window with 3 buttons
    //As per QT rules, if no window is mentioned, it will create one blank QMainWindow :)

    //Lets make one more similar widget
    QWidget *w2=new QWidget();
    hl1=new QHBoxLayout;
    b1=new QPushButton("One");
    b2=new QPushButton("two");
    b3=new QPushButton("three");
    hl1->addWidget(b1);
    hl1->addWidget(b2);
    hl1->addWidget(b3);
    w2->setLayout(hl1);

    //Lets create last one to finish 3x3 kinda thing
    QWidget *w3=new QWidget();
    hl1=new QHBoxLayout;
    b1=new QPushButton("One");
    b2=new QPushButton("two");
    b3=new QPushButton("three");
    hl1->addWidget(b1);
    hl1->addWidget(b2);
    hl1->addWidget(b3);         ///Also we can add as many buttons we want here
    b3=new QPushButton("three");
    hl1->addWidget(b3);         ///And this proves it
    w3->setLayout(hl1);

    //Now we have 3 different widget with horizontal layout,
    //Now we can make one widget with vertical layout and we are gold
    //We can add all horizontal layout widgets in one vertical layout and we get matrix kinda thing
    QWidget *w4 = new QWidget();                //Empty widget
    QVBoxLayout *vl1=new QVBoxLayout;           //Vertical layout
    vl1->addWidget(w1);
    vl1->addWidget(w2);
    vl1->addWidget(w3);                         //Added all 3 previous widgets here
    w4->setLayout(vl1);                         //Set this layout to our 4th widget
    w4->show();                                 //So w4 contain w1,w2,w3 and when we show() w4, it automatically show() others too...
    w1->show();w2->show();w3->show();           //So basically this is ignored
    return app->exec();     //exec makes program wait till we close window or application
}
