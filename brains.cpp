#include "brains.h"
#include <QVariant>

Brains::Brains(QObject *parent) : QObject(parent)
{

}

void Brains::Addition(const QString &msg)
{
    QObject* textinput1=this->parent()->findChild<QObject*>("textinput1");
    QObject* textinput2=this->parent()->findChild<QObject*>("textinput2");

    QObject* memo=this->parent()->findChild<QObject*>("memo");

    QString str1=(textinput1->property("text")).toString();
    QString str2=(textinput2->property("text")).toString();

    int a=str1.toInt();
    int b=str2.toInt();

    int c=a+b;

    QString strResult=QString::number(c);

    memo->setProperty("text",str1+" + "+str2+" = "+strResult+" "+msg);
}
