/* ----------------------------------------------------------------------------
* ergoDOX layout : COLEMAK etc
*   created by Chad Spratt, by modifying COLEMAK JC Sticky Keys Mod
* -----------------------------------------------------------------------------
* Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>,
*    2013 Ryan Prince <judascleric@gmail.com>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/benblazak/ergodox-firmware>
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release
#define  mprrel   &kbfun_mediakey_press_release
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  dbtldr   &kbfun_jump_to_bootloader
#define  sshprre  &kbfun_shift_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	_esc, _1, _2, _3, _4, _5, _bracketL,
	_tab, _Q, _W, _F, _P, _G, 2,
	3, _A, _R, _S, _T, _D,
	_shiftL, _Z, _X, _C, _V, _B, _equal,
	_ctrlL, _guiL, _altL, 0, _enter,
	_capsLock, _grave,
	0, 0, _home,
	_bs, _del, _end,
	// right hand
	_bracketR, _6, _7, _8, _9, _0, 1,
	2, _J, _L, _U, _Y, _semicolon, _backslash,
	_H, _N, _E, _I, _O, _quote,
	_dash, _K, _M, _comma, _period, _slash, _shiftR,
	_arrowL, _arrowD, _arrowU, _arrowR, _ctrlR,
	0, _guiR,
	_pageU, 0, 0,
	_pageD, _enter, _space
),
// LAYER 1
// haven't modified this
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0, 0, 0, 0, 0, 0, 0,
	0, KEY_1_Exclamation, KEY_2_At, KEY_3_Pound, KEY_4_Dollar, KEY_5_Percent, 0,
	0, KEY_SingleQuote_DoubleQuote, 0x34, 0x2F, 0x30, KEY_Equal_Plus,
	0, 0x31, KEY_Backslash_Pipe, KEY_Dash_Underscore, KEY_DeleteBackspace, KEY_Tab, 0,
	KEY_LeftArrow, KEY_RightArrow, KEY_UpArrow, KEY_DownArrow, 0,
	0, 0,
	0, 0, 0,
	0, 0, 0,
	// right hand
	0, 0, MEDIAKEY_PREV_TRACK, MEDIAKEY_PLAY_PAUSE, MEDIAKEY_NEXT_TRACK, 0, 0,
	0, KEY_6_Caret, KEY_7_Ampersand, KEYPAD_Asterisk, KEYPAD_Minus, KEY_GraveAccent_Tilde, 0,
	KEYPAD_Plus, KEY_9_LeftParenthesis, KEY_0_RightParenthesis, KEY_LeftBracket_LeftBrace, KEY_RightBracket_RightBrace, 0,
	0, KEY_GraveAccent_Tilde, KEY_DownArrow, KEY_UpArrow, KEY_LeftArrow, KEY_RightArrow, 0,
	0, 0, 0, 0, 0,
	0, 0,
	0, 0, 0,
	0, 0, 0
),
// LAYER 2
// function and media keys
// game layer on 1,1
KB_MATRIX_LAYER(
    // unused
    0,
    // left hand
    0, _F1, _F2, _F3, _F4, _F5, _F6,
    0, 4, 0, 0, MEDIAKEY_PLAY_PAUSE, MEDIAKEY_AUDIO_VOL_UP, 0,
    0, 0, 0, 0, MEDIAKEY_PREV_TRACK, MEDIAKEY_NEXT_TRACK,
    0, 0, 0, 0, 0, MEDIAKEY_AUDIO_VOL_DOWN, 0,
    0, 0, 0, 0, 0,
    0, 0,
    0, 0, 0,
    0, 0, 0,
    // right hand
    _F7, _F8, _F9, _F10, _F11, _F12, 0,
    0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
    0, 0,
    0, 0, 0,
    0, 0, 0
),
// LAYER 3
// left hand numpad
KB_MATRIX_LAYER(
    // unused
    0,
    // left hand
    0, _numLock_kp, _div_kp, _mul_kp, _sub_kp, 0, 0,
    0, _7_kp, _8_kp, _9_kp, _sub_kp, 0, 0,
    3, _4_kp, _5_kp, _6_kp, _add_kp, _arrowU,
    _0_kp, _1_kp, _2_kp, _3_kp, _arrowL, _arrowD, _arrowR,
    _0_kp, _0_kp, _dec_del_kp, _dec_del_kp, _enter,
    0, 0,
    0, 0, 0,
    0, 0, 0,
    // right hand
    0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,
    0, 0,
    0, 0, 0,
    0, 0, 0
),
// LAYER 4
// qwerty
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0, 0, 0, 0, 0, 0, 0,
	0, _Q, _W, _E, _R, _T, 0,
	_capsLock, _A, _S, _D, _F, _G,
	0, _Z, _X, _C, _V, _B, 0,
	0, 0, 0, 0, 0,
	0, 0,
	0, 0, 0,
	_space, 0, 0,
	// right hand
	0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0,
	0, 0,
	0, 0, 0,
	0, 0, 0
),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,
    // left hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush2,
    lpush3, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    NULL, NULL, kprrel,
    kprrel, kprrel, kprrel,
    // right hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush1,
    lpush2, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    kprrel, NULL, NULL,
    kprrel, kprrel, kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
	ktrans, sshprre, sshprre, sshprre, sshprre, sshprre, ktrans,
	ktrans, kprrel, sshprre, sshprre, sshprre, kprrel,
	ktrans, sshprre, kprrel, sshprre, kprrel, kprrel, ktrans,
	kprrel, kprrel, kprrel, kprrel, ktrans,
	ktrans, ktrans,
	NULL, NULL, ktrans,
	ktrans, ktrans, ktrans,
	// right hand
	ktrans, ktrans, mprrel, mprrel, mprrel, ktrans, lpop1,
	ktrans, sshprre, sshprre, kprrel, kprrel, kprrel, ktrans,
	kprrel, sshprre, sshprre, kprrel, kprrel, ktrans,
	ktrans, sshprre, kprrel, kprrel, kprrel, kprrel, ktrans,
	ktrans, ktrans, ktrans, ktrans, ktrans,
	ktrans, ktrans,
	ktrans, NULL, NULL,
	ktrans, ktrans, ktrans
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,
    // left hand
    ktrans, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    ktrans, lpush4, ktrans, ktrans, mprrel, mprrel, ktrans,
    ktrans, ktrans, ktrans, ktrans, mprrel, mprrel,
    ktrans, ktrans, ktrans, ktrans, ktrans, mprrel, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    NULL, NULL, ktrans,
    ktrans, ktrans, ktrans,
    // right hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, dbtldr,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    ktrans, NULL, NULL,
    ktrans, ktrans, ktrans
),
// LAYER 3
KB_MATRIX_LAYER(
    // unused
    NULL,
    // left hand
    ktrans, kprrel, kprrel, kprrel, kprrel, ktrans, ktrans,
    ktrans, kprrel, kprrel, kprrel, kprrel, ktrans, ktrans,
    lpop3, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    ktrans, ktrans, ktrans, kprrel, kprrel,
    ktrans, ktrans,
    ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans,
    // right hand
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans
),
// LAYER 4
KB_MATRIX_LAYER(
    // unused
    NULL,
    // left hand
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    ktrans, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    NULL, NULL, ktrans,
    kprrel, ktrans, lpop4,
    // right hand
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    ktrans, NULL, NULL,
    ktrans, ktrans, ktrans
),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,
    // left hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpop2,
    NULL, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    NULL, NULL, kprrel,
    kprrel, kprrel, kprrel,
    // right hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    lpop2, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    kprrel, NULL, NULL,
    kprrel, kprrel, kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
	ktrans, sshprre, sshprre, sshprre, sshprre, sshprre, ktrans,
	ktrans, kprrel, sshprre, sshprre, sshprre, kprrel,
	kprrel, sshprre, kprrel, sshprre, kprrel, kprrel, ktrans,
	kprrel, kprrel, kprrel, kprrel, ktrans,
	ktrans, ktrans,
	NULL, NULL, ktrans,
	ktrans, ktrans, ktrans,
	// right hand
	ktrans, ktrans, mprrel, mprrel, mprrel, ktrans, ktrans,
	ktrans, sshprre, sshprre, kprrel, kprrel, kprrel, ktrans,
	kprrel, sshprre, sshprre, kprrel, kprrel, ktrans,
	ktrans, sshprre, kprrel, kprrel, kprrel, kprrel, ktrans,
	ktrans, ktrans, ktrans, ktrans, ktrans,
	ktrans, ktrans,
	ktrans, NULL, NULL,
	ktrans, ktrans, ktrans
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,
    // left hand
    ktrans, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    ktrans, ktrans, ktrans, ktrans, mprrel, mprrel, ktrans,
    ktrans, ktrans, ktrans, ktrans, mprrel, mprrel,
    ktrans, ktrans, ktrans, ktrans, ktrans, mprrel, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    NULL, NULL, ktrans,
    ktrans, ktrans, ktrans,
    // right hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    ktrans, NULL, NULL,
    ktrans, ktrans, ktrans
),
// LAYER 3
KB_MATRIX_LAYER(
    // unused
    NULL,
    // left hand
    ktrans, ktrans, kprrel, kprrel, kprrel, ktrans, ktrans,
    ktrans, kprrel, kprrel, kprrel, kprrel, ktrans, ktrans,
    ktrans, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    ktrans, ktrans, ktrans, kprrel, kprrel,
    ktrans, ktrans,
    ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans,
    // right hand
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans

),
// LAYER 4
KB_MATRIX_LAYER(
    // unused
    NULL,
    // left hand
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    ktrans, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    NULL, NULL, ktrans,
    kprrel, ktrans, NULL,
    // right hand
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    ktrans, NULL, NULL,
    ktrans, ktrans, ktrans
),
};
// ----------------------------------------------------------------------------
