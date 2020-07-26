#include <QCoreApplication>
#include "fff.h"




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //task №0
    std::cout<<castling(256)<<std::endl;
    //task №1
    std::cout<<grade(64)<<std::endl;
    //task №2
    std::cout<<broadcastadress(3232235777,4294967040)<<std::endl;

    return a.exec();
}
