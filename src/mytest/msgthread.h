#ifndef MSGTHREAD_H
#define MSGTHREAD_H

#include "msg.h"

#include <QThread>
#include <QMutex>
#include <QMap>

class MsgServer;

class MsgThread : public QThread
{
    Q_OBJECT
public:
    explicit MsgThread(QObject *parent = 0);
    
    virtual void run();

signals:
    
public slots:

private:
    QMutex m_lock;
    QMap<QString, Msg> m_sendMsgMap;

    MsgServer *m_msgServer;
};

#endif // MSGTHREAD_H
