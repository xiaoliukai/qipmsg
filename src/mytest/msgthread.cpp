#include "msgthread.h"
#include "msgserver.h"

#include <QtCore>


MsgThread::MsgThread(QObject *parent) :
    QThread(parent)
{
}

void MsgThread::run()
{
    QTimer timer;
    timer.start(20);

    m_msgServer = new MsgServer;

}
