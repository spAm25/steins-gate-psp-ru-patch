# Tools
Here is the list of tools that were of a good use in the translation process. Beware that some of these might not work for your purposes (eg: AFSExplorer doesn't work for AFS files in Chaos;Head Noah).
- [AFSExplorer](https://gbatemp.net/download/afs-explorer.33237/). GUI tool to modify contents of AFS archives, as well as reserved space for each file. Used extensively with `DATA0.AFS`, since this is the archive with the most important game content (graphics/text).
- [Atlas](https://www.romhacking.net/utilities/224/). "Extensible script insertion utility capable of dealing with scripts of advanced complexity", which is used to compile translated BIN files in `DATA0.AFS/SCENE00.AFS`.
- [KLZTools](http://www.pspx.ru/forum/showthread.php?p=1091355)\*. Tools for unpacking and packing `KLZ` files, which are just compressed `TM2` graphics files.
- [MPStoPMF](http://forums.qj.net/psp-homebrew-hacks-discussion/62219-mps-pmf-converter-tool.html). Converter from `MPS` file (the rendered result from *UMD Stream Composer*) into playable `PMF` cutscene file.
- Optpix ImageStudio\*\*. A graphics editor with great support for color reduction, as well as tons of optimization options. It is mainly used for work with `TM2` graphics files.
- [P2TTools](http://www.pspx.ru/forum/showthread.php?p=1091355)\*. Tools for unpacking and packing `P2T` archives, which contain several compressed `TM2` graphics files.
- [PPSSPP](https://www.ppsspp.org/). PSP emulator used during the development testing, as well as for debugging game code and injected MIPS assembly.
- [RAD Video Tools](http://www.radgametools.com/bnkdown.htm). The PC version of S;G has cutscenes in `bk2` format, so this tool was used to convert (and resize) it without quality loss into raw video and audio footage, to later be used in PMF creation process.
- [topographer](https://github.com/HaselLoyance/criware-tools/tree/master/topographer). A tool for extracting strings from the BIN files of the PSP SciAdv games into Atlas scripts that can be edited in any text editor.
- [SFO Editor](https://sites.google.com/site/theleecherman/sfoeditor). This allows to edit `PARAM.SFO` file with game's metadata. This is not really required, but it's a nice thing to do.
- Sony UMD Stream Composer\*\*. A tool for combining raw video footage and `WAV` audio into `MPS` file. This provides a way of creating cutscene files that are supported by the game.
- [UMDGen](http://www.psx-place.com/threads/umd-gen-4-00.10340/). Tool for repacking PSP game ISOs with proper file layout.
- [VirtualDubMod](http://virtualdubmod.sourceforge.net/) + [VobSub](https://www.videohelp.com/software/VobSub). When used together, this tool and plugin provide an easy way to split audio from raw video footage, as well as to render `ASS` subtitles.
- [VPatch](https://www.tibed.net/vpatch/). Tool for making a final patch file, which is waaay more efficient than xDelta.
- [wxMEdit](https://wxmedit.github.io/). Any hex editor will do, but this is my preference, since it supports lots of encodings, including Shift-JIS. This is used mainly when inspecting files, but the other purpose is to inject MIPS assembly.
- [XnConvert](https://www.xnview.com/en/xnconvert/). This tool is useful for batch conversion of images with variety of settings such as resize, format conversion, etc.

\*This tool was made by RikuKH3, and there is no source code available. Also, in some cases the tool shown to be unstable. Currently, I'm working on writing my own version based on Riku's work, which will be open source [here](https://github.com/HaselLoyance/criware-tools).

\*\*No link available. Normally, you shouldn't even have this program, since it is proprietary software. But, I hope you know how to google properly:
![](https://i.imgur.com/OYxb17x.png)
