#include "sender.h"

sender::sender()
{
    udpSocket=new QUdpSocket();
    udpSocket->bind(QHostAddress::LocalHost, 1234);

}

void sender::send(double s)
{
    QByteArray Data;
    Data.append(s);
    udpSocket->writeDatagram(Data,QHostAddress::LocalHost, 1234);
}
