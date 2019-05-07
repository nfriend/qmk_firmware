# [nfriend](https://github.com/nfriend)'s ErgoDox EZ configuration

## Setup

There's a few things to set up before you can use all the features of this layout:

### Unicode

Unicode support requires a different setup depending on the OS. The setup required for each OS is described here: https://beta.docs.qmk.fm/features/feature_unicode#input-modes. The Unicode support in this layout currently supports macOS and Windows.

Here are the instructions copied from the link above:

#### macOS

> To enable, go to System _Preferences > Keyboard > Input Sources_, add _Unicode Hex Input_ to the list (it's under _Other_), then activate it from the input dropdown in the Menu Bar. By default, this mode uses the left Option key (`KC_LALT`) for Unicode input, but this can be changed by defining `UNICODE_KEY_OSX` with another keycode.

#### Windows

> To enable, install the [latest release of WinCompose](https://github.com/samhocevar/wincompose/releases/latest). Once installed, WinCompose will automatically run on startup. Works reliably under all version of Windows supported by the app. By default, this mode uses right Alt (`KC_RALT`) as the Compose key, but this can be changed in the WinCompose settings and by defining `UNICODE_KEY_WINC` with another keycode.

## Building

To build this layout, open a command window in the root directory of this repository and run:

```bash
make ergodox_ez:nfriend
```

This will create a `.build/ergodox_ez_nfriend.hex` file which can be flashed using the [Teensy loader](https://www.pjrc.com/teensy/loader.html). After the `.hex` file has been loaded into Teensy, the keyboard can be reprogrammed by pressing the bottom-right key of the right half of the keyboard and the top-right key of the left half.

## Developing

Use the template in `./template.c` to help create new layers quickly.

This layout was originally based on this EZ Configurator configuration: https://configure.ergodox-ez.com/ergodox-ez/layouts/x9MWL/latest/0
