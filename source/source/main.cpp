#include <QCoreApplication>
#include <iostream>
#include "sender.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    sender zzz;

    //for(;;){
        zzz.send('q');
        std::cout<<"sas"<<std::endl;
        for(int i=0;i<100000;i++){}
        //system("cls");


    //}


    return a.exec();
}
