#include "qipmsg.h"

#include <QtCore>

#include "global.h"
#include "helper.h"

QIpMsg::QIpMsg()
{
    //qDebug() << "QIpMsg class init method.";
    Global::globalInit(Helper::iniPath());
}
