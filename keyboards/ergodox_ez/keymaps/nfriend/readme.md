# [nfriend](https://github.com/nfriend)'s ErgoDox EZ configuration

## Building

To build this layout, open a command window in the root directory of this repository and run:

```bash
make ergodox_ez:nfriend
```

This will create a `.build/ergodox_ez_nfriend.hex` file which can be flashed using the [Teensy loader](https://www.pjrc.com/teensy/loader.html). After the `.hex` file has been loaded into Teensy, the keyboard can be reprogrammed by pressing the bottom-right key of the right half of the keyboard and the top-right key of the left half.

## Developing

Use the template in `./template.c` to help create new layers quickly.

This layout was originally based on this EZ Configurator configuration: https://configure.ergodox-ez.com/ergodox-ez/layouts/x9MWL/latest/0
