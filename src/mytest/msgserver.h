#ifndef MSGSERVER_H
#define MSGSERVER_H

#include "msg.h"
#include "recvmsg.h"
#include "sendmsg.h"

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
    void readPacket();

private:
    void handleMsg(Msg &msg);
    bool isSupportedCommand(QByteArray &datagram) const;
    void broadcastMsg(Msg &msg);
    void broadcastUserMsg(Msg &msg);
    bool isResendNeeded(Msg &msg) const;
    void updateAddresses();

    void processRecvMsg(Msg msg);
    void processRecvReleaseFilesMsg(Msg msg);
    void processRecvReadMsg(Msg msg);
    void processSendMsg(Msg msg);
    void processEntryMsg(Msg msg);

    QList<QHostAddress> m_broadcastAddresses;
    QList<QHostAddress> m_ipAddresses;
    QUdpSocket m_udpSocket;
};

#endif // MSGSERVER_H
