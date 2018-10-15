## Steins;Gate PSP English Patch, aka *topographer*
This is a toolkit for disassembling Steins;Gate PSP version of the game. More specifically, it allows to extract all the game strings (dialogues, tips, UI elements). The goal with this is to make an English patch for the game. The extracted game strings are merged with available [English translation](http://tsuuun.blogspot.com/2012/01/happy-new-year-everyone-and-yeah-its.html) (note, this is not the latest translation available, since all the latest ones have broken links) and are formatted into a readable Atlas Script format. Those are then edited manually, since the merge of the game strings isn't perfect, and some things just have to be formatted manually.

Honestly, you shouldn't bother with how it works, because I already did (well, currently I'm still doing it) everything for you. Final scripts can be found in `atlas-scripts-edit` (not all of them are available right now). The final patch will be posted here once the work is done.

#### ETA
No promises, but let's hope this will be released before the end of 2018.

#### What's left to be done (in order of priority)
- Manually polish up all SG Atlas Scripts. Current progress:
  - Prologue
  - Chapter 1
  - Chapter 2
- Manually fill out DICT (all tips)
- TEST THAT THE GAME WORKS AT THIS POINT
- Manually fill out DATA (character names, phonebook, messages)
- Manually translate UI elements
- Get PC version cutscenes with subtitles, convert them to PMF and replace the current ones
- Figure out a legal way to distribute all this (if I can't solve this one, then Imma just post the finished ISO)

#### Information about files/folders:
- WIP
- `./compile-atlas.bat`: Compiles all of the BINs in `./patch-atlas/data-section1/` with corresponding Atlas scripts in `./patch-atlas/`. This will remove `./patch-atlas/data-section1/` folder and will instead create `./patch-final/` with compiled BIN files. This requires to have `Atlas.exe` in the root folder `./` of the repo
- `./compile-atlas.sh`: haha jokes on you, use `wine cmd` and then run the bat file

#### Shoutouts to other people that were somehow involved in this:
- [Riku](https://gbatemp.net/members/riku.176570/): Made a proof of concept that the translation of the game is possible. Didn't share his Cartographer scripts though, so instead ***TOPOGRAPHER*** happened.
- [Nysek](https://github.com/Nysek/): Attempted to translate the game into English with Riku's tools (and somehow got to SG01_02. How did you do that? Manually???)
- [HoaiTrung97](https://gbatemp.net/members/hoaitrung97.461220/): Idk, you seem cool. Good competition.

#### Important links:
- English translation: [link](http://tsuuun.blogspot.com/2012/01/happy-new-year-everyone-and-yeah-its.html)
- GBATemp thread with my posts: [link](https://gbatemp.net/threads/problem-triying-to-translate-steins-gate-to-spanish.501148/)
- Historical place of this patch: [link](https://github.com/BASLQC/steins-gate-psp-patch)
