### SO YOU WANT TO MAKE A TRANSLATION PATCH FOR STEINS;GATE PSP?? 
# **ME TOO. GREAT. MEET *TOPOGRAPHER*. BECAUSE I DON'T KNOW HOW TO USE CARTOGRAPHER AND I'M GOOD AT NAMING THINGS.**
Please, read the actual code in `topographer.cpp`. Comments are the key, because they explain a lot about how all of this works and its limitations. There really is no need for me to retype it

#### Info about building and stuff
I made this on Linux, so I really don't guarantee that it will compile on Windows, but it should. On Linux just run `make build` to build the `topographer.run`.

But just to be safe I've also included already compiled Atlas scripts in the `patch-atlas` directory. That way you don't have to build *topographer*. But still, I strongly recommend to read the source code so that you understand what's going on

#### Information about files/folders:
- `./translation-data/`: Folder with translation files. Right now there are English files from [this](http://www.mediafire.com/file/9tm4tf8b8nu1p79/SG01_04_12.rar#) archive. Not implemented as the actual part of the *topographer* yet.
- `./translation-strings/: Folder with processed translation files. Basically leaves only strings and names of characters. These strings can be put into the Atlas scripts
- `./original-data/`: Folder with game's original BINs (not all of them are used, again, see comments)
- `./patch-atlas/`: Folder with compiled Atlas scripts (with pointers from Section 1 and Japanese strings from Section 2) with Japanese strings
- `./patch-atlas/data-section1/`: Folder with modified game's BINs so that they only contain Section 1. These are to be used with Atlas compiler together with scripts
- `./compile-atlas.bat`: Compiles all of the BINs in `./patch-atlas/data-section1/` with corresponding Atlas scripts in `./patch-atlas/`. This will remove `./patch-atlas/data-section1/` folder and will instead create `./patch-final/` with compiled BIN files. This requires to have `Atlas.exe` in the root folder `./` of the repo
- `./compile-atlas.sh`: haha jokes on you, use `wine cmd` and then run the bat file
- `./patch-final/`: Folder where Atlas-compiled BIN files are stored
- `./patch-final-check-hash.sh`: As of right now it can be used after running `compile-atlas.bat` to check that Atlas scripts compiled into the exactly same BINs as the original Japanese ones

#### Sample output of the `./patch-final-check-hash.sh` with unchanged Atlas scripts:
```
Hash c2ea9050449a9aa88fde296e22adb097 for CLRFLG is valid
Hash fcfc3f3f9813b47fbe133cec4338007a for DATA is valid
Hash 5463b9db8cd6dbc971a0d22d259dfd84 for DBG00 is valid
...
...
...
Hash 3401380e3ea1311627349b0f6e25da34 for SG11_08 is valid
```
*(this means that the BIN files are extracted, mapped, and packaged back properly)*

#### See more important things about this:
- Active GBATemp thread with my posts: [link](https://gbatemp.net/threads/problem-triying-to-translate-steins-gate-to-spanish.501148/)
- Historical place of this patch: [link](https://github.com/BASLQC/steins-gate-psp-patch)
