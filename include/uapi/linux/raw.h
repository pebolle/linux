#ifndef __LINUX_RAW_H
#define __LINUX_RAW_H

#include <linux/types.h>

#define RAW_SETBIND	_IO( 0xac, 0 )
#define RAW_GETBIND	_IO( 0xac, 1 )

struct raw_config_request 
{
	int	raw_minor;
	__u64	block_major;
	__u64	block_minor;
};

/*
 * Exported apparently by mistake. Keep it here to not break compilation of
 * programs that make another mistake by using MAX_RAW_MINORS in their code.
 */
#define MAX_RAW_MINORS 0

#endif /* __LINUX_RAW_H */
