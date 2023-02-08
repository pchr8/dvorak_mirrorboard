# Intro
In this repo I keep the keyboard layout I use, based on dvorak and heavily modified.

The previous layouts, based on my initial generic dvorak-mirrorboard layout, are still
available for sentimental reasons but are a mess.

# My current dvorak-based keyboard layout
<!-- ![The layout](/my_layout/assets_v6/kl_cut.png) -->
![The layout](/my_layout/assets_v6/kl_cut_new.png)

I described and documented it here: [My custom keyboard layout with dvorak and LEDs - serhii.net](https://serhii.net/blog/it/2022-06-04-220604-0136-latest-iteration-of-my-custom-dvorak-ua-ru-xkb-layout/)

Features TL;DR: 
- two layouts (latin/cyrillic) covering four languages (EN/DE/UA/RU)
- the Caps Lock LED as layout indicator (on = cyrillic)
- Caps Lock acting both as Ctrl and Escape
- things like arrow keys, BackSpace accessible at right hand resting position
- Useful Python characters (`(){}[]<>=+-`) moved closer to the main row
- **UPDATE**: Added numpad keys on level5! But not level5 itself. For now, `-option 'lv5:ralt_switch_lock'` works.

# Old Pchr8board / dvorak-mirrorboard layout
Originally this repo was about an attempt at a more generic layout. It was a Dvorak version of Mirrorboard by Randall Munroe. It lives in `./pchr8board_layout`.

A better description can be found in [the original post](https://serhii.net/blog/it/2019-03-19-pchr8board-dvorak/) on my website.

![The layout](/pchr8board_layout/keyboard-layout.png)

## How to use
Copy the file `pchr8board` to you systems' key definitions directory, in my case it was `/usr/share/X11/xkb/symbols/`. Then you can activate it with `setxkbmap pchr8board` or however you set your layouts.

## What else does the repo contain?
* In `my_layout/` I have the layouts I currently use:
	* `ruua` is a mixed Ukrainian/Russian layout with some changes.
	* `v6.cpp` is my main heavily edited dvorak layout
	* `assets_v6` contains [keyboard-layout-editor.com](http://www.keyboard-layout-editor.com/#/)'s png picture of that layout and the corresponding source .json
* In `pchr8board_layout`:
	* The last iteration of the mirrored layout I used incl. same assets
	* Older random ones in `./old`
