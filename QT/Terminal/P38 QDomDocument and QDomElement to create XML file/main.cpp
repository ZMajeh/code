#include <QtCore/QCoreApplication>

#include <QDomElement>
#include <QDomDocument>
#include <QFile>
#include <QDebug>
#include <QString>


// Generating XML file
// Create root element
// Add child, set attributes
// Can add child to child and set attributes for it, any number of times
// toString will convert object to String format
// We can write it to file

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Make document
    QDomDocument document;
    // Root element
    QDomElement root=document.createElement("Contacts");

    // Add 5 children
    for(int i=0;i<5;i++)
    {
        // Make child and set attributes and append child to parent
        QDomElement person=document.createElement("Person");
            person.setAttribute("Name","Person_Name_"+QString::number(i));
            person.setAttribute("Phone","Person_Phone_"+QString::number(i));
            person.setAttribute("Mobile","Person_Mobile_"+QString::number(i));
            person.setAttribute("Age","Person_Age_"+QString::number(i));
            person.setAttribute("Job","Person_Job_"+QString::number(i));
        root.appendChild(person);
    }

    // Append parent to root
    document.appendChild(root);

    // Create file to store XML file
    QFile file("MyContacts.dat");
    // Check validity
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        // Create stream
        QTextStream stream(&file);
        // Write to stream
        stream << document.toString();
        // Flush and close file
        file.flush();
        file.close();
        qDebug() << "Write to file is success : \n"+document.toString();
    }
    else
    {
        // In case couldnt open file
        qDebug() << "Error creating file";
    }
    return a.exec();
}
