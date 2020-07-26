#ifndef SENDER_H
#define SENDER_H

#include <QTcpServer>
#include <QUdpSocket>


class sender
{
    QUdpSocket *udpSocket;
public:
    sender();
    void send(double s);
};

#endif // SENDER_H
