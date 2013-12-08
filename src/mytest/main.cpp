#include <QtGui/QApplication>
#include <QtCore>
#include <QtGui>
#include <unistd.h>

#include "helper.h"
#include "mainwindow.h"
#include "global.h"
#include "qipmsg.h"
#include "msgthread.h"

static void createHomeDirectory();

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create application home
    createHomeDirectory();
    QString iniPath = Helper::appHomePath();
    Helper::setIniPath(iniPath);
    Helper::setAppPath(app.applicationDirPath());

    QString fileName   = Helper::appHomePath() + "/mipmsg_internal.log";
    Helper::setInternalLogFileName(fileName);

    //Set seed value
    qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
    // Set init package number as random
    Helper::setPacketNo(qrand()%1024);

    //language can be selected

    //Make qipmsg class,initialize global variable

    QIpMsg *qipmsg = new QIpMsg;

    //Check tcp server

    //Run a global method I don't know what it used for
    Global::msgThread->start();
    //Global::msgThread->start();

    //Broadcast on my network,I'm online!


    qDebug() << "myc:" << QTime(0,0,0).secsTo(QTime::currentTime());

    app.setQuitOnLastWindowClosed(false);
    
    return app.exec();
}


static void createHomeDirectory(){
    // Create mipmsg home directories
    if (!QFile::exists(Helper::appHomePath())){
        QDir d;
        if (!d.mkdir(Helper::appHomePath())) {
            qWarning("createHomeDirectory: can't create %s",
                     Helper::appHomePath().toUtf8().data());
        }
    }

}
