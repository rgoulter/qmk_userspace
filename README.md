QMK [External Userspace](https://docs.qmk.fm/newbs_external_userspace) for rgoulter's [Keyboard Labs](https://github.com/rgoulter/keyboard-labs).

# Overview

- `users/rgoulter` :: functionality common to `rgoulter` keymaps.
  - CPP defines for keymap segments.
  - Combos.
  - Leader key sequences.

- `layouts/community` :: shared keymap layouts.

  - `split_3x5_3` :: split 3x5+3. (X-1/MiniF4-36, Pico42, PyKey40 HSRGB)

    - `rgoulter` :: keymap inspired by miryoku.

  - `planck_mit` :: ortholinear 4x12 with a 2U spacebar in the middle. (BM40, PyKey40 Lite).

    - `rgoulter` :: keymap with lower/raise/adjust layers.

    - `rgoulter-pinkieoutercolumn` :: keymap with lower/raise/adjust layers.

  - `ortho_5x12` :: ortholinear 5x12. (X-2/Lumberjack-ARM (HSRGB)).

    - `rgoulter` :: keymap with lower/raise/adjust layers.

- `keyboards/rgoulter` :: keyboard firmware definitions.

## Keyboards

Design files for PCBs, plates, 3DP/CNC from rgoulter's [Keyboard Labs](https://github.com/rgoulter/keyboard-labs).

| Designation  | Summary/Keywords                                                                       | Image                                                                                                                                                 |
|--------------|----------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------|
| [X-1](https://github.com/rgoulter/keyboard-labs#x-1-36-key-split-reversible-pcb-with-weact-studio-mini-f4-dev-board) | 36-key (2x3x5+3), split, column-staggered, MX/choc, sub-100x100, per-key RGB LED, ARM       | ![](https://raw.githubusercontent.com/rgoulter/keyboard-labs/master/docs/images/photo-keyboard-x-1_rev2021.5-mx-top.JPG)                              |
| [X-2](https://github.com/rgoulter/keyboard-labs#x-2-5x12-ortholinear-arm-powered-adaptation-of-peejs-lumberjack-pcb)          | 60-key (5x12), un-split, ortholinear, MX/choc, GH60-compatible, "show the components", ARM  | ![](https://raw.githubusercontent.com/rgoulter/keyboard-labs/master/docs/images/photo-keyboard-x-2_rev2021.1-mx-top.JPG)                              |
| [X-2 HSRGB](https://github.com/rgoulter/keyboard-labs#x-2-hsrgb-5x12-ortholinear-arm-powered-adaptation-of-peejs-lumberjack-pcb-with-hotswap-and-per-key-rgb)    | 60-key (5x12), un-split, ortholinear, MX/choc, GH60-compatible, "show the components", HotSwap, per-key RGB, ARM  | ![](https://raw.githubusercontent.com/rgoulter/keyboard-labs/master/docs/images/photo-keyboard-x-2-hsrgb_rev2022.1-front.JPG)   |
| [PyKey40 Lite](https://github.com/rgoulter/keyboard-labs#pykey40-lite-no-frills-subset-of-the-pykey60-in-bm40jj40-form-factor) | Planck-MIT (4x12, 1x2U), ortholinear, MX, BM40/JJ40-compatible, PCBA, no frills, ARM        |                                                                                                                                                       |
| [PyKey40 HSRGB](https://github.com/rgoulter/keyboard-labs#pykey40-hsrgb-4x12-ortholinear-with-hotswap-and-rgb-in-bm40jj40-form-factor) | Planck-MIT (4x12, 1x2U), ortholinear, MX, BM40/JJ40-compatible, PCBA, HotSwap, per-key RGB LED, ARM        |  ![](https://raw.githubusercontent.com/rgoulter/keyboard-labs/master/docs/images/keyboards/pykey40-hsrgb/pykey40-hsrgb-top.JPG) |
| [Pico42](https://github.com/rgoulter/keyboard-labs#pico42-simple-hand-solderable-pcb-in-bm40jj40-form-factor) | 42-key ortholinear, MX/choc, BM40/JJ40-compatible, no frills, ARM        | ![](https://raw.githubusercontent.com/rgoulter/keyboard-labs/master/docs/images/keyboards/pico42/pico42-mx_lowprofile_case.JPG) |
