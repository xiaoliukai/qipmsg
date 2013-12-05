#ifndef HELPER_H
#define HELPER_H

#include <QFile>

class Helper
{
public:
    Helper();

    static QString appHomePath();
    static void setIniPath(QString path);
    static void setAppPath(QString path);

    static void setInternalLogFileName(QString filePath);

private:

    static QString m_iniPath;
    static QString m_appPath;

    static QFile m_internalLogFile;
    static QString m_internalLogFileName;
};

#endif // HELPER_H
