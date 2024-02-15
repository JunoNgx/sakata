# sakata

## Overview
**sakata** is a series of custom handwired 40% mechanical keyboards, all of which are heavily inspired by the [OLKB Planck](https://olkb.com/collections/planck), using the 4x12 ortholinear (straightly-aligned) uniform pattern for maximum ergonomics.

The name of the board comes from the Japanese scientist [*Shoichi Sakata*](https://en.wikipedia.org/wiki/Shoichi_Sakata), following the convention of naming keyboard after a physicist (*Planck* for *Max Planck*), and paying homage to the Japanese origin of the HHKB (which was the first iteration of this series).

### zero
*(October 2019, powered by the Postage Board Mini)*

![Picture of sakata zero on the front](https://raw.githubusercontent.com/JunoNgx/sakata/master/_images/zero_front.jpg)

Being the first in the series, this board was first only known as `sakata`, and `zero` was a retroactive renaming to differentiate it from its younger siblings. Bearing the most resemblances to Planck, it also embraces the minimalistic philosophy of the [HHKB](https://happyhackingkb.com/) with striking corner blockers. All the unnecessary keys are removed, trimming down the board down to the most barebone essential.

*Zero* is powered by [Postage Board Mini](https://www.reddit.com/r/mechmarket/comments/cbzwm1/gb_postage_board_mini_the_easiest_and_slimmest/), which allows the board to be extra thin and improves the sturdiness of the USB port.

### rosa
*(February 2022, powered by the Postage Board Mini)*

![Picture of sakata rosa on the front](https://raw.githubusercontent.com/JunoNgx/sakata/master/_images/rosa_front.jpg)

Earlier known simply as `R` (I wouldn't pretend that I still remember what it meant, though I'm pretty it was something eco-friendly-themed along the line of "recycle" or "realistic") to highlight its friendliness to the process of keycap sourcing, Rosa is most remarkable in its layout, where all keys come from a standard keyboard, and merely rearrange to meet the needs of existing Planck users. This layout subsequently became the hallmark of the series.

All of its component were sourced in Singapore. For better or worse, this remains my best wiring work yet as of time of writing.

## This repository

Due to its unique nature, this keyboard project is not requested to merge to QMK. There is no reason to bloat up a public repository used by millions of people with configuration used by one single board.

Publicised information in this repository can hopefully assist other learners and keyboard enthusiasts in creating their own project.

## Information

* Keyboard Maintainer: [Juno Nguyen](https://github.com/junongx).
* Hardware Supported: Any controller board (e.g. Teensy, Pro Micro, Postage Board).
* Hardware Availability: None, one-time custom handmade.

## Keymap

The board's matrix will take any universal ortholinear 4x12 keymap from `layouts\community\ortho_4x12\`. This project does not contain any default keymap. My personal keymap [`junonum`](https://github.com/qmk/qmk_firmware/tree/master/layouts/community/ortho_4x12/junonum) is tailored and recommended for this board.

## Instruction

1. Follow the [instructions from the official docs](https://beta.docs.qmk.fm/tutorial/newbs_getting_started) to setup your QMK environment.
2. Prepare an `ortho_4x12` compatible keymap. The next step assumes the use of `junonum` keymap.
3. From the `QMK_MSYS` terminal: `qmk compile -km junonum -kb sakata"