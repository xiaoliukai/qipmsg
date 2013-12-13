#include "msgthread.h"
#include "constants.h"
#include "msgserver.h"
#include "global.h"
#include "sendmsg.h"
#include "recvmsg.h"
#include "windowmanager.h"
#include "usermanager.h"

#include <QtCore>
#include <QTimer>
#include <QMessageBox>


void MsgThread::run()
{
    QTimer timer;
    timer.start(20);

    m_msgServer = new MsgServer;

    m_msgServer->start();

    exec();

}

void MsgThread::handleError(QAbstractSocket::SocketError errorCode, QString s)
{
    qDebug() << "MsgThread::handleError";

    QString errorString(QObject::tr("udp server error"));

    QMessageBox::critical(0, QObject::tr("QIpMsg"),
                          errorString + ":\n" + s + ".");

    qDebug() << "MsgThread::handleError:" << s;

    if (errorCode == QAbstractSocket::AddressInUseError) {
        ::exit(-1);
    }
}
