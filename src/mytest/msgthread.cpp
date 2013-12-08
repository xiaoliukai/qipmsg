#include "msgthread.h"

#include <QtCore>

MsgThread::MsgThread(QObject *parent) :
    QThread(parent)
{
}

void MsgThread::run()
{
    qDebug("MsgThread::run()");
}
