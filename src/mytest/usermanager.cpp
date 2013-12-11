#include "usermanager.h"

#include "owner.h"
#include "global.h"
#include "helper.h"
#include "sendmsg.h"
#include "preferences.h"
#include "constants.h"
#include "msgthread.h"

#include <QStringList>
#include <QStandardItemModel>

Owner UserManager::m_ourself;

UserManager::UserManager(QObject *parent)
    : QObject(parent)
{
    //updateOurself();
    //createModel();
}

void UserManager::updateOurself()
{
    if (Global::preferences->userName.isEmpty()) {
        m_ourself.setName(Helper::loginName());
    } else {
        m_ourself.setName(Global::preferences->userName);
    }

    m_ourself.setGroup(Global::preferences->groupName);
    m_ourself.setLoginName(Helper::loginName());
    m_ourself.setHost(Helper::hostname());
    m_ourself.setDisplayLevel(Global::preferences->displayLevel);
}

void UserManager::createModel()
{
    QStringList labels;
    labels << tr("user") << tr("group") << tr("host") << tr("ip")
        << tr("logname") << tr("display level");

    m_model = new QStandardItemModel(0, labels.size(), this);
    m_model->setHorizontalHeaderLabels(labels);
}

void UserManager::newUserMsg(Msg msg)
{
    if (!msg->owner().group().isEmpty()
            && !Global::preferences->groupNameList
            .contains(msg->owner().group())) {
        Global::preferences->groupNameList.prepend(msg->owner().group());
    }

    if (contains(msg->ip())) {
        updateUser(msg->owner(), ipToRow(msg->ip()));
    } else {
        int row = m_model->rowCount();
        m_model->insertRow(row);
        addUser(msg->owner(), row);

        emit userCountUpdated(m_model->rowCount());
    }
}

void UserManager::newExitMsg(Msg msg)
{
    int row;
    if ((row = ipToRow(msg->ip())) != -1){
        m_model->removeRow(row);

        emit userCountUpdated(m_model->rowCount());
    }
}

void UserManager::updateUser(const Owner &owner, int row)
{
    m_model->setData(m_model->index(row, USER_VIEW_NAME_COLUMN),
                       owner.name());
    m_model->setData(m_model->index(row, USER_VIEW_GROUP_COLUMN),
                       owner.group());
    m_model->setData(m_model->index(row, USER_VIEW_HOST_COLUMN),
                       owner.host());
    m_model->setData(m_model->index(row, USER_VIEW_IP_COLUMN),
                       owner.ip());
    m_model->setData(m_model->index(row, USER_VIEW_LOGIN_NAME_COLUMN),
                       owner.loginName());
    m_model->setData(m_model->index(row, USER_VIEW_DISPLAY_LEVEL_COLUMN),
                       owner.displayLevel());
}

void UserManager::addUser(const Owner &owner, int row)
{
    updateUser(owner, row);
}

QString UserManager::entryMessage() const
{
    return QString("%1%2%3%4").arg(m_ourself.name())
        .arg(QChar('\0'))
        .arg(m_ourself.group())
        .arg(QChar('\0'));
}

QString UserManager::exitMessage() const
{
    return entryMessage();
}

void UserManager::broadcastEXit() const
{
    qDebug("UserManager::broadcastExit");

    quint32 flags = 0;
    flags |=  IPMSG_BR_EXIT | QIPMSG_CAPACITY;

    SendMsg sendMsg(QHostAddress::Null, 0 /* prot */,
                    exitMessage(), "" /* extendedInfo */, flags);

   // Global::msgThread->
}

bool UserManager::contains(QString ip) const
{
    for (int row = 0; row < m_model->rowCount(); ++row) {
        if (this->ip(row) == ip) {
            return true;
        }
    }
    return false;
}

QString UserManager::ip(int row) const
{
    return m_model->data(m_model->index(row, USER_VIEW_IP_COLUMN))
        .toString();
}

int UserManager::ipToRow(QString ip) const
{
    for (int row = 0; row < m_model->rowCount(); ++row) {
        if (this->ip(row) == ip) {
            return row;
        }
    }

    return -1;
}
