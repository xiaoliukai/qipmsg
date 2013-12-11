#ifndef MSG_H
#define MSG_H

#include "msgbase.h"



// Use counted handle class for the msg_base hierarchy
class Msg
{
public:
    // default constructor: unbound handle
    Msg() : p(0), use(new qint32(1)) {}
    // attach a handle to a copy of the MsgBase object
    Msg(const MsgBase&);
    // copy control members to manage the use count and pointers
    Msg(const Msg &m) : p(m.p), use(m.use)  {++*use;}

    ~Msg() { decr_use(); }

    Msg& operator= (const Msg&);
    // member access operators
    const MsgBase *operator->() const {
        if (p) {
            return p;
        } else {
            //throw std::logic_error("unbound Msg");
        }
    }
    MsgBase *operator->() {
        if (p) {
            return p;
        } else {
            //throw std::logic_error("unbound Msg");
        }
    }
    const MsgBase &operator*() const {
        if (p) {
            return *p;
        } else {
           // throw std::logic_error("unbound Msg");
        }
    }

private:
    MsgBase *p;         //pointer to shared item
    qint32 *use;        //pointer to shared use count

    // called by both destructor and assignment operator for free pointers
    void decr_use(){
        if (--*use == 0){
            delete p; delete use;
        }
    }
};

#endif // MSG_H
