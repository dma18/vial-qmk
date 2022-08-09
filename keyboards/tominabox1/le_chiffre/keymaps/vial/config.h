/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once
#define VIAL_KEYBOARD_UID {0x5E, 0xE5, 0xDE, 0x81, 0xE5, 0xC9, 0xBB, 0x62}

#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

#define IGNORE_MOD_TAP_INTERRUPT

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT