
#ifndef WIN_SYSCALL_H
#define WIN_SYSCALL_H

#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>

#define u64 uint

namespace WIN32
{
    enum WINDOWS_KERNEL_SYSCALL : u64
    {
        // TODO
        WKS_ACCESS_CHECK                        = 0,
        WKS_WORKER_FACTORY_WORKER_READY         = 1,
        WKS_ACCEPT_CONNECT_PORT                 = 2,
        WKS_MAP_USER_PHYSICAL_PAGES_SCATTER     = 3,
        WKS_WAIT_FOR_SINGLE_OBJECT              = 4,
        WKS_CALL_BACK_RETURN                    = 5,
        WKS_READ_FILE                           = 6,
        WKS_DEVICE_IO_CONTROL_FILE              = 7,
        WKS_WRITE_FILE                          = 8,
        WKS_REMOVE_IO_COMPLETION                = 9,
        WKS_RELEASE_SEMAPHORE                   = 10,
        WKS_REPLY_WAIT_RECEIVE_PORT             = 11,
        WKS_REPLY_PORT                          = 12,
        WKS_SET_INFORMATION_THREAD              = 13,
        WKS_SET_EVENT                           = 14,
        WKS_CLOSE                               = 15,
        WKS_QUERY_OBJECT                        = 16,
        WKS_QUERY_INFORMATION_FILE              = 17,
        WKS_OPEN_KEY                            = 18,
        WKS_ENUMERATE_VALUE_KEY                 = 19,
    };
}

#endif // WIN_SYSCALL_H
