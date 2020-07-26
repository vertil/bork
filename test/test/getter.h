#ifndef GETTER_H
#define GETTER_H


#include <QUdpSocket>





class getter : public QObject
{
   Q_OBJECT
public:
    explicit getter(QObject *parent=0);

signals:

public slots:
void get();
private:
    QUdpSocket *udp;
};

#endif // GETTER_H
