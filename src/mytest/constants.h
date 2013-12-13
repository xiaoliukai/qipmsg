#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "ipmsg.h"

#define COMPANY                 ""
#define PROGRAM                 "qipmsg"

#define MSG_VERSION_POS             0
#define MSG_PACKET_NO_POS           1
#define MSG_LOG_NAME_POS            2
#define MSG_HOST_POS                3
#define MSG_FLAGS_POS               4
#define MSG_ADDITION_INFO_POS       5
#define MSG_EXTENDED_INFO_POS       6

#define MSG_NORMAL_FIELD_COUNT      6

#define COMMAND_SEPERATOR       ':'
#define EXTEND_INFO_SEPERATOR   '\0'


#define USER_VIEW_NAME_COLUMN              0
#define USER_VIEW_GROUP_COLUMN             1
#define USER_VIEW_HOST_COLUMN              2
#define USER_VIEW_IP_COLUMN                3
#define USER_VIEW_LOGIN_NAME_COLUMN        4
#define USER_VIEW_DISPLAY_LEVEL_COLUMN     5

// Support file attachment and encrypt
// #define QIPMSG_CAPACITY         IPMSG_FILEATTACHOPT | IPMSG_ENCRYPTOPT
#define QIPMSG_CAPACITY         IPMSG_FILEATTACHOPT

// Response file packet
#define TRANSFER_FILE_HEADER_SIZE_LENGTH      4
#define TRANSFER_FILE_FILE_SIZE_LENGTH        8

#define ONE_KB     (1024.0)
#define ONE_MB     (1024*1024.0)

#endif // CONSTANTS_H
