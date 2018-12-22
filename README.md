## Steins;Gate PSP English Patch
![](https://haselloyance.github.io/0_SGPSPE/logo.jpg)
*I am not going to lie, this worldline is decent enough. But this patch is going to make it better. El Psy Congroo.*

Steins;Gate was released for PSP in 2011. This version of the game did not get much attention in the west, since it was only available only in Japanese. Until now. I present you the Steins;Gate PSP English Patch. Combined from bits and pieces of other translations for other platforms, it brings the English Steins;Gate experience to the PSP.

#### ✔️ Current version (v0.9)
- Translated story scripts
- Translated DICT (tips)
- Translated phonebook
- Translated phone messages/emails, backgrounds and songs
- Translated backgrounds
- Translated cutscenes\*
\*This doesn't apply to `OPEN3.PMF`, since there is no available replacement from the PC version of the game.

(pretend that each item on the list has "(where applicable)" after it)

#### 🚩 Roadmap
**v1.0.0:**
- Translate UI elements
- Translate phone menus
- Change PSPMENU button UI language
- Fix bugs and inconsistencies
- Find a way to translate menu textures (Clear list, Movie/CG gallery, etc)

**v1.0.x:**
- Fix bugs and inconsistencies

#### 💿 ISO information
Here are the MD5 hashes I ended up with:
- Original ISO: `5ed76b04eac58b0e459bed06108eed74`
- Patched ISO v0.9: `e633145a71669601aac23407df77fec0`

If you don't have the same hashes before and/or after, then it most likely won't work for you.

#### 🔨 Patching options
**.exe** (recommended), created with [VPatch](https://www.tibed.net/vpatch/).
1. Run Windows command prompt.
2. Navigate using `cd` to the folder with the `Steins_Gate_PSP_English_Patch_vX.X.exe` inside it.
3. Run `Steins_Gate_PSP_English_Patch_vX.X.exe <path_to_original_file> <patched_game.iso>`.
4. The program will immediately throw you back into the command prompt. This is normal, it does all the work in the background. You can monitor its progress via Task Manager. Once it is done patching, the process will automatically terminate, leaving you with the ~1.2GB `<patched_game.iso>` file.

**.xdelta** (will be dropped in the future, since it has unbelievably large patch file size).
1. Get and run [Delta Patcher](https://www.romhacking.net/utilities/704/).
2. Select the original ISO and the `Steins_Gate_PSP_English_Patch_vX.X.xdelta` file.
3. Apply the patch.

#### ❌ Bugs/Typos/Crashes
There are plenty of each. That is exactly why there will be future patches with small bugfixes. You can contact me by using the means explained in the "[Contact](https://haselloyance.github.io/#contact)" section on my website. Or, specifically for this patch, the other way is to make a [new issue](https://github.com/HaselLoyance/steins-gate-psp-patch/issues).

I kindly ask you to provide the conditions in which unexpected behavior occurs. Screenshots and references to story text are very welcome. Save data would be even better.

#### 👀 People that made this work
(In the order of their involvement in the project)
- The original toolchain and information: [GitHub](https://github.com/BASLQC/steins-gate-psp-patch) and [BASLQC Wiki](https://en.wikibooks.org/wiki/PSP/Steins_Gate_Translation).
- Riku, the first person to make a proof of concept and to develop a way to inject variable-length strings into the game. Consequently, the author of the above-mentioned toolchain. Their [GBAtemp](https://gbatemp.net/members/riku.176570/) profile and a [thread with related posts](https://gbatemp.net/threads/steins-gate-anyone-familiar-with-this-game-engine.346275/page-2#post-5065600).
- Nysek, motivated me to continue work on my translation once I got the `.BIN` files decompiled/decompressed/extracted into Atlas scripts. Their [GitHub](https://github.com/Nysek/) profile.
 - HoaiTrung97, more motivation for me straight from Japan. Shouted out this translation in one of their own projects. Their [GBAtemp](https://gbatemp.net/members/hoaitrung97.461220/) profile.
- ant08, the source of the English translation. Unfortunately, I did not use their latest available version, since the links to all of them are dead. But hey, it still turned out very good. The [translation files](http://tsuuun.blogspot.com/2012/01/happy-new-year-everyone-and-yeah-its.html) I used and their [blog](http://tsuuun.blogspot.com/).
- CommitteeOfZero, the source of the translated backgrounds, as well as translated/karaoke cutscenes. They have a thing on their [GitHub](https://github.com/CommitteeOfZero) called [sghd-patch](https://github.com/CommitteeOfZero/sghd-patch), which is an improvement over the stock Steam translation of the PC version. Check out their [website](http://sonome.dareno.me/) for more S;G-related projects.
- theryusui, was of a huge help to me with the `.KLZ` compression/decompression. Practically they dug up their 5 year old version of the only decompressor in the entire world. Their [Tumblr](https://theryusui.tumblr.com/) and [Romhacking](https://www.romhacking.net/forum/index.php?action=profile;u=181) profile.

#### 🎥 Video of how this patch was made
Coming at some point in the near future

#### 🖼️ Screenshots
![](https://haselloyance.github.io/0_SGPSPE/pic1.jpg)
![](https://haselloyance.github.io/0_SGPSPE/pic2.jpg)
![](https://haselloyance.github.io/0_SGPSPE/pic3.jpg)
![](https://haselloyance.github.io/0_SGPSPE/pic4.jpg)
![](https://haselloyance.github.io/0_SGPSPE/pic5.jpg)
![](https://haselloyance.github.io/0_SGPSPE/pic6.jpg)

#### ⏬ Downloads
Check [releases](https://github.com/HaselLoyance/steins-gate-psp-patch/releases).

#### ☕ Maybe sponsor my coffee addiction?
If you find my work interesting, then please feel free to sponsor my [coffee addiction](https://buymeacoff.ee/rwly8PutT) that is currently covered entirely by my ever-growing student loans.
