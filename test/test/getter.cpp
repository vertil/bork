#include "getter.h"



getter::getter(QObject *parent):QObject(parent)
{
    udp=new QUdpSocket;
    udp->bind(QHostAddress::LocalHost, 1234);

    connect(udp, &QUdpSocket::readyRead,
                this, &getter::get);
}

void getter::get()
{
    QByteArray buff;
    buff.resize(udp->pendingDatagramSize());

    QHostAddress sender;
    quint16 senderPort;

    udp->readDatagram(buff.data(),buff.size(),&sender,&senderPort);
    qDebug() << "Message from: " << sender.toString();
    qDebug() << "Message port: " << senderPort;
    qDebug() << "Message: " << buff;
    //std::cout<<buff.toStdString()<<" from:"<<sender.toString().toStdString()<<" port:"<<senderPort<<std::endl;
}

