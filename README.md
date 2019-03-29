# Pchr8board
This is a heavily modified Dvorak version of Mirrorboard by Randall Munroe. 
A better description can be found on [the project's page](https://www.pchr8.net/blog/english/it/projects/2019/03/26/Pchr8board-dvorak.html) on my website.

[[https://github.com/pchr8/dvorak_mirrorboard/blob/master/keyboard-layout.png|alt=pchr8board]]

## How to use
Copy the file `pchr8board` to you systems' key definitions directory, in my case it was `/usr/share/X11/xkb/symbols/`. Then you can activate it with `setxkbmap pchr8board` or however you set your layouts.

## What else does the repo contain?
In `own_layouts/` I have the layouts I currently use. 
* `ruua` is a mixed Ukrainian/Russian layout with some key locations I like a bit more.
* `left3` and `umlauted` are my current English Dvorak layouts. The first one has basic definitions mostly similar to `pchr8board`, and `umlauted` has some changes I find useful for me, like umlauts in place of some left-hand mirrorboard keys (that are accessible with `Shift+Alt+$key` still).
