#include <QDir>

#include "helper.h"


QString Helper::m_iniPath;
QString Helper::m_appPath;
QFile Helper::m_internalLogFile;
QString Helper::m_internalLogFileName;
qint64 Helper::m_packetNo;

Helper::Helper()
{
}

void Helper::setAppPath(QString path)
{
    m_appPath = path;
}

QString Helper::appHomePath()
{
    return QDir::homePath() + "/mipmsg";
}

void Helper::setIniPath(QString path)
{
    m_iniPath = path;
}

QString Helper::iniPath()
{
    if(!m_iniPath.isEmpty()){
        return m_iniPath;
    } else {
        if (QFile::exists(appHomePath())){
            return appHomePath();
        }
    }
}

void Helper::setInternalLogFileName(QString filePath)
{
    m_internalLogFileName = filePath;
}

void Helper::setPacketNo(qint64 n)
{
    m_packetNo = n;
}
