#include "msgserver.h"
#include "global.h"
#include "preferences.h"
#include "constants.h"

#include <QNetworkInterface>
#include <QDebug>

MsgServer::MsgServer()
{
    updateAddresses();
}

void MsgServer::updateAddresses()
{
    m_broadcastAddresses.clear();
    m_ipAddresses.clear();

    foreach(QNetworkInterface interface, QNetworkInterface::allInterfaces()){
        foreach(QNetworkAddressEntry entry, interface.addressEntries()){
            QHostAddress broadcastAddres = entry.broadcast();
            if (broadcastAddres != QHostAddress::Null &&
                    entry.ip() != QHostAddress::LocalHost) {
                //qDebug() <<"hehe:" << entry.broadcast()<< ":" << entry.ip();
                m_broadcastAddresses << broadcastAddres;
                m_ipAddresses << entry.ip();
            }
        }
    }

    // Add broadcat address specified by user
    foreach(QString s, Global::preferences->userSpecifiedBroadcastIpList){
        QHostAddress h(s);
        if (h != QHostAddress::Null &&
            h != QHostAddress::LocalHost &&
            h != QHostAddress::LocalHostIPv6) {
            m_broadcastAddresses << h;
        }
    }

    // NOTE: Just to remove duplicate entries.
    QSet<QHostAddress> set = m_broadcastAddresses.toSet();
    m_broadcastAddresses.clear();
    m_broadcastAddresses = set.toList();

}

void MsgServer::start()
{
    m_udpSocket.bind(QHostAddress::Any, IPMSG_DEFAULT_PORT);
}
