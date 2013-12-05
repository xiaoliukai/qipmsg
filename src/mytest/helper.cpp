#include <QDir>

#include "helper.h"


QString Helper::m_iniPath;
QString Helper::m_appPath;
QFile Helper::m_internalLogFile;
QString Helper::m_internalLogFileName;

Helper::Helper()
{
}

QString Helper::appHomePath()
{
    return QDir::homePath() + "/mipmsg";
}

void Helper::setIniPath(QString path)
{
    m_iniPath = path;
}

void Helper::setAppPath(QString path)
{
    m_appPath = path;
}

void Helper::setInternalLogFileName(QString filePath)
{
    m_internalLogFileName = filePath;
}
