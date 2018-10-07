///////////////////////////////////////////////////////////////
//                                                           //
//   Types.h                                                 //
//   HaselLoyance 2018, Unlicense                            //
//   https://github.com/HaselLoyance/steins-gate-psp-patch   //
//                                                           //
///////////////////////////////////////////////////////////////

#ifndef TOPOGRAPHER_TYPES_H
#define TOPOGRAPHER_TYPES_H

#include <vector>
#include <string>

namespace topographer
{
    // Specific type for byte arrays, since they are used instead
    //   of the usual string type.
    typedef std::vector<uint8_t> BArr;

    // Number of bits per pointer, can be either 16 or 32. It is
    //   adjusted automatically in order to generate proper Atlas
    //   scripts with the correct pointer size.
    enum PointerSz
    {
        psz16b = 16,
        psz32b = 32,
    };

    // The encoding rule is any line in the encoding table. For
    //   example the rule "1337=<NICE>".
    //   szOriginal, size_t, size of the original byte sequence
    //   szReplacement, size_t, size of the replacement string
    //   original, BArr, original byte sequence to look for ("0x13 0x37")
    //   replacement, BArr, string to replace original byte
    //     sequence with ("<LEET>")
    struct EncodingRule
    {
        size_t szOriginal;
        size_t szReplacement;
        BArr original;
        BArr replacement;
    };

    // A string in the game. Can be used for any language. For
    //   example the string "text<END>".
    //   szData, size_t, size of the string data
    //   szEnding, size_t, size of the string ending
    //   data, BArr, the data of the string ("text" in byte array form)
    //   ending, BArr, the ending of the string ("<END>" in byte array form)
    struct GameString
    {
        size_t szPre;
        size_t szData;
        size_t szPost;
        BArr pre;
        BArr data;
        BArr post;
        bool __flag = false;
    };

    // An index that stores the position of the key string
    //   when mapping key strings and inner strings. A key string
    //   is any string that starts with '【' (basically a dialog). An
    //   inner string is any other string between current key and the
    //   next key. Used mainly in the StringList class.
    //   index, size_t, the index of the key string in all the strings
    //   numInnerStrings, uint8_t, number of inner strings of the key
    struct KeyIndex
    {
        size_t index = 0;
        uint8_t numInnerStrings = 0;
    };

    // Pointer data that is used when mapping strings and
    //   writing Atlas scripts.
    //   address, uint32_t, the actual address of the pointer. The
    //     writing location in the Atlas script
    //   stringAddress, uint32_t, the address of the beginning of
    //     the string this pointer normally (in the Japanese game)
    //     associates with
    struct Pointer
    {
        uint32_t address;
        uint32_t stringAddress;
    };

    // Names of files that are required to be processed
    const std::vector<std::string> BIN_FILES = {
        "CLRFLG", "DATA", "DBG00", "DBG02", "DBG03", "DICT", "DMENU", "DMENU2" ,
        "DMENU4", "DMENU5", "DMENU6", "MAIN00", "SG00_01", "SG01_01", "SG01_02", "SG01_03",
        "SG01_04", "SG01_05", "SG01_06", "SG01_07", "SG01_08", "SG01_09", "SG01_10", "SG01_11",
        "SG01_12", "SG01_13", "SG02_01", "SG02_02", "SG02_03", "SG02_05", "SG02_06", "SG02_07",
        "SG02_08", "SG02_09", "SG02_10", "SG02_11", "SG02_12", "SG02_13", "SG02_14", "SG02_15",
        "SG02_16", "SG02_17", "SG02_18", "SG02_19", "SG03_01", "SG03_02", "SG03_03", "SG03_04",
        "SG03_05", "SG03_06", "SG03_07", "SG03_08", "SG03_09", "SG03_10", "SG03_11", "SG03_12",
        "SG03_13", "SG03_14", "SG04_01", "SG04_02", "SG04_03", "SG04_04", "SG04_05", "SG04_06",
        "SG04_07", "SG04_08", "SG04_09", "SG04_10", "SG04_11", "SG04_12", "SG04_13", "SG04_14",
        "SG04_15", "SG04_16", "SG04_17", "SG04_18", "SG04_19", "SG04_20", "SG04_21", "SG04_22",
        "SG04_23", "SG04_24", "SG04_25", "SG05_01", "SG05_02", "SG05_03", "SG05_04", "SG05_05",
        "SG05_06", "SG05_07", "SG05_08", "SG05_09", "SG05_10", "SG05_11", "SG05_12", "SG05_13",
        "SG05_14", "SG05_15", "SG05_16", "SG05_17", "SG06_01", "SG06_02", "SG06_03", "SG06_04",
        "SG06_05", "SG06_06", "SG06_07", "SG06_08", "SG06_09", "SG06_10", "SG06_11", "SG06_12",
        "SG06_13", "SG06_14", "SG06_15", "SG06_16", "SG06_17", "SG06_18", "SG06_19", "SG06_20",
        "SG06_21", "SG06_22", "SG06_23", "SG06_24S", "SG06_25S", "SG07_01", "SG07_02", "SG07_03",
        "SG07_04", "SG07_05", "SG07_06", "SG07_07", "SG07_08", "SG07_09", "SG07_10", "SG07_11",
        "SG07_12", "SG07_13", "SG07_14F", "SG07_15F", "SG07_16F", "SG08_01", "SG08_02", "SG08_03",
        "SG08_04", "SG08_05", "SG08_06", "SG08_07", "SG08_08", "SG08_09", "SG08_10", "SG08_11",
        "SG08_12", "SG08_13R", "SG08_14R", "SG09_01", "SG09_02", "SG09_03", "SG09_04", "SG09_05",
        "SG09_06", "SG09_07", "SG09_08", "SG09_09", "SG09_10", "SG09_11", "SG09_12", "SG10_01",
        "SG10_02", "SG10_03", "SG10_04", "SG10_05M", "SG10_06M", "SG10_07M", "SG10_08M", "SG10_09M",
        "SG10_10C", "SG10_11C", "SG10_12C", "SG11_01", "SG11_02", "SG11_03", "SG11_04", "SG11_05",
        "SG11_06", "SG11_07", "SG11_08"
    };
}

#endif
