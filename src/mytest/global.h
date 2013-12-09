#ifndef GLOBAL_H
#define GLOBAL_H

#include <QString>

class QSettings;

class SendFileManager;
class UserManager;
class MsgThread;
class SoundThread;
class Preferences;
class TransferCodec;
class Systray;
class WindowManager;
class QIcon;
class FileServer;

namespace Global
{
    extern QSettings *settings;
    extern SendFileManager *sendFileManager;
    extern UserManager *userManager;
    extern MsgThread *msgThread;
    extern SoundThread *soundThread;
    extern WindowManager *windowManager;
    extern Preferences *preferences;
    extern TransferCodec *transferCodec;
    extern Systray *systray;
    //extern QMap<QString, QIcon *> iconSet;
    extern FileServer *fileServer;

    void globalInit(QString path);
    void globalEnd();
}

#endif // GLOBAL_H
