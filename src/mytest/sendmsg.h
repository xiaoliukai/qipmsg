#ifndef SENDMSG_H
#define SENDMSG_H

#include "msgbase.h"

class SendMsg : public MsgBase
{
public:
    SendMsg();
    SendMsg(QHostAddress address, quint16 port, QString additionalInfo,
            QString extendedInfo, qint32 flags)
        : MsgBase(address, port, additionalInfo, extendedInfo,
                  flags), m_state(NotSend), m_sendTimes(0) {}

    virtual ~SendMsg(){}

    virtual SendMsg* clone() const { return new SendMsg(*this); }

    void setState(States state) { m_state = state; }
    MsgBase::States state() const { return m_state; }

    int sendTimes() const { return m_sendTimes; }
    void incrementSendTimes() { ++m_sendTimes; }

private:
    States m_state;
    int m_sendTimes;
};
#endif // SENDMSG_H
