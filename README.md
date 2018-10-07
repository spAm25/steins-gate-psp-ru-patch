## Steins;Gate PSP English Patch, aka *topographer*
Description is WIP, since I've changed so much

#### Info about building and stuff
I made this on Linux, so I really don't guarantee that it will compile on Windows, but it should. On Linux just run `make build` to build the `topographer.run`.

But just to be safe I've also included already compiled Atlas scripts in the `atlas-script` directory. That way you don't have to build *topographer*

#### Information about files/folders:
- WIP
- `./compile-atlas.bat`: Compiles all of the BINs in `./patch-atlas/data-section1/` with corresponding Atlas scripts in `./patch-atlas/`. This will remove `./patch-atlas/data-section1/` folder and will instead create `./patch-final/` with compiled BIN files. This requires to have `Atlas.exe` in the root folder `./` of the repo
- `./compile-atlas.sh`: haha jokes on you, use `wine cmd` and then run the bat file

#### Shoutouts to other people that were somehow involved in this:
- [Riku](https://gbatemp.net/members/riku.176570/): Made a proof of concept that the translation of the game is possible. Didn't share his Cartographer scripts though, so instead ***TOPOGRAPHER*** happened.
- [Nysek](https://github.com/Nysek/Steins-Gate-PC-Text-to-PSP): Attempted to translate the game into English with Riku's tools (and somehow got to SG01_02. How did you do that? Manually???)
- [HoaiTrung97](https://gbatemp.net/members/hoaitrung97.461220/): Idk, you seem cool. Good competition.

#### Important links:
- GBATemp thread with my posts: [link](https://gbatemp.net/threads/problem-triying-to-translate-steins-gate-to-spanish.501148/)
- Historical place of this patch: [link](https://github.com/BASLQC/steins-gate-psp-patch)
