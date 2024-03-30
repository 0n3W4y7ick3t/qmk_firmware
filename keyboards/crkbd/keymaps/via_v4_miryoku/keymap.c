#include QMK_KEYBOARD_H
#define L_BAS 0 // base layer
#define L_NAV 1 // navigation, left right down up
#define L_NUM 2 // numbers
#define L_SYM 3 // symbols
#define L_FUN 4 // F1-F15, media
#define L_KBD 5 // keyboard

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_BAS] = LAYOUT_split_3x6_3_ex2(
        XXXXXXX, KC_Q,         KC_W,          KC_F,           KC_P,          KC_B,     CW_TOGG, KC_PGUP,   KC_J,      KC_L,            KC_U,         KC_Y,            KC_QUOT,       XXXXXXX,  
        XXXXXXX, LALT_T(KC_A), LGUI_T(KC_R),  LCTL_T(KC_S),   LSFT_T(KC_T),  KC_G,     KC_PSCR, KC_PGDN,   KC_M,      LSFT_T(KC_N),    LCTL_T(KC_E), LGUI_T(KC_I),    LALT_T(KC_O),  XXXXXXX, 
        XXXXXXX, KC_Z,         ALGR_T(KC_X),  KC_C,           KC_D,          KC_V,                         KC_K,      KC_H,            KC_COMM,      ALGR_T(KC_DOT),  KC_SLSH,       XXXXXXX, 
                                                   LT(L_NAV,KC_ESC), LT(L_NUM,KC_TAB), KC_SPC,  KC_ENT,    LT(L_SYM,KC_BSPC), LT(L_FUN,KC_DEL)
    ),

    [L_NAV] = LAYOUT_split_3x6_3_ex2(
        //        (web)    back     search   forward           bright+            undo       redo
        XXXXXXX,  XXXXXXX, KC_WBAK, KC_WSCH, KC_WFWD, XXXXXXX, KC_BRIU, XXXXXXX,  KC_UNDO,   KC_AGIN,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
        //        (audio)  prev     vol+     next              bright-            cut        copy       up         paste
        XXXXXXX,  XXXXXXX, KC_MPRV, KC_VOLU, KC_MNXT, XXXXXXX, KC_BRID, XXXXXXX,  KC_CUT,    KC_COPY,   KC_UP,     KC_PSTE,   XXXXXXX,   XXXXXXX,
        //        (audio)  vol0     vol-     play/pause
        XXXXXXX,  XXXXXXX, KC_MUTE, KC_VOLD, KC_MPLY, XXXXXXX,                    XXXXXXX,   KC_LEFT,   KC_DOWN,   KC_RGHT,   XXXXXXX,   XXXXXXX,     
                                             _______, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,   XXXXXXX
    ),

    [L_NUM] = LAYOUT_split_3x6_3_ex2(
        XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC,  KC_7,   KC_8,     KC_9,    KC_RBRC,  XXXXXXX, 
        XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SCLN,  KC_4,   KC_5,     KC_6,    KC_EQL,   XXXXXXX, 
        XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_GRV,   KC_1,   KC_2,     KC_3,    KC_BSLS,  XXXXXXX,                    
                                             XXXXXXX, _______, XXXXXXX, KC_DOT,  KC_MINS,  KC_0
    ),

    // @ & | ^ {  XXXXXXX  } $ %
    // : ! = > [  XXXXXXX  ] # ~
    // * + - / (  XXXXXXX  ) ;
    //     \ _ `
    [L_SYM] = LAYOUT_split_3x6_3_ex2(
        XXXXXXX, KC_AT,       KC_AMPR,      KC_PIPE,     KC_CIRC,   KC_LCBR,   XXXXXXX,   XXXXXXX, KC_RCBR,  KC_DLR,   KC_PERC,     XXXXXXX,   XXXXXXX,   XXXXXXX,
        XXXXXXX, KC_COLN,     KC_EXLM,      KC_EQL,      KC_GT,     KC_LBRC,   XXXXXXX,   XXXXXXX, KC_RBRC,  KC_HASH,  KC_TILD,     XXXXXXX,   XXXXXXX,   XXXXXXX,  
        XXXXXXX, KC_ASTR,     KC_PLUS,      KC_MINS,     KC_SLSH,   KC_LPRN,                       KC_RPRN,  KC_SCLN,  XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX, 
                                                         KC_BSLS,   KC_UNDS,   KC_GRV,    XXXXXXX, _______,  XXXXXXX
    ),

    [L_FUN] = LAYOUT_split_3x6_3_ex2(
        XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,     KC_F5,     DM_REC1,  DM_REC2,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,   DM_PLY1,  DM_PLY2,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                            MO(L_KBD), XXXXXXX,   XXXXXXX,  XXXXXXX,  DM_RSTP, _______
    ),
    [L_KBD] = LAYOUT_split_3x6_3_ex2(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                            _______, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, _______
    ),
};
