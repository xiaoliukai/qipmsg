#include "lockfile.h"

LockFile::LockFile()
{
}

//LockFile *LockFile::instance()
//{
//    return lockFile();
//}

//bool LockFile::lock()
//{
//#defile LOCKMODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)
//    int fd = open(fileName.toUtf8().data(), O_RDWR|O_CREAT, LOCKMODE);
//    if (fd < 0) {
//        qWarning("LockFile::lock: can not open %s for writing.", fileName.toUtf8().data());
//        return false;
//    }

//    if(lockfile(fd) < 0) {
//        return false;
//    }


//}
