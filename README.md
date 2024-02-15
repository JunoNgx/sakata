# sakata

This repository contains the firmware for the **sakata** keyboard series, created by Juno Nguyen.

## Overview
**sakata** is a series of custom handwired 40% mechanical keyboards, all of which are heavily inspired by the [OLKB Planck](https://olkb.com/collections/planck), using the 4x12 ortholinear (straightly-aligned) uniform pattern for maximum ergonomics.

The name of the board comes from the Japanese scientist [*Shoichi Sakata*](https://en.wikipedia.org/wiki/Shoichi_Sakata), following the convention of naming keyboard after a physicist (*Planck* for *Max Planck*), and paying homage to the Japanese origin of the HHKB (which was the first iteration of this series).

### zero
*(October 2019, powered by the Postage Board Mini)*

![Picture of sakata zero on the front](https://raw.githubusercontent.com/JunoNgx/sakata/master/_images/zero_front.jpg)
![Picture of sakata zero on the back](https://raw.githubusercontent.com/JunoNgx/sakata/master/_images/zero_back.jpg)

Being the first in the series, this board was first only known as `sakata`, and `zero` was a retroactive renaming to differentiate it from its younger siblings. Bearing the most resemblances to Planck, it also embraces the minimalistic philosophy of the [HHKB](https://happyhackingkb.com/) with striking corner blockers. All the unnecessary keys are removed, trimming down the board down to the most barebone essential.

*Zero* is powered by [Postage Board Mini](https://www.reddit.com/r/mechmarket/comments/cbzwm1/gb_postage_board_mini_the_easiest_and_slimmest/), which allows the board to be extra thin and improves the sturdiness of the USB port.

### rosa
*(February 2022, powered by the Postage Board Mini)*

![Picture of sakata rosa on the front](https://raw.githubusercontent.com/JunoNgx/sakata/master/_images/rosa_front.jpg)
![Picture of sakata rosa on the back](https://raw.githubusercontent.com/JunoNgx/sakata/master/_images/rosa_back.jpg)

Earlier known simply as `R` (I wouldn't pretend that I still remember what it meant, though I'm pretty it was something eco-friendly-themed along the line of "recycle" or "realistic") to highlight its friendliness to the process of keycap sourcing, Rosa is most remarkable in its layout, where all keys come from a standard keyboard, and merely rearrange to meet the needs of existing Planck users. This layout subsequently became the hallmark of the series.

All of its component were sourced in Singapore. For better or worse, this remains my best wiring work yet as of time of writing.

### robin
*(July 2022, powered by Keebio's Stampy)*

![Picture of sakata robin on the front](https://raw.githubusercontent.com/JunoNgx/sakata/master/_images/robin_front.jpg)
![Picture of sakata robin on the back](https://raw.githubusercontent.com/JunoNgx/sakata/master/_images/robin_back.jpg)

This board exists solely because [Keebio's Stampy](https://keeb.io/products/stampy-rp2040-usb-c-controller-board-for-handwiring) exists, and Stampy existed because I nudged Danny (the owner of Keebio) to do it.

Largely very similar to Rosa, Robin refined the layout, refined the construction, used carbon fiber plate, added hotswap modules, and removed all the unnecessary clutters for maximum effectiveness. This board, today, is very much similar to when it was first made.

### raime
*(December 2022, powered by the Spinkly)

![Picture of sakata raime on the front](https://raw.githubusercontent.com/JunoNgx/sakata/master/_images/raime_front.jpg)
![Picture of sakata raime on the back](https://raw.githubusercontent.com/JunoNgx/sakata/master/_images/raime_back.jpg)

On a very random day, in the autumn of 2022, upon staring very long and deep into the back of Robin, I realised that there was enough space for squeeze in Pro Micro, and a new idea was born.

While immensely enjoyed the robustness of Postage Board Mini and Stampy, the limited availability of these controllers were a point of anxiety, and being sustainable was a desirable goal to pursue. Which mmeans using purely non-specialised common components such as the Pro Micro among its many alternatives. I eventually achieved it with Raime, while not compromising on the board's thickness and construction.

The difference between Raime and Robin is even shorter than the difference between Robin and Rosa, and it is mainly the controller. Originally planned to be Keebio Helios, I found a local deal for a pair of [Splinkys](https://github.com/Bastardkb/Splinky), which perfectly met my needs. Giving up on a handwiring-specific controller did come with compromises, and I wouldn't pretend it was fun (hot glue came to the rescue, and the port ended up crooked). My wiring work also had a downgrade.

That being said, the freedom of being entire self-sustainable without relying on limited parts was worth it.

## Keymap

Each and every keyboard in the Sakata series take an `ORTHO_4x12`, which is also shared with their original inspiration, the Planck.

## Information

* Keyboard Maintainer: [Juno Nguyen](https://github.com/junongx).
* Hardware Supported: Any controller board (e.g. Teensy, Pro Micro, Postage Board).
* Hardware Availability: None, one-time custom handmade.

## Instruction

1. Follow the [instructions from the official docs](https://beta.docs.qmk.fm/tutorial/newbs_getting_started) to setup your QMK environment.
2. Clone this repository into the `keyboards` directory of the `qmk_firmware` repository (the `handwired` directory is particularly appropriate for this).
3. Run the flash command with extra flag to enable RGB and compile:

```
qmk flash -kb sakata/raime -e RGBLIGHT_ENABLE=yes
```
