#ifndef QIPMSG_H
#define QIPMSG_H

class QIpMsg
{
public:
    QIpMsg();
    ~QIpMsg();

    bool start();
    void stop();

private:
    void createConnections();
};

#endif // QIPMSG_H
