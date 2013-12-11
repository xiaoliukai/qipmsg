#include "owner.h"
#include "constants.h"
#include <QStringList>

Owner::Owner(QString packet, QHostAddress address, quint16 port)
    : m_ipAddress(address), m_port(port)
{
    initOwner(packet);
}


void Owner::initOwner(QString &packet)
{
    QStringList list = packet.split(COMMAND_SEPERATOR);

    if (list.size() < MSG_NORMAL_FIELD_COUNT){
        return;
    }

    m_loginName = list.at(MSG_LOG_NAME_POS);

    quint32 flag = list.at(MSG_FLAGS_POS).toUInt();
    if (flag & IPMSG_BR_ENTRY || flag & IPMSG_BR_ABSENCE){
        m_group = packet.section(QChar(EXTEND_INFO_SEPERATOR), 1, 1);
        m_name = parseAdditionalInfo(packet);
        if(m_name.isEmpty()){
            m_name = m_loginName;
        }
    }

    // No sender name in this situation, so we set sender name to
    // sender's login name
    if (flag & IPMSG_SENDMSG){
        m_name = m_loginName;
    }

    m_host = list.at(MSG_HOST_POS);
}

QString Owner::parseAdditionalInfo(QString &packet)
{
    int cnt = 0;
    int index = 0;
    while (cnt < MSG_ADDITION_INFO_POS) {
        int id = packet.indexOf(QChar(COMMAND_SEPERATOR), index);
        if (index == -1){
            break;
        }
        ++cnt;
        index = id + 1;
    }

    QString s = packet.right(packet.size() - index);

    return s.section(QChar(EXTEND_INFO_SEPERATOR), 0, 0);
}
