/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#undef DEBOUNCE
#define DEBOUNCE 15

#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 1003

#define PERMISSIVE_HOLD

#undef IGNORE_MOD_TAP_INTERRUPT

#define RGBLIGHT_SLEEP
