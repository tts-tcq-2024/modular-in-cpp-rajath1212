#include "ColorPair.h"

namespace TelCoColorCoder 
{
      const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    ColorPair::ColorPair(MajorColor major, MinorColor minor): majorColor(major), minorColor(minor) {}

    MajorColor ColorPair::getMajor() {
        return majorColor;
    }
    MinorColor ColorPair::getMinor() {
        return minorColor;
    }
    std::string ColorPair::ToString() {
        std::string colorPairString = MajorColorNames[majorColor];
        colorPairString += " ";
        colorPairString += MinorColorNames[minorColor];
        return colorPairString;
    }
}
