#include "customclass.h"

CustomClass::CustomClass()
{

}

CustomClass::CustomClass(QString name,QString Class,int str,int Int,int vit,int agi,int dex,int crt)
{
    _name=name;
    _class=Class;
    _str=str;
    _int=Int;
    _vit=vit;
    _agi=agi;
    _dex=dex;
    _crt=crt;
}

void CustomClass::printPlayerProfile()
{
    qDebug() << "Player profile";
    qDebug() << "\tName\t" << _name;
    qDebug() << "\tClass\t" << _class;
    qDebug() << "\t\tStr:" << _str << "\tInt :" << _int;
    qDebug() << "\t\tVit :" << _vit << "\tAgi :" << _agi;
    qDebug() << "\t\tDex :" << _dex << "\tCrt :" << _crt;
}
