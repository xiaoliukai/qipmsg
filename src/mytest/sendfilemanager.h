#ifndef SENDFILEMANAGER_H
#define SENDFILEMANAGER_H

#include <QObject>

class SendFileManager : public QObject
{
     Q_OBJECT

public:
    SendFileManager() {}
    ~SendFileManager();
signals:
};

#endif // SENDFILEMANAGER_H
