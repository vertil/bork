#include <QCoreApplication>
#include <iostream>
#include "getter.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    getter getz;

    return a.exec();
}
