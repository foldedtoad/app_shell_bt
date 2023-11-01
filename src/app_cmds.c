/*
 * Copyright (c) 2020, Intel Corporation
 * Copyright (c) 2023 Callender-Consulting
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/sys/printk.h>
#include <zephyr/shell/shell.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(app_shell, LOG_LEVEL_INF);

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*---------------------------------------------------------------------------*/
static int cmd_shell_info(const struct shell *sh, size_t argc, char *argv[])
{
    ARG_UNUSED(argc);
    ARG_UNUSED(argv);

    shell_print(sh, "** Welcome to App Shell");
    shell_print(sh, "** Built on %s at %s", __DATE__, __TIME__);
    shell_print(sh, "** Board '%s'", CONFIG_BOARD);

    return 0;
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*---------------------------------------------------------------------------*/

SHELL_STATIC_SUBCMD_SET_CREATE(app_shell_cmds,
    SHELL_CMD(info, NULL, "app shell info", cmd_shell_info),
    SHELL_SUBCMD_SET_END
);

SHELL_CMD_REGISTER(app, &app_shell_cmds, "App Shell commands", NULL);
