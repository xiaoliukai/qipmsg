#ifndef MSGBASE_H
#define MSGBASE_H

#include <QHostAddress>

#include "owner.h"

class MsgBase
{
public:
    enum States{
        NotSend = 0, Sending = 1, SendOK = 2, SendFail = 3, SendAckOk = 4
    };
    MsgBase(){}

    // Create receive message from receive packet
    MsgBase(QString packet, QHostAddress address, quint16 port);

    // Create send message
    MsgBase(QHostAddress address, quint16 prot, QString additionalInfo,
         QString extendedInfo, quint32 flags);

    virtual ~MsgBase();

    virtual MsgBase* clone() const{ new MsgBase(*this); }

    virtual QString packet() const { return m_packet; }

    virtual QString packetNoString() const { return m_packetNoString;}

    virtual quint32 flags() const { return m_flags; }

    virtual quint16 port() const { return m_port; }

    virtual const Owner& owner() const { return m_owner; }

    virtual QString ip() const { return m_ipAddress.toString(); }
    virtual QHostAddress ipAddress() const { return m_ipAddress; }

    virtual QString adduitionalInfo() const { return m_additionalInfo;}
    virtual QString extendedInfo() const { return m_extendInfo; }

    // We set all these methods to empty
    // XXX NOTE: only send msg use these functions
    virtual void setState(States state) {}
    virtual MsgBase::States state() const {}
    virtual int sendTimes() const {}
    virtual void incrementSendTimes() {}

private:
    void parsePacket();
    void parseAdditionalInfo();
    void constructPacket();

    Owner m_owner;
    QString m_packet;
    QString m_extendInfo;
    QString m_additionalInfo;
    QString m_packetNoString;
    quint32 m_flags;
    QHostAddress m_ipAddress;
    quint16 m_port;
};

#endif // MSGBASE_H
