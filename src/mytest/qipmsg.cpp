#include "qipmsg.h"

#include <QtCore>

#include "global.h"
#include "helper.h"
#include "systray.h"

QIpMsg::QIpMsg()
{
    //qDebug() << "QIpMsg class init method.";
    Global::globalInit(Helper::iniPath());
    createConnections();
    Global::systray->show();
}
QIpMsg::~QIpMsg()
{
    // delete global variable and save settings.
   // Global::globalEnd();
}

void QIpMsg::createConnections()
{
//    connect(Global::sendFileManager, SIGNAL(transferCountChanged(int)),
//            Global::systray, SLOT(updateTransferCount(int)));
}
