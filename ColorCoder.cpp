#include "ColorCoder.h"
#include <iostream>

namespace TelCoColorCoder 
{
    int MajorColorsNos = 5;
    int MinorColorNos = 5;

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / MajorColorsNos);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % MinorColorNos);
        return ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * MinorColorNos + minor + 1;
    }
}
