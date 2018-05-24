#include "readudp.h"
#include <QByteArray>
#include <cipamdatatypes.h>
ReadUdp::ReadUdp(QObject *parent) :
    QObject(parent)
{
    readerSocket = new QUdpSocket(this);
    readerSocket->bind(QHostAddress::Any,12345);
    connect(readerSocket, SIGNAL(readyRead()), this, SLOT(recieveMessage()));
}
void ReadUdp::recieveMessage(){
    while (readerSocket->hasPendingDatagrams()) {

        PHostMessage *messageInfo = new PHostMessage;
        QByteArray datagram;
        datagram.resize(readerSocket->pendingDatagramSize());
        readerSocket->readDatagram(datagram.data(),datagram.size());
        messageInfo=(PHostMessage*)datagram.constData();

        qDebug()<<messageInfo;
        }
    }

