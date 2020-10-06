# sakata

<!--https://imgur.com/a/RSVFZdw-->
<!--[sakata](https://i.imgur.com/eGACaCH.jpg)-->

![Picture of Sakata with GMK Ocean Dolch](https://i.imgur.com/xFbv2p0.jpg)
![Picture of the back of Sakata circuitry](https://i.imgur.com/maWd5J0.jpeg)

## Overview

**sakata** is a custom handwired 40% mechanical keyboard, heavily inspired by [OLKB Planck](https://olkb.com/collections/planck) and embraces the minimalism of the [HHKB](https://happyhackingkb.com/). 

Like the Planck, *sakata* is a 4x12 ortholinear keyboard, representing a straightly-aligned uniform pattern for maximum ergonomics. All the unnecessary keys are removed, trimming down the board down to the essential. Blockers are present at the bottom corners, in a fashion that mirrors HHKB's. The name of the board comes from the [*Shoichi Sakata*](https://en.wikipedia.org/wiki/Shoichi_Sakata), following the convention naming after a physicist (*Max Planck*), and paying homage to the Japanese origin of the HHKB.

According to my knowledge, only one copy of this board exists, which was handmade and is owned by me.

## This repository

Due to its unique nature, this keyboard project is not requested to merge to QMK. There is no reason to bloat up a public repository used by millions of people with configuration used by one single board.

Information in this repository can hopefully assist other learners and keyboard enthusiasts in creating their own project.

## Information

Keyboard Maintainer: [Juno Nguyen](https://github.com/junongx)  
Hardware Supported: [Postage Board Mini](https://geekhack.org/index.php?topic=101460.0).
Hardware Availability: None, one-time custom handmade.

## Keymap

The board's matrix will take any universal ortholinear 4x12 keymap from `layouts\community\ortho_4x12\`. My personal keymap `junonum` is tailored and recommended for this board.

## Instruction

1. Clone the standard QMK repository
2. Move to `cd keyboards` folder
3. Clone this repository `git clone https://github.com/JunoNgx/sakata.git` here

From a compatible environment (I personally use [MSYS2](https://www.msys2.org/)), navigate to `qmk_firmware` directory and run the `make` command:

    make sakata:junonum
    
See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. For more information about QMK, see [the documentation](https://docs.qmk.fm/#/newbs).
