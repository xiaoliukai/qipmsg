#ifndef HELPER_H
#define HELPER_H

#include <QFile>

class Helper
{
public:
    Helper();

    static void setAppPath(QString path);
    static QString appHomePath();

    static void setIniPath(QString path);
    static QString iniPath();

    static void setInternalLogFileName(QString filePath);
    static void setPacketNo(qint64 n);

private:

    static QString m_iniPath;
    static QString m_appPath;
    static qint64 m_packetNo;

    static QFile m_internalLogFile;
    static QString m_internalLogFileName;
};

#endif // HELPER_H
