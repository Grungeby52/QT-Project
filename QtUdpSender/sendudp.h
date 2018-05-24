#ifndef SENDUDP_H
#define SENDUDP_H

#include <QObject>
#include <QUdpSocket>
#include <cipamdatatypes.h>
class SendUdp : public QObject
{
    Q_OBJECT
public:
    explicit SendUdp(QObject *parent = 0);
    void sendData(const PHostMessage &message);
signals:

public slots:

private:
    QUdpSocket *senderSocket;
};

#endif // SENDUDP_H
