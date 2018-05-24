#include <QCoreApplication>
#include "readudp.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ReadUdp U;
    U.recieveMessage();
    return a.exec();
}
