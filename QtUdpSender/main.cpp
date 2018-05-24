#include <QCoreApplication>
#include <sendudp.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SendUdp U;
    PHostMessage message;

    message->MessageData.WaveFormData.ECG_I<<1;

    U.sendData(message);
    return a.exec();
}
