#include "downloader.h"

downloader::downloader()
{
    // Very simple to do network programming
    //Make object
    http=new QHttp(this);
    // Assign signal to slot
    // What to do on finish
    connect(http,SIGNAL(requestFinished(int,bool)),this,SLOT(requestFinished(int,bool)));
    // What to do when get response header or we can say first pkt in TCP/IP communication
    connect(http,SIGNAL(responseHeaderReceived(QHttpResponseHeader)),this,SLOT(responseHeaderReceieved(QHttpResponseHeader)));
    // What to do on status of connection is changed
    connect(http,SIGNAL(stateChanged(int)),this,SLOT(statusChanged(int)));
}


void downloader::download(QString host,QString file)
{
    // This is t set host of system  from where we need to download
    http->setHost(host);
    // What to download
    http->get(file);
}

// Tracks status of connection
void downloader::statusChanged(int s)
{
    switch(s)
    {
    case 0:
        qDebug() << "Unconnected";
        break;
    case 1:
        qDebug() << "HostLookup";
        break;
    case 2:
        qDebug() << "Connecting";
        break;
    case 3:
        qDebug() << "Sending";
        break;
    case 4:
        qDebug() << "Reading";
        break;
    case 5:
        qDebug() << "Connected";
        break;
    case 6:
        qDebug() << "Closing";
        break;
    }
}

// On connected and got first pkt
void downloader::responseHeaderReceieved(QHttpResponseHeader r)
{
    qDebug() << "Size :" << r.contentLength();
    qDebug() << "Type :" << r.contentType();
    qDebug() << "Code :" << r.statusCode();
}

// One request is done
void downloader::requestFinished(int id, bool error)
{
    if(error)
    {
        // If error
        qDebug() << "Error : " << id;
    }
    else
    {
        // On success
        qDebug() << "OK : " << id;
        // Store data to file
        QFile *file=new QFile("./download/lastOutput id "+QString::number(id)+".txt");
        if(file->open(QFile::Append))
        {
            file->write(http->readAll());
            file->flush();
            file->close();
            qDebug() << "Stored file in ./download/lastOutput id "+QString::number(id)+".txt";
        }
        else
        {
            // If any error in creating file, (Directory must be created manually)
            qDebug() << "Error in file opening";
        }
        delete file;
    }
}
