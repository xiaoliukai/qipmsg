#include "sendfilemanager.h"

SendFileManager::~SendFileManager()
{
    // XXX NOTE: program is abort to quit. so we let the os to care about the
    // memory.
    // foreach (SendFileMap *m, transferFileMap) {
    //     delete m;
    //     m = 0;
    // }
}
