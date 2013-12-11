#ifndef RECVMSG_H
#define RECVMSG_H

#include "msgbase.h"

class RecvMsg : public MsgBase
{
public:
    RecvMsg() {}
    RecvMsg(QString packet, QHostAddress address, quint16 port)
        : MsgBase(packet, address, port) {}

    virtual ~RecvMsg() {}

    virtual RecvMsg* clone() const { return new RecvMsg(*this);}
};

#endif // RECVMSG_H
