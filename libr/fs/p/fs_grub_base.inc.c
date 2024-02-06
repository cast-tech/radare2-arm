/* radare - LGPL - Copyright 2011-2023 - pancake */

#include <r_fs.h>
#include "grubfs.h"

RFSPlugin FSS(r_fs_plugin) = {
	.meta = {
		.name = FSNAME,
		.desc = FSDESC,
	}
};
