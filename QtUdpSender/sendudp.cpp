#include "sendudp.h"
#include <QByteArray>
#include "cipamdatatypes.h"
SendUdp::SendUdp(QObject *parent) :
    QObject(parent)
{
    senderSocket = new QUdpSocket(this);
    //senderSocket->bind(QHostAddress::LocalHost,1234);

}
void SendUdp::sendData(const PHostMessage &message){
    char *p=(char*)message;
    QByteArray packet(p, sizeof(message));
    qDebug()<<"Sending...";
    while (true) {
        for (int i = 0; i < 100000000; ++i) {
        }
        senderSocket->writeDatagram(packet,QHostAddress::LocalHost,12345);
    }

}
