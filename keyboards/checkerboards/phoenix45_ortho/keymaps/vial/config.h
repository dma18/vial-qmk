/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xC5, 0x6B, 0xD5, 0x4F, 0x9D, 0x31, 0x2E, 0xFE}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1}
#define VIAL_UNLOCK_COMBO_COLS { 0, 12}
#define DISABLE_LEADER

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
#define NO_ACTION_ONESHOT