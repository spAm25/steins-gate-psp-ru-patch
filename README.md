## Steins;Gate PSP English Patch, aka *topographer*
This is a toolkit for disassembling Steins;Gate PSP version of the game. More specifically, it allows to extract all the game strings (dialogues, tips, UI elements). The goal with this is to make an English patch for the game. The extracted game strings are merged with available English translation and are formatted into a readable Atlas Script format. Those are then edited manually, since the merge of the game strings isn't perfect, and some things just have to be formatted manually.

Honestly, you shouldn't bother with how it works, because I already did (well, currently I'm still doing it) everything for you. Final scripts can be found in `atlas-scripts-edited` (not all of them are available right now). The final patch will be posted here once the work is done.

#### ETA
This will be finished until the end of 2018. I'll make multiple releases, for each of which there will be a choice of either PPF or xDelta methods of patching:
- 0.9 Will contain the translated game, PMFs, backgrounds, DATA and DICT.
- 1.0 Will add on the translated MENU, since that would require manual translation and isn't really a priority
- THIS IS THE POINT WHERE PLAYTESTING WILL BE OF UTMOST IMPORTANCE
- 1.x Will contain all the fixes after the playtesting (and will come around probably already in 2019)

#### What's done
- **All** PSP cutscenes were replaced by the PC alternative, if such were available. During convertion from BK2 to PMF the karaoke subtitles were rendered where applicable. [PMF Demo video](https://youtu.be/Ajfok-Eup1w). [PMF Demo Screenshots](https://imgur.com/a/jLgQBn7). 27 changed cutscenes in total.
- Backgrounds that are translated in sghd-patch were converted into TM2 and placebo-compressed into KLZ. [BG Demo Screenshots](https://imgur.com/a/WbzkVT0) 41 changed backgrounds in total.
- All text lines in all chapters. Finally
- DICT, that is, all in-game tips
- 99% of strings in DATA (messages, RaiNet plot, character names, @chan posts). There are some strings that are left in Japanese until I discover where they appear in the game.

#### What's left to be done
- Release 0.9 to testers. Acquire as many bug info as possible
- Manually translate UI elements (DMENU, DMENU2, DMENU4, DMENU5, DMENU6)
- Possible translate DBG files if they are needed (DBG00, DBG02, DBG03)
- Fix translation bugs from testers' feedback
- Release 1.0
- Write detailed documentation and FAQ about this project (or make a video lmao)

#### Links to things and people in the order of their involvement/appearance:
- Historical place of this patch: [GitHub](https://github.com/BASLQC/steins-gate-psp-patch), [wiki page](https://en.wikibooks.org/wiki/PSP/Steins_Gate_Translation)
- Riku, the first person to make a PoC: [GBAtemp](https://gbatemp.net/members/riku.176570/)
- Nysek, motivated me to continue the translation: [GitHub](https://github.com/Nysek/)
- HoaiTrung97, more motivation straight from Japan: [GBAtemp](https://gbatemp.net/members/hoaitrung97.461220/)
- ant08, the source of English translation: [Translation](http://tsuuun.blogspot.com/2012/01/happy-new-year-everyone-and-yeah-its.html), [Blog](http://tsuuun.blogspot.com/)
- CommitteeOfZero, source of the subtitles for cutscenes, as well as translated backgrounds: [shgd-patch](https://github.com/CommitteeOfZero/sghd-patch), [GitHub](https://github.com/CommitteeOfZero), [Website](http://sonome.dareno.me/)
- theryusui, help with decompressing/placebo-compressing KLZ files: [Tumblr](https://theryusui.tumblr.com/), [ROMhacking](https://www.romhacking.net/forum/index.php?action=profile;u=181)

yo, if I forgot someone, or if you want me change something about you here, just email me or create a github issue.
