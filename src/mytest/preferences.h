#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <QString>
#include <QSettings>
#include <QStringList>
#include <QMutex>
#include <QFile>


class Preferences
{
public:
    Preferences();
    ~Preferences();

    void reset();
    void load();
    void save();
    void openLogFile();

    QString displayLevel;

    QString userName;
    QString groupName;
    QString groupNameHistory;
    QStringList groupNameList;
    bool isSealed;
    bool isReadCheck;
    bool isNoSoundAlarm;
    bool isNoAutoPopupMsg;
    bool isQuoteMsg;
    bool noAutoCloseMsgWindowWhenReply;

    bool isSingleClickSendWindow;

    QString quoteMark;
    QString noticeSound;

    bool isLogMsg;
    bool noLogLockMsgBeforeOpen;
    bool isLogLoginName;
    bool isLogIP;
    QString logFilePath;
    QFile logFile;

    QString lastSaveFilePath;
    QString lastSendFilePath;
    QString lastSendDirPath;

    QStringList userSearchList;
    QString userSearchHistory;
    bool isSearchAllColumns;

    QString transferCodecName;

    QStringList userSpecifiedBroadcastIpList;
    QString userSpecifiedBroadcastIp;


};

#endif // PREFERENCES_H
