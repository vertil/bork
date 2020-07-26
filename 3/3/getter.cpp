#include "getter.h"

getter::getter()
{
    udpSocket=new QUdpSocket();
    udpSocket->bind(QHostAddress::LocalHost, 7755);
}

char getter::get()
{
    QHostAddress sas;
    quint16 senderPort;
    char s;
    udpSocket->readDatagram(&s,1,&sas,&senderPort);
    return s;
}
