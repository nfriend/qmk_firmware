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
#define ___ KC_TRNS

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

// macros layer
// note: MACROS is already defined 
#define MACROS_LAYER 10

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

  [COLEMAK] = LAYOUT_ergodox(
    // Left hand

    /*=========================================================================================================*/
    /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
    /**/ _______,  /**/ _______,  /**/ _______,  /**/ _______,  /**/ _______,  /**/ _______,  /**/ _______,  /**/
    /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
    /*=========================================================================================================*/
    /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
    /**/ _______,  /**/   KC_Q,   /**/   KC_W,   /**/   KC_F,   /**/   KC_P,   /**/   KC_G,   /**/ _______,  /**/
    /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
    /*==========================================================================================*/           /**/
    /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
    /**/ _______,  /**/   KC_A,   /**/   KC_R,   /**/   KC_S,   /**/   KC_T,   /**/   KC_D,   /*===============*/
    /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
    /*==========================================================================================*/           /**/
    /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
    /**/ _______,  /**/   KC_Z,   /**/   KC_X,   /**/   KC_C,   /**/   KC_V,   /**/   KC_B,   /**/ _______,  /**/
    /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
    /*=========================================================================================================*/
        /**/       /**/           /**/           /**/           /**/           /**/
        /**/  ___, /**/ _______,  /**/ _______,  /**/ _______,  /**/ _______,  /**/
        /**/       /**/           /**/           /**/           /**/           /**/
        /*=======================================================================*/
                                                                                           /*==============================*/
                                                                                           /**/           /**/           /**/
                                                                                           /**/ _______,  /**/ _______,  /**/
                                                                                           /**/           /**/           /**/
                                                                            /*=============================================*/
                                                                            /**/           /**/           /**/           /**/
                                                                            /**/           /**/           /**/ _______,  /**/
                                                                            /**/           /**/           /**/           /**/
                                                                            /**/           /**/           /*===============*/
                                                                            /**/           /**/           /**/           /**/
                                                                            /**/ _______,  /**/ _______,  /**/ _______,  /**/
                                                                            /**/           /**/           /**/           /**/
                                                                            /*=============================================*/

    // Right hand

                /*=========================================================================================================*/
                /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
                /**/ _______,  /**/ _______,  /**/ _______,  /**/ _______,  /**/ _______,  /**/ _______,  /**/ _______,  /**/
                /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
                /*=========================================================================================================*/
                /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
                /**/ _______,  /**/   KC_J,   /**/   KC_L,   /**/   KC_U,   /**/   KC_Y,   /**/ KC_SCOLON,/**/ _______,  /**/
                /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
                /**/           /*==========================================================================================*/
                /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
                /*===============*/   KC_H,   /**/   KC_N,   /**/   KC_E,   /**/   KC_I,   /**/   KC_O,   /**/ _______,  /**/
                /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
                /**/           /*==========================================================================================*/
                /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
                /**/ _______,  /**/   KC_K,   /**/   KC_M,   /**/ KC_COMMA, /**/  KC_DOT,  /**/ KC_SLASH, /**/ _______,  /**/
                /**/           /**/           /**/           /**/           /**/           /**/           /**/           /**/
                /*=========================================================================================================*/
                                              /**/           /**/           /**/           /**/           /**/       /**/
                                              /**/ _______,  /**/ _______,  /**/ _______,  /**/ _______,  /**/  ___, /**/
                                              /**/           /**/           /**/           /**/           /**/       /**/
                                              /*=======================================================================*/
    /*==============================*/
    /**/           /**/           /**/
    /**/ _______,  /**/ _______,  /**/
    /**/           /**/           /**/
    /*=============================================*/
    /**/           /**/           /**/           /**/
    /**/ _______,  /**/           /**/           /**/
    /**/           /**/           /**/           /**/
    /*===============*/           /**/           /**/
    /**/           /**/           /**/           /**/
    /**/ _______,  /**/ _______,  /**/ _______   /**/
    /**/           /**/           /**/           /**/
    /*=============================================*/
  ),

  [1] = LAYOUT_ergodox(_______,_______,_______,_______,_______,_______,_______,_______,LGUI(KC_Q),LGUI(KC_W),LGUI(KC_F),LGUI(KC_P),LGUI(KC_G),_______,_______,KC_LCTRL,KC_LGUI,KC_LSHIFT,KC_LALT,LGUI(KC_D),_______,LGUI(KC_Z),LGUI(KC_X),LGUI(KC_C),LGUI(KC_V),LGUI(KC_B),_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,RGUI(KC_J),KC_BSPACE,KC_UP,KC_DELETE,RGUI(KC_SCOLON),_______,RGUI(KC_H),KC_LEFT,KC_DOWN,KC_RIGHT,KC_ENTER,_______,_______,RGUI(KC_K),RGUI(KC_M),RGUI(KC_COMMA),RGUI(KC_DOT),RGUI(KC_SLASH),_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______),

  [2] = LAYOUT_ergodox(_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_NO,KC_ESCAPE,LALT(KC_KP_MINUS),KC_PERC,KC_KP_SLASH,_______,_______,KC_NO,KC_KP_7,KC_KP_8,KC_KP_9,KC_KP_ASTERISK,_______,KC_COLN,KC_KP_4,KC_KP_5,KC_KP_6,KC_KP_MINUS,_______,_______,KC_COMMA,KC_KP_1,KC_KP_2,KC_KP_3,KC_KP_PLUS,_______,KC_0,KC_0,KC_DOT,KC_KP_ENTER,_______,_______,_______,_______,_______,_______,_______),

  [3] = LAYOUT_ergodox(_______,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,_______,_______,KC_EXLM,KC_AT,KC_LCBR,KC_RCBR,KC_PERC,_______,_______,KC_HASH,KC_UNDS,KC_LPRN,KC_RPRN,KC_AMPR,_______,KC_BSLASH,KC_SLASH,KC_LBRACKET,KC_RBRACKET,KC_TILD,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,_______,KC_CIRC,KC_KP_PLUS,KC_KP_MINUS,KC_GRAVE,KC_SCOLON,_______,KC_PIPE,KC_EQUAL,KC_QUOTE,KC_COLN,KC_DQUO,_______,_______,KC_DLR,KC_ASTR,KC_LABK,KC_RABK,KC_QUES,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______),

  [4] = LAYOUT_ergodox(_______,_______,_______,LALT(LCTL(KC_C)),_______,_______,_______,_______,LALT(LCTL(KC_U)),LALT(LCTL(LGUI(KC_LEFT))),LALT(LCTL(KC_ENTER)),LALT(LCTL(LGUI(KC_RIGHT))),LALT(LCTL(KC_I)),_______,_______,LALT(LCTL(KC_J)),LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_BSPACE)),LALT(LCTL(KC_RIGHT)),LALT(LCTL(KC_K)),_______,KC_UP,LALT(LCTL(KC_E)),LALT(LCTL(KC_F)),LALT(LCTL(KC_T)),LALT(LCTL(KC_G)),_______,KC_LEFT,KC_DOWN,KC_RIGHT,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,LALT(LCTL(KC_C)),_______,_______,_______,_______,LALT(LCTL(KC_U)),LALT(LCTL(LGUI(KC_LEFT))),LALT(LCTL(KC_ENTER)),LALT(LCTL(LGUI(KC_RIGHT))),LALT(LCTL(KC_I)),_______,LALT(LCTL(KC_J)),LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_BSPACE)),LALT(LCTL(KC_RIGHT)),LALT(LCTL(KC_K)),_______,_______,LALT(LCTL(KC_D)),LALT(LCTL(KC_E)),LALT(LCTL(KC_F)),LALT(LCTL(KC_T)),KC_UP,_______,_______,_______,KC_LEFT,KC_DOWN,KC_RIGHT,_______,_______,_______,_______,_______,_______),

  [5] = LAYOUT_ergodox(_______,KC_F14,KC_F15,_______,_______,_______,RESET,_______,_______,_______,KC_MS_UP,_______,_______,_______,_______,_______,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,RGB_MOD,HSV_0_255_255,HSV_120_255_128,KC_MS_BTN1,KC_MS_BTN2,HSV_240_255_255,_______,_______,_______,_______,_______,_______,KC_MEDIA_EJECT,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,RGB_TOG,RGB_SLD,RGB_VAI,RGB_VAD,RGB_HUD,RGB_HUI),

  [6] = LAYOUT_ergodox(_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,DYN_REC_START2,DYN_MACRO_PLAY2,DYN_REC_STOP,_______,_______,_______,DYN_REC_START1,DYN_MACRO_PLAY1,DYN_REC_STOP,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______),

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
