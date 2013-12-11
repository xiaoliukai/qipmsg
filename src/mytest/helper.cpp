#include <QDir>
#include <QFile>
#include <QDir>
#include <QProcess>
#include <QTextStream>

#include "helper.h"
#include "constants.h"

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

QString Helper::loginName()
{
    return getEnvironmentVariable(QRegExp("LOGNAME.*"));
}

QString Helper::hostname()
{
    QString name = getEnvironmentVariable(QRegExp("HOSTNAME.*"));

    // if no HOSTNAME environment variable is set, read it from /etc/hostname,
    // for distribution like ubuntu.
    if (name.isEmpty()) {
        QFile file("/etc/hostname");
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            name.append(file.readLine());
            name.remove(QChar('\n'));
        }
    }

    if (name.isEmpty()) {
        name = QObject::tr("Unkown hostname");
    }

    return name;
}

QString Helper::getEnvironmentVariable(QRegExp regExp)
{
    QStringList environment = QProcess::systemEnvironment();

    int index = environment.indexOf(regExp);
    if (index != -1) {
        QStringList sl = environment.at(index).split("=");
        if (sl.size() == 2) {
            return sl.at(1).toUtf8();
        }
    }

    return QString("");
}
