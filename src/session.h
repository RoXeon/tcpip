#ifndef TCPIPStack_session_details_h
#define TCPIPStack_session_details_h


#include "common.h"

#include <stdint.h>

typedef struct session
{
    uint8_t src_addr[ETH_ADDR_LEN];
    int sock_desc;

} session_t;

/**
 * Opens the session.
 * @returns pointer to the created session on success, 0 on error.
 */
session_t *session_open(const char *ifname);

/**
 * Closes the session.
 * @returns 0 on success, -1 on error.
 */
int session_close(session_t *session);


#endif
