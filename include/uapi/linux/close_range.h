/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _UAPI_LINUX_CLOSE_RANGE_H
#define _UAPI_LINUX_CLOSE_RANGE_H

/* Unshare the file descriptor table before operating on the range. */
#define CLOSE_RANGE_UNSHARE     (1U << 1)

/* Set FD_CLOEXEC instead of closing the file descriptors. */
#define CLOSE_RANGE_CLOEXEC     (1U << 2)

#endif /* _UAPI_LINUX_CLOSE_RANGE_H */