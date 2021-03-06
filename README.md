# sakata

![Picture of sakata on the front](https://raw.githubusercontent.com/JunoNgx/sakata/master/sakata_front.jpg)
![Picture of sakata on the back](https://raw.githubusercontent.com/JunoNgx/sakata/master/sakata_back.jpg)

## Overview

**sakata** is a custom handwired 40% mechanical keyboard, heavily inspired by the [OLKB Planck](https://olkb.com/collections/planck) and embraces the minimalistic philosophy of the [HHKB](https://happyhackingkb.com/). The project was first publicized in October 2019.

Like the Planck, *sakata* is a 4x12 ortholinear keyboard, implementing a straightly-aligned uniform pattern for maximum ergonomics. All the unnecessary keys are removed, trimming down the board down to the most barebone essential. Blockers are present at the bottom corners, in a fashion that mirrors the HHKB's. The name of the board comes from the [*Shoichi Sakata*](https://en.wikipedia.org/wiki/Shoichi_Sakata), following the convention of naming keyboard after a physicist (*Planck* for *Max Planck*), and paying homage to the Japanese origin of the HHKB.

*sakata* is powered by [Postage Board Mini](https://www.reddit.com/r/mechmarket/comments/cbzwm1/gb_postage_board_mini_the_easiest_and_slimmest/), which allows the board to be extra thin and improves the sturdiness of the USB port.

According to my knowledge, only one copy of this board exists, which was handmade and is currently owned by me.

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