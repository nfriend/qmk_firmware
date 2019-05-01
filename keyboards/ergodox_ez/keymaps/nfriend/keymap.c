#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define O KC_TRANSPARENT
#define X KC_NONE

// base layers
#define COLEMAK 0
#define QWERTY 1
#define DVORAK 2

// OS layers
#define MAC 3
#define WINDOWS 4

// symbols
#define SYMBOLS 5

// window management
#define WINDOW_MANAGEMENT_MAC 6
#define WINDOW_MANAGEMENT_WINDOWS 7

// navigation
#define ARROWS_MAC 8
#define ARROWS_WINDOWS 9

// macros 
#define MACROS 10

// misc
#define MISC 11

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE, // can always be here
  EPRM,
  HSV_0_255_255,
  HSV_120_255_128,
  HSV_240_255_255,
  DYNAMIC_MACRO_RANGE,
};
#include "dynamic_macro.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* COLEMAK
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |  Q   |  W   |  F   |  P   |  G   |      |           |      |  J   |  L   |  U   |  Y   |  ;   |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  A   |  R   |  S   |  T   |  D   |------|           |------|  H   |  N   |  E   |  I   |  O   |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  Z   |  X   |  C   |  V   |  B   |      |           |      |  K   |  M   |  ,   |  .   |  /   |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 |      |      |------|       |------|        |      |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */
  [COLEMAK] = LAYOUT_ergodox(
    // left hand  
    O,  O,    O,    O,    O,    O,    O,
    O,  KC_Q, KC_W, KC_F, KC_P, KC_G, O,
    O,  KC_A, KC_R, KC_S, KC_T, KC_D, 
    O,  KC_Z, KC_X, KC_C, KC_V, KC_B, O,
    O,  O,    O,    O,    O,
                                                     
                   // left thumb cluster
                                   O, O,
                                      O,
                                O, O, O,

    // right hand                                                            
    O, O,    O,    O,        O,      O,         O,
    O, KC_J, KC_L, KC_U,     KC_Y,   KC_SCOLON, O,
       KC_H, KC_N, KC_E,     KC_I,   KC_O,      O,
    O, KC_K, KC_M, KC_COMMA, KC_DOT, KC_SLASH,  O,
             O,    O,        O,      O,         O,

    // right thumb cluster                           
    O, O,
    O,
    O, O, O
  ),

/* QWERTY
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |  Q   |  W   |  E   |  R   |  T   |      |           |      |  Y   |  U   |  I   |  O   |  P   |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  A   |  S   |  D   |  F   |  G   |------|           |------|  H   |  J   |  K   |  L   |  ;   |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  Z   |  X   |  C   |  V   |  B   |      |           |      |  N   |  M   |  ,   |  .   |  /   |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 |      |      |------|       |------|        |      |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */
  [QWERTY] = LAYOUT_ergodox(
    // left hand  
    O,  O,    O,    O,    O,    O,    O,
    O,  KC_Q, KC_W, KC_E, KC_R, KC_T, O,
    O,  KC_A, KC_S, KC_D, KC_F, KC_G, 
    O,  KC_Z, KC_X, KC_C, KC_V, KC_B, O,
    O,  O,    O,    O,    O,
                                                     
                   // left thumb cluster
                                   O, O,
                                      O,
                                O, O, O,

    // right hand                                                            
    O, O,    O,    O,        O,      O,         O,
    O, KC_Y, KC_U, KC_I,     KC_O,   KC_P,      O,
       KC_H, KC_J, KC_K,     KC_L,   KC_SCOLON, O,
    O, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH,  O,
             O,    O,        O,      O,         O,

    // right thumb cluster                           
    O, O,
    O,
    O, O, O
  ),

/* DVORAK
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |  '   |  ,   |  .   |  P   |  Y   |      |           |      |  F   |  G   |  C   |  R   |  L   |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  A   |  O   |  E   |  U   |  I   |------|           |------|  D   |  H   |  T   |  N   |  S   |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  ;   |  Q   |  J   |  K   |  X   |      |           |      |  B   |  M   |  W   |  V   |  Z   |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 |      |      |------|       |------|        |      |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */
  [DVORAK] = LAYOUT_ergodox(
    // left hand  
    O,  O,         O,        O,      O,    O,    O,
    O,  KC_QUOTE,  KC_COMMA, KC_DOT, KC_P, KC_Y, O,
    O,  KC_A,      KC_O,     KC_E,   KC_U, KC_I, 
    O,  KC_SCOLON, KC_Q,     KC_J,   KC_K, KC_X, O,
    O,  O,         O,        O,      O,
                                                     
                   // left thumb cluster
                                   O, O,
                                      O,
                                O, O, O,

    // right hand                                                            
    O, O,    O,    O,    O,    O,    O,
    O, KC_F, KC_G, KC_C, KC_R, KC_L, O,
       KC_D, KC_H, KC_T, KC_N, KC_S, O,
    O, KC_B, KC_M, KC_W, KC_V, KC_Z, O,
             O,    O,    O,    O,    O,

    // right thumb cluster                           
    O, O,
    O,
    O, O, O
  ),

  [1] = LAYOUT_ergodox(O,O,O,O,O,O,O,O,LGUI(KC_Q),LGUI(KC_W),LGUI(KC_F),LGUI(KC_P),LGUI(KC_G),O,O,KC_LCTRL,KC_LGUI,KC_LSHIFT,KC_LALT,LGUI(KC_D),O,LGUI(KC_Z),LGUI(KC_X),LGUI(KC_C),LGUI(KC_V),LGUI(KC_B),O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,RGUI(KC_J),KC_BSPACE,KC_UP,KC_DELETE,RGUI(KC_SCOLON),O,RGUI(KC_H),KC_LEFT,KC_DOWN,KC_RIGHT,KC_ENTER,O,O,RGUI(KC_K),RGUI(KC_M),RGUI(KC_COMMA),RGUI(KC_DOT),RGUI(KC_SLASH),O,O,O,O,O,O,O,O,O,O,O,O),

  [2] = LAYOUT_ergodox(O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,KC_NO,KC_ESCAPE,LALT(KC_KP_MINUS),KC_PERC,KC_KP_SLASH,O,O,KC_NO,KC_KP_7,KC_KP_8,KC_KP_9,KC_KP_ASTERISK,O,KC_COLN,KC_KP_4,KC_KP_5,KC_KP_6,KC_KP_MINUS,O,O,KC_COMMA,KC_KP_1,KC_KP_2,KC_KP_3,KC_KP_PLUS,O,KC_0,KC_0,KC_DOT,KC_KP_ENTER,O,O,O,O,O,O,O),

  [3] = LAYOUT_ergodox(O,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,O,O,KC_EXLM,KC_AT,KC_LCBR,KC_RCBR,KC_PERC,O,O,KC_HASH,KC_UNDS,KC_LPRN,KC_RPRN,KC_AMPR,O,KC_BSLASH,KC_SLASH,KC_LBRACKET,KC_RBRACKET,KC_TILD,O,O,O,O,O,O,O,O,O,O,O,O,O,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,O,KC_CIRC,KC_KP_PLUS,KC_KP_MINUS,KC_GRAVE,KC_SCOLON,O,KC_PIPE,KC_EQUAL,KC_QUOTE,KC_COLN,KC_DQUO,O,O,KC_DLR,KC_ASTR,KC_LABK,KC_RABK,KC_QUES,O,O,O,O,O,O,O,O,O,O,O,O),

  [4] = LAYOUT_ergodox(O,O,O,LALT(LCTL(KC_C)),O,O,O,O,LALT(LCTL(KC_U)),LALT(LCTL(LGUI(KC_LEFT))),LALT(LCTL(KC_ENTER)),LALT(LCTL(LGUI(KC_RIGHT))),LALT(LCTL(KC_I)),O,O,LALT(LCTL(KC_J)),LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_BSPACE)),LALT(LCTL(KC_RIGHT)),LALT(LCTL(KC_K)),O,KC_UP,LALT(LCTL(KC_E)),LALT(LCTL(KC_F)),LALT(LCTL(KC_T)),LALT(LCTL(KC_G)),O,KC_LEFT,KC_DOWN,KC_RIGHT,O,O,O,O,O,O,O,O,O,O,O,LALT(LCTL(KC_C)),O,O,O,O,LALT(LCTL(KC_U)),LALT(LCTL(LGUI(KC_LEFT))),LALT(LCTL(KC_ENTER)),LALT(LCTL(LGUI(KC_RIGHT))),LALT(LCTL(KC_I)),O,LALT(LCTL(KC_J)),LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_BSPACE)),LALT(LCTL(KC_RIGHT)),LALT(LCTL(KC_K)),O,O,LALT(LCTL(KC_D)),LALT(LCTL(KC_E)),LALT(LCTL(KC_F)),LALT(LCTL(KC_T)),KC_UP,O,O,O,KC_LEFT,KC_DOWN,KC_RIGHT,O,O,O,O,O,O),

  [5] = LAYOUT_ergodox(O,KC_F14,KC_F15,O,O,O,RESET,O,O,O,KC_MS_UP,O,O,O,O,O,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,O,O,O,O,O,O,O,O,O,O,O,O,O,RGB_MOD,HSV_0_255_255,HSV_120_255_128,KC_MS_BTN1,KC_MS_BTN2,HSV_240_255_255,O,O,O,O,O,O,KC_MEDIA_EJECT,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,RGB_TOG,RGB_SLD,RGB_VAI,RGB_VAD,RGB_HUD,RGB_HUI),

  [6] = LAYOUT_ergodox(O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,DYN_REC_START2,DYN_MACRO_PLAY2,DYN_REC_STOP,O,O,O,DYN_REC_START1,DYN_MACRO_PLAY1,DYN_REC_STOP,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O,O),

};

bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_record_dynamic_macro(keycode, record)) {
    return false;
  }
  switch (keycode) {
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(0,255,255);
        #endif
      }
      return false;
    case HSV_120_255_128:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(120,255,128);
        #endif
      }
      return false;
    case HSV_240_255_255:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(240,255,255);
        #endif
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    return state;

};
