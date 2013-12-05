#include <QtGui/QApplication>
#include <QtCore>
#include <QtGui>

#include "helper.h"
#include "mainwindow.h"

static void createHomeDirectory();

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create application home
    createHomeDirectory();
    QString iniPath = Helper::appHomePath();
    Helper::setIniPath(iniPath);
    Helper::setAppPath(app.applicationDirPath());

    QString fileName = Helper::appHomePath() + "/mipmsg_internal.log";
    Helper::setInternalLogFileName(fileName);


    MainWindow w;
    w.show();
    
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
