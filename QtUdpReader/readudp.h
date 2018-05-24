#ifndef READUDP_H
#define READUDP_H

#include <QObject>
#include "QUdpSocket"
#include "cipamdatatypes.h"

class ReadUdp : public QObject
{
    Q_OBJECT
public:
    explicit ReadUdp(QObject *parent = 0);

signals:

public slots:
    void recieveMessage();
private:
    QUdpSocket *readerSocket;

};

#endif // READUDP_H
