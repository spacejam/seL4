/*
 * Copyright 2016, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

#ifndef __MODE_SMP_H_
#define __MODE_SMP_H_

#include <config.h>

#if CONFIG_MAX_NUM_NODES > 1

static inline CONST cpu_id_t
getCurrentCPUIndex(void)
{
    /* TODO: currently only supports one core */
#warning "getCurrentCPUIndex is not implemented yet"
    return 0;
}

#endif /* CONFIG_MAX_NUM_NODES > 1 */

#endif /* __MODE_SMP_H_ */