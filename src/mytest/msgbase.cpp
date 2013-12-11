#include "msgbase.h"
#include "helper.h"
#include "global.h"
#include "constants.h"

MsgBase::MsgBase(QString packet, QHostAddress address, quint16 port)
    : m_owner(packet, address, port), m_packet(packet),
    m_ipAddress(address), m_port(port)
{
    parsePacket();
}

MsgBase::MsgBase(QHostAddress address, quint16 port, QString additionalInfo,
                 QString extendedInfo, quint32 flags)
    : m_ipAddress(address), m_port(port), m_additionalInfo(additionalInfo),
    m_extendInfo(extendedInfo), m_flags(flags)
{
    m_packetNoString = Helper::packetNoString();
    m_owner = Global::userManager->ourself();

    constructPacket();
}

MsgBase::~MsgBase()
{
}

void MsgBase::constructPacket()
{
    m_packet.append(QString("%1%2").arg(IPMSG_VERSION).arg(COMMAND_SEPERATOR));

    m_packet.append(QString("%1%2").arg(m_packetNoString)
                    .arg(COMMAND_SEPERATOR));

    m_packet.append(m_owner.loginName());
    m_packet.append(COMMAND_SEPERATOR);
    m_packet.append(m_owner.host());
    m_packet.append(COMMAND_SEPERATOR);
    m_packet.append(QString("%1%2").arg(m_flags).arg(COMMAND_SEPERATOR));
    m_packet.append(m_additionalInfo);
}

void MsgBase::parsePacket()
{
    QStringList list = m_packet.split(COMMAND_SEPERATOR);

    // sanity check
    if (list.count() < MSG_NORMAL_FIELD_COUNT) {
        return;
    }

    m_extendedInfo = m_packet.section(QChar(EXTEND_INFO_SEPERATOR), 1, 1);
    parseAdditionalInfo();

    m_packetNoString = list.at(MSG_PACKET_NO_POS);
    m_flags = list.at(MSG_FLAGS_POS).toUInt();
}
