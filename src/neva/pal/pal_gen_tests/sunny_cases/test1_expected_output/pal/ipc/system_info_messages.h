// This file is generated by PAL generator, do not modify.
// To make changes, modify the source file:
// test1.json

// Multiply-included message file, no traditional include guard
#include <string>

#include "ipc/ipc_message_macros.h"
#include "pal/ipc/pal_export.h"

#undef IPC_MESSAGE_EXPORT
#define IPC_MESSAGE_EXPORT PAL_EXPORT
#define IPC_MESSAGE_START SystemInfoMsgStart

IPC_SYNC_MESSAGE_ROUTED0_1(SystemInfoHostMsg_GetSSLCertPath,
                           std::string /* pal_ret */)
