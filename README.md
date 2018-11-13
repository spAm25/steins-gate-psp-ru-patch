## Steins;Gate PSP English Patch, aka *topographer*
This is a toolkit for disassembling Steins;Gate PSP version of the game. More specifically, it allows to extract all the game strings (dialogues, tips, UI elements). The goal with this is to make an English patch for the game. The extracted game strings are merged with available [English translation](http://tsuuun.blogspot.com/2012/01/happy-new-year-everyone-and-yeah-its.html) (note, this is not the latest translation available, since all the latest ones have broken links) and are formatted into a readable Atlas Script format. Those are then edited manually, since the merge of the game strings isn't perfect, and some things just have to be formatted manually.

Honestly, you shouldn't bother with how it works, because I already did (well, currently I'm still doing it) everything for you. Final scripts can be found in `atlas-scripts-edited` (not all of them are available right now). The final patch will be posted here once the work is done.

#### ETA
No promises, but let's hope this will be released before the end of 2018.

#### What's done
- PC version cutscenes with rendered subtitles converted to PMF
  * This is actually finished. All cutscenes that require translation (`END_FAKE`, `END_TRUE`, `INSERT01`, `INSERT02`, `INSERT03`, `OPEN`, `OPEN2`. Though I'm not sure if `END_TRUE`, `OPEN` and `OPEN2` require translations, but it doesn't really matter) have been converted from PC version of the game. As far as I know, there are no other cutscenes that require translating, but if there are then I'll get to them later.
  * The process required me to do some **illegal** magic to get to the result, so I'm not going to share the final PMFs in public as single files (if you ever stumble upon this trying to find a way to convert any video file into PMF then shoot me an email, I'll explain it). However, they will be included as a part of the final xdelta patch.
  * [YO GUYS CHECK OUT MY LATEST YOUTUBE VID WHERE I REACT TO THE PATCHED PROLOGUE PMF PLAYING WITHOUT CRASHING ON A REAL PSP. LIKE COMMENT AND SUBSCRIBE XDDDD](https://youtu.be/Ajfok-Eup1w)
- Chapters: 1, 2, 3, 4
- DICT is fully translated (all ingame tips).
- Some text messages in DATA, but not entirely

#### What's left to be done
- Manually polish up all other SG Atlas Scripts.
- TEST THAT THE GAME WORKS AT THIS POINT
- Manually fill out DATA (character names, phonebook, messages)
- Manually translate UI elements
- Distribute this as an xdelta patch file

#### Information about files/folders:
- WIP
- `./compile-atlas.bat`: Compiles all of the BINs in `./patch-atlas/data-section1/` with corresponding Atlas scripts in `./patch-atlas/`. This will remove `./patch-atlas/data-section1/` folder and will instead create `./patch-final/` with compiled BIN files. This requires to have `Atlas.exe` in the root folder `./` of the repo
- `./compile-atlas.sh`: haha jokes on you, use `wine cmd` and then run the bat file

#### Shoutouts to other people that were somehow involved in this:
- [Riku](https://gbatemp.net/members/riku.176570/): Made a proof of concept that the translation of the game is possible. Didn't share his Cartographer scripts though, so instead ***TOPOGRAPHER*** happened.
- [Nysek](https://github.com/Nysek/): Attempted to translate the game into English with Riku's tools (and somehow got to SG01_02. How did you do that? Manually???)


#### Important links:
- English translation: [link](http://tsuuun.blogspot.com/2012/01/happy-new-year-everyone-and-yeah-its.html)
- GBATemp thread with my posts: [link](https://gbatemp.net/threads/problem-triying-to-translate-steins-gate-to-spanish.501148/)
- Historical place of this patch: [link](https://github.com/BASLQC/steins-gate-psp-patch)
