#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QHttp>
#include <QFile>
#include <QDebug>
#include <QString>
#include <QHttpResponseHeader>

class downloader:QObject
{
    Q_OBJECT
public:
    downloader();
    QHttp *http;
    void download(QString url,QString file);
public slots:
    void statusChanged(int);
    void responseHeaderReceieved(QHttpResponseHeader);
    void requestFinished(int id, bool error);
};

#endif // DOWNLOADER_H
