#include QMK_KEYBOARD_H
#define L_BAS 0 // base layer, colemak mod-dh
#define L_WKM 1 // dvorak
#define L_DVK 2 // qwerty
#define L_QWT 3 // workman
#define L_GME 4 // gaming, left split only
#define L_NAV 5 // navigation, media
#define L_NUM 6 // numbers
#define L_SYM 7 // symbols
#define L_FUN 8 // F1-F15, micros, keyboard
/*
  layer switching:  https://docs.qmk.fm/#/feature_layers
  mod-tap:          https://docs.qmk.fm/#/mod_tap
  keycodes:         https://docs.qmk.fm/#/keycodes
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_BAS] = LAYOUT_split_3x6_3_ex2(
    /* colemak-dh:
    q  w  f  p  b         j  l  u  y  '
    a  r  s  t  g         m  n  e  i  o
    z  x  c  d  v         k  h  ,  .  /
     */
    KC_LALT,        KC_Q,     KC_W,         KC_F,   KC_P,  KC_B,  KC_BSPC,   KC_DEL,   KC_J,  KC_L,  KC_U,    KC_Y,           KC_QUOT,  KC_RALT,
    CTL_T(KC_ENT),  KC_A,     KC_R,         KC_S,   KC_T,  KC_G,  KC_PSCR,   CW_TOGG,  KC_M,  KC_N,  KC_E,    KC_I,           KC_O,     CTL_T(KC_SCLN),
    KC_LSFT,        KC_Z,     ALGR_T(KC_X), KC_C,   KC_D,  KC_V,                       KC_K,  KC_H,  KC_COMM, ALGR_T(KC_DOT), KC_SLSH,  SFT_T(KC_LGUI),
                    LT(L_NAV,KC_ESC), LT(L_NUM,KC_TAB), GUI_T(KC_SPC), CTL_T(KC_ENT), LT(L_SYM,KC_BSPC), LT(L_FUN,KC_DEL)
  ),

  [L_WKM] = LAYOUT_split_3x6_3_ex2(
    /* workman:
    q  d  r  w  b         j  f  u  p  '
    a  s  h  t  g         y  n  e  o  i
    z  x  m  v  c         k  l  ,  .  /
    */
    KC_LALT,        KC_Q,     KC_D,         KC_R,  KC_W,   KC_B,  KC_BSPC,   KC_DEL,   KC_J,  KC_F,  KC_U,    KC_P,           KC_QUOT,  KC_RALT,
    CTL_T(KC_ENT),  KC_A,     KC_S,         KC_H,  KC_T,   KC_G,  KC_PSCR,   CW_TOGG,  KC_Y,  KC_N,  KC_E,    KC_O,           KC_I,     CTL_T(KC_SCLN),
    KC_LSFT,        KC_Z,     ALGR_T(KC_X), KC_M,  KC_V,   KC_C,                       KC_K,  KC_L,  KC_COMM, ALGR_T(KC_DOT), KC_SLSH,  SFT_T(KC_LGUI),
                    LT(L_NAV,KC_ESC), LT(L_NUM,KC_TAB), GUI_T(KC_SPC), CTL_T(KC_ENT), LT(L_SYM,KC_BSPC), LT(L_FUN,KC_DEL)
  ),

  [L_DVK] = LAYOUT_split_3x6_3_ex2(
    /* dvorak:
    '  ,  .  p  y         f  g  c  r  l
    a  o  e  u  i         d  h  t  n  s
    /  q  j  k  x         b  m  w  v  z
    */
    KC_LALT,        KC_QUOT,  KC_COMM,      KC_DOT, KC_P,  KC_Y,  KC_BSPC,   KC_DEL,   KC_F,  KC_G,  KC_C,    KC_R,           KC_L,     KC_RALT,
    CTL_T(KC_ENT),  KC_A,     KC_O,         KC_E,   KC_U,  KC_I,  KC_PSCR,   CW_TOGG,  KC_D,  KC_H,  KC_T,    KC_N,           KC_S,     CTL_T(KC_SCLN),
    KC_LSFT,        KC_SLSH,  ALGR_T(KC_Q), KC_J,   KC_K,  KC_X,                       KC_B,  KC_M,  KC_W,    ALGR_T(KC_V),   KC_Z,     SFT_T(KC_LGUI),
                    LT(L_NAV,KC_ESC), LT(L_NUM,KC_TAB), GUI_T(KC_SPC), CTL_T(KC_ENT), LT(L_SYM,KC_BSPC), LT(L_FUN,KC_DEL)
  ),

  [L_QWT] = LAYOUT_split_3x6_3_ex2(
    /* qwerty:
    q  w  e  t  t         y  u  i  o  p
    a  s  d  f  g         h  j  k  l  '
    z  x  c  v  b         n  m  ,  .  /
    */
    KC_LALT,        KC_Q,     KC_W,         KC_E,   KC_R,  KC_T,  KC_BSPC,   KC_DEL,   KC_Y,  KC_U,  KC_I,    KC_O,           KC_P,     KC_RALT,
    CTL_T(KC_ENT),  KC_A,     KC_S,         KC_D,   KC_F,  KC_G,  KC_PSCR,   CW_TOGG,  KC_H,  KC_J,  KC_K,    KC_L,           KC_QUOT,  CTL_T(KC_SCLN),
    KC_LSFT,        KC_Z,     ALGR_T(KC_X), KC_C,   KC_V,  KC_B,                       KC_N,  KC_M,  KC_COMM, ALGR_T(KC_DOT), KC_SLSH,  SFT_T(KC_LGUI),
                    LT(L_NAV,KC_ESC), LT(L_NUM,KC_TAB), GUI_T(KC_SPC), CTL_T(KC_ENT), LT(L_SYM,KC_BSPC), LT(L_FUN,KC_DEL)
  ),

  [L_GME] = LAYOUT_split_3x6_3_ex2(
    _______,  KC_ESC,    KC_1,      KC_2,     KC_3,      KC_4,      _______, _______,   _______,  _______,  _______,  _______,  _______,  _______,
    _______,  KC_TAB,    KC_Q,      KC_W,     KC_E,      KC_R,      _______, _______,   _______,  _______,  _______,  _______,  _______,  _______,
    _______,  KC_LSFT,   KC_A,      KC_S,     KC_D,      KC_F,                          _______,  _______,  _______,  _______,  _______,  _______,
                                              KC_Z,      KC_LCTL,   KC_SPC,  _______,   _______,  _______
  ),

  [L_NAV] = LAYOUT_split_3x6_3_ex2(
    // bright+   (web)   back       search    forward              TG(sym)    TG(num)               home                page_up
    KC_BRIU,  _______,   KC_WBAK,   KC_WSCH,  KC_WFWD,   _______,  TG(L_SYM), TG(L_NUM),  _______,  KC_HOME,  _______,  KC_PGUP,  _______,  _______,
    // bright- (audio)   prev       vol+      next                 insert     caps                  end       up        page_down
    KC_BRID,  _______,   KC_MPRV,   KC_VOLU,  KC_MNXT,   _______,  KC_INS,    KC_CAPS,    _______,  KC_END,   KC_UP,    KC_PGDN,  _______,  _______,
    //         (audio)   vol0       vol-      play/pause                                            left      down      right
    _______,  _______,   KC_MUTE,   KC_VOLD,  KC_MPLY,   _______,                         _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,
                                              _______,   KC_TAB,   KC_SPC,    KC_ENT,     KC_BSPC,  KC_DEL
  ),

  [L_NUM] = LAYOUT_split_3x6_3_ex2(
    KC_MINS,  KC_1,      KC_2,      KC_3,     KC_4,      KC_5,      KC_EQL,  TG(L_NUM),  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,
    KC_LSFT,  KC_LCTL,   KC_LALT,   _______,  _______,   KC_COMM,   KC_DOT,  _______,    KC_PLUS,  KC_4,     KC_5,     KC_6,     KC_ASTR,  _______,
    KC_LGUI,  _______,   _______,   _______,  _______,   _______,                        KC_MINS,  KC_1,     KC_2,     KC_3,     KC_SLSH,  KC_ENT,
                                              _______,   _______,   _______, KC_0,       KC_DOT,   KC_EQL
  ),

  [L_SYM] = LAYOUT_split_3x6_3_ex2(
    //        @          &          |         ^          {                                }         $         %
    _______,  KC_AT,     KC_AMPR,   KC_PIPE,  KC_CIRC,   KC_LCBR,   TG(L_SYM),  _______,  KC_RCBR,  KC_DLR,   KC_PERC,  _______,  _______,  _______,
    //        :          !          =         >          [                                ]         #         ~
    _______,  KC_COLN,   KC_EXLM,   KC_EQL,   KC_GT,     KC_LBRC,   _______,    _______,  KC_RBRC,  KC_HASH,  KC_TILD,  _______,  _______,  _______,
    //        *          +          -         /          (                                )         \         ;
    _______,  KC_ASTR,   KC_PLUS,   KC_MINS,  KC_SLSH,   KC_LPRN,                         KC_RPRN,  KC_BSLS,  KC_SCLN,  _______,  _______,  _______,
    //                                        _          `
                                              KC_UNDS,   KC_GRV,    _______,    _______,  _______,  _______
  ),

  [L_FUN] = LAYOUT_split_3x6_3_ex2(
    QK_BOOT,  KC_F1,     KC_F2,      KC_F3,    KC_F4,      KC_F5,     DM_REC1,  DM_REC2,  KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,    _______,
    _______,  DF(L_BAS), DF(L_WKM),  RGB_VAI,  DF(L_DVK),  DF(L_QWT), DM_PLY1,  DM_PLY2,  KC_F11,   KC_F12,   KC_F13,   KC_F14,    KC_F15,    _______,
    _______,  DF(L_GME), _______,    RGB_VAD,  RGB_HUI,    RGB_SAI,                       RGB_M_P,  RGB_M_B,  RGB_M_R,  RGB_M_SW,  RGB_RMOD,  RGB_MOD,
                                               RGB_HUD,    RGB_SAD,   RGB_SPD,  RGB_SPI,  RGB_TOG,  _______
  ),
};
