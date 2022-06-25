#include <QtCore/QCoreApplication>

#include <QDomDocument>
#include <QDomElement>
#include <QDomNodeList>
#include <QDomNode>

#include <QDebug>
#include <QFile>
#include <QIODevice>


// Reading XML file
// Open QFile in read mode
// Make QDomElement
// Pass opened file to QDomElement::setContent(&QFile)
// get root node
// Get children from root node
// Use appropritae loops to get all data
// QDomNodeList and QDomNode is used to load elements
// QDomNodeList is array of QDomNode
// QDomNode can be converted to QDomElement
// attribute method of QDomElement is used to load attributes of xml tag
// elementByTagName is used to rxtract QDomNodeList for particular element

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Open file
    QFile file("MyContacts.dat");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        // Make document
        QDomDocument myDocument;
        // Set content
        if(!myDocument.setContent(&file))
        {
            qDebug() << "Error to parse xml file";
            return;
        }
        qDebug() << "File is parsed successfully";
        file.close();

        // Get root node
        QDomElement root=myDocument.firstChildElement();
        // Get all person tags from root node which is contacts
        QDomNodeList list=root.elementsByTagName("Person");
        qDebug() << "Found "+QString::number(list.count())+" Person nodes";
        for(int i=0;i<list.count();i++)
        {
            // Get QDomNode
            QDomNode myNode=list.at(i);
            if(myNode.isElement())
            {
                // Convert QDomNode to QDomElement
                QDomElement myElement=myNode.toElement();
                // Use attribute method to extract data
                qDebug() << "Person : "+QString::number(i);
                qDebug() << "\tName : "+myElement.attribute("Name");
                qDebug() << "\tPhone : "+myElement.attribute("Phone");
                qDebug() << "\tMobile : "+myElement.attribute("Mobile");
                qDebug() << "\tJob : "+myElement.attribute("Job");
                qDebug() << "\tAge : "+myElement.attribute("Age");
            }
        }
    }
    else
    {
        // When no file to open or any other file error
        qDebug() << "Error to open file";
    }
    return a.exec();
}
