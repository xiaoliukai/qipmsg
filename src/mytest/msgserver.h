#ifndef MSGSERVER_H
#define MSGSERVER_H

#include "msg.h"


#include <QObject>
#include <QUdpSocket>

class MsgServer
{
public:
    MsgServer();

    void start();

signals:

public slots:

private slots:

private:
    void handleMsg(Msg &msg);
    bool isSupportedCommand(QByteArray &datagram) const;
    void broadcastMsg(Msg &msg);
    void broadcastUserMsg(Msg &msg);

    void updateAddresses();

    QList<QHostAddress> m_broadcastAddresses;
    QList<QHostAddress> m_ipAddresses;
    QUdpSocket m_udpSocket;
};

#endif // MSGSERVER_H
