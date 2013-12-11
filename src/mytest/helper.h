#ifndef HELPER_H
#define HELPER_H

#include <QRegExp>
#include <QFile>

class Helper
{
public:
    Helper();

    static void setAppPath(QString path);
    static QString appPath();

    static QString appHomePath();

    static QString lockFile();

    static void setIniPath(QString path);
    static QString iniPath();

    static QString translationPath();
    static QString qtTranslationPath();

    static QString soundPath();
    static QString iconPath();

    static QString loginName();
    static QString hostname();

    static QString getEnvironmentVariable(QRegExp regExp);

    static void setPacketNo(qint64 n);
    static QString packetNoString();
    static qint64 packetNo();

    static void setInternalLogFileName(QString filePath);
    static void writeInternalLog(QString line);

    static QString openUrlProgram();

    static QString fileCountString(int fileCount);
    static QString sizeStringUnit(double size = 0.0, QString sep = "");

private:

    static QString m_iniPath;
    static QString m_appPath;
    static qint64 m_packetNo;

    static QFile m_internalLogFile;
    static QString m_internalLogFileName;
};

#endif // HELPER_H
