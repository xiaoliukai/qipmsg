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
    friend class MsgServer;
    MsgThread(QObject *parent = 0) : QThread(parent) {}
    ~MsgThread();

    explicit MsgThread(QObject *parent = 0);
    
    virtual void run();

    void addSendMsg(Msg msg);
    void addSendMsgNotLock(Msg msg);
    void removeSendMsg(QString packetNo);
    void removeSendMsgNotLock(QString packetNo);

private slots:
    void handleError(QAbstractSocket::SocketAccessError errorCode, QString s);

signals:
    void newMsg(Msg msg);
    void newUserMsg(Msg msg);
    
public slots:

private:
    QMutex m_lock;
    QMap<QString, Msg> m_sendMsgMap;

    MsgServer *m_msgServer;
};

#endif // MSGTHREAD_H
