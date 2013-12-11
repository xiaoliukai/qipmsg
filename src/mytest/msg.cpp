#include "msg.h"

Msg::Msg(const MsgBase &m)
    :p(m.clone()), use(new qint32(1))
{
}

Msg& Msg::operator =(const Msg &rhs)
{
    ++*rhs.use;
    decr_use();

    p = rhs.p;
    use = rhs.use;

    return *this;
}
