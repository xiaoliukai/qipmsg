#include "global.h"
#include "helper.h"
#include "sendfilemanager.h"
#include "preferences.h"
#include "usermanager.h"
#include "msgthread.h"
#include "transfercodec.h"
#include "systray.h"
#include "windowmanager.h"
#include "fileserver.h"
#include "constants.h"
//#include "send_file_manager.h"
#include "soundthread.h"

SendFileManager *Global::sendFileManager = 0;
QSettings *Global::settings = 0;
UserManager *Global::userManager = 0;
WindowManager *Global::windowManager = 0;
Preferences *Global::preferences = 0;
TransferCodec *Global::transferCodec = 0;
Systray *Global::systray = 0;
QMap<QString, QIcon *> Global::iconSet;
FileServer *Global::fileServer = 0;
MsgThread *Global::msgThread = 0;
SoundThread *Global::soundThread = 0;

static void createIconSet();

using namespace Global;

void Global::globalInit(QString path)
{
    //qDebug("Global::globalInit");

    createIconSet();

    Helper::setIniPath(path);

    sendFileManager = new SendFileManager;

    if (path.isEmpty()) {
        settings = new QSettings(QSettings::IniFormat, QSettings::UserScope,
                                 QString(COMPANY), QString(PROGRAM));
    } else {
        QString fileName = path + "/qipmsg.ini";
        settings = new QSettings(fileName, QSettings::IniFormat);
    }

    preferences = new Preferences;

    transferCodec = new TransferCodec;

    fileServer = new FileServer;

    msgThread = new MsgThread;
    soundThread = new SoundThread;

    userManager = new UserManager;
    windowManager = new WindowManager;

    systray = new Systray;


}

static void createIconSet(){
    iconSet.insert("normal", new QIcon(QString(":/icons/") + "qipmsg.xpm"));
    iconSet.insert("receive",
                   new QIcon(QString(":/icons/") + "qipmsg_recv.xpm"));
}


