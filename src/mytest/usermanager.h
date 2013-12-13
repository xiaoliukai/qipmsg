#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "owner.h"
#include "msg.h"

#include <QObject>

class QStandardItemModel;

class UserManager : public QObject
{
    Q_OBJECT

public:

    UserManager(QObject *parent = 0 );

    void broadcastExit() const;
    void broadcastEntry() const;

    bool contains(QString ip) const;

    QString ip(int row) const;
    int ipToRow(QString ip) const;

    QString name(int row) const;
    QString group(int row) const;
    QString host(int row) const;
    QString loginName(int row) const;

    Owner ourself() const { return m_ourself; }
    void updateOurself();

    QString entryMessage() const;
    QString exitMessage() const;

signals:
    void userCountUpdated(int userCount);

private slots:
    void newUserMsg(Msg msg);
    void newExitMsg(Msg msg);

private:
    void createModel();
    void updateUser(const Owner &owner, int row);
    void addUser(const Owner &owner, int row);

    static Owner m_ourself;

    QStandardItemModel *m_model;

};

#endif // USERMANAGER_H
