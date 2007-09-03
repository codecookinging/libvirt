/*
 * openvz_driver.h: core driver methods for managing OpenVZ VPSs
 *
 * Copyright (C) 2006, 2007 Binary Karma
 * Copyright (C) 2006 Shuveb Hussain
 * Copyright (C) 2007 Anoop Joe Cyriac
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
 *
 * Authors: 
 * Shuveb Hussain <shuveb@binarykarma.com>
 * Anoop Joe Cyriac <anoop@binarykarma.com>
 *
 */


#ifndef OPENVZ_DRIVER_H
#define OPENVZ_DRIVER_H

#include "internal.h"

/* OpenVZ commands - Replace with wrapper scripts later? */
#define VZLIST  "vzlist"
#define VZCTL   "vzctl"

struct openvz_driver {
    struct openvz_vm *vms;
    int num_active;
    int num_inactive;
};

int openvzRegister(void);

#define openvzLog(level, msg...) { if(level == OPENVZ_WARN) \
					fprintf(stderr, "\nWARNING: ");\
				else \
					fprintf(stderr, "\nERROR: ");\
				fprintf(stderr, "\n\t");\
				fprintf(stderr, msg);\
				fprintf(stderr, "\n"); }

#endif


/*
 * Local variables:
 *  indent-tabs-mode: nil
 *  c-indent-level: 4
 *  c-basic-offset: 4
 *  tab-width: 4
 * End:
 */
