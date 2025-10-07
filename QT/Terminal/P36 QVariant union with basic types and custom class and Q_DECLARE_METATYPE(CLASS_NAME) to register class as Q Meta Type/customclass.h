#ifndef CUSTOMCLASS_H
#define CUSTOMCLASS_H


#include <QtCore>
#include <QString>
#include <QDebug>

// This is custom class, Can be anything
class CustomClass
{
private:
    QString _name,_class;
    int _str,_crt,_dex,_vit,_int,_agi;
public:
    CustomClass();
    CustomClass(QString name,QString Class,int str,int Int,int vit,int agi,int dex,int crt);
    void printPlayerProfile();
};

// After declaring class, this is must to use it in QVariant
Q_DECLARE_METATYPE(CustomClass);

#endif // CUSTOMCLASS_H
