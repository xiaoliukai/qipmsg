#include "preferences.h"
#include "constants.h"
#include "global.h"
#include "helper.h"

#include <QDir>


Preferences::Preferences()
{
    reset();
}

void Preferences::reset()
{
    userName = "";
    groupName = "";
    isSealed = false;
    isNoAutoPopupMsg = false;
    isQuoteMsg = true;
    isReadCheck = true;
    isNoSoundAlarm = false;
    groupNameHistory = "";
    groupNameList.clear();

    userSearchHistory = "";
    userSearchList.clear();
    userSpecifiedBroadcastIpList.clear();

    displayLevel = "";

    // Detail settings
    isSingleClickSendWindow = false;
    noAutoCloseMsgWindowWhenReply = false;
    // End detail settings

    // Other settings
    //noticeSound = Helper::soundPath() + "/info.wav";
    quoteMark = ">";

    // Log settings
    isLogMsg = true;
    noLogLockMsgBeforeOpen = true;
    isLogLoginName = false;
    isLogIP = false;
    logFilePath = "";
    openLogFile();
    // End log settings

    // Internel use
    lastSaveFilePath = QDir::homePath();
    lastSendFilePath = QDir::homePath();
    lastSendDirPath = QDir::homePath();
    // End internel use

    transferCodecName = "GB2312";

}

void Preferences::load()
{
    qDebug("Preferences::load");

    QSettings *set = Global::settings;

    set->beginGroup("NickName");
    userName = set->value("userName", userName).toString();
    set->endGroup();

    set->beginGroup("GroupName");
    groupName = set->value("groupName", groupName).toString();
    groupNameHistory = set->value("groupNameHistory", groupNameHistory).toString();
    groupNameList = groupNameHistory.split(QChar('\r'));
    set->endGroup();

    set->beginGroup("SendReceive");
    isSealed = set->value("isSealed", isSealed).toBool();
    isReadCheck = set->value("isReadCheak", isReadCheck).toBool();
    isNoSoundAlarm = set->value("isNoSoundAlarm", isNoSoundAlarm).toBool();
    isNoAutoPopupMsg = set->value("isNoAutoPopupMsg",
            isNoAutoPopupMsg).toBool();
    isQuoteMsg = set->value("isQuoteMsg", isQuoteMsg).toBool();
    set->endGroup();

    set->beginGroup("Other");
    quoteMark = set->value("quoteMark", quoteMark).toString();
    noticeSound = set->value("noticeSound", noticeSound).toString();
    set->endGroup();

    set->beginGroup("Detail");
    isSingleClickSendWindow = set->value("isSingleClickSendWindow", isSingleClickSendWindow).toBool();
    noAutoCloseMsgWindowWhenReply = set->value("noAutoCloseMsgWindowWhenReply", noAutoCloseMsgWindowWhenReply).toBool();
    set->endGroup();

    set->beginGroup("Log");
    isLogMsg = set->value("isLogMsg", isLogMsg).toBool();
    noLogLockMsgBeforeOpen
        = set->value("noLogLockMsgBeforeOpen",
                noLogLockMsgBeforeOpen).toBool();
    isLogLoginName = set->value("isLogLoginName",
            isLogLoginName).toBool();
    isLogIP = set->value("isLogIP",
            isLogIP).toBool();
    logFilePath = set->value("logFilePath", logFilePath).toString();
    openLogFile();
    set->endGroup();

    set->beginGroup("InternalUse");
    lastSaveFilePath = set->value("lastSaveFilePath", lastSaveFilePath).toString();
    lastSendFilePath = set->value("lastSendFilePath", lastSendFilePath).toString();
    lastSendDirPath = set->value("lastSendDirPath", lastSendDirPath).toString();
    set->endGroup();

    set->beginGroup("UserSearch");
    userSearchHistory = set->value("userSearchHistory", userSearchHistory)
        .toString();
    userSearchList = userSearchHistory.split(QChar('\r'));
    set->endGroup();

    set->beginGroup("BroadcastIp");
    userSpecifiedBroadcastIp =
        set->value("userSpecifiedBroadcastIp",
                   userSpecifiedBroadcastIp).toString();
    userSpecifiedBroadcastIpList =
        userSpecifiedBroadcastIp.split(QChar('\r'), QString::SkipEmptyParts);
    set->endGroup();

    set->beginGroup("Transfer");
    transferCodecName
        = set->value("transferCodecName", transferCodecName).toString();
    set->endGroup();


}
void Preferences::openLogFile()
{
    if (logFile.isOpen()){
        logFile.close();
    }

    logFile.setFileName(logFilePath);

    logFile.open(QIODevice::Append);
}
