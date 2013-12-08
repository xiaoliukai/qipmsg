#ifndef MSGTHREAD_H
#define MSGTHREAD_H

#include <QThread>

class MsgThread : public QThread
{
    Q_OBJECT
public:
    explicit MsgThread(QObject *parent = 0);
    
    virtual void run();

signals:
    
public slots:
    
};

#endif // MSGTHREAD_H
