#include <iostream>
#include <string>
#include "color.hpp"
#include "color_hex.hpp"
#include "color_utils.hpp"

int main() {
    std::string hex1, hex2;
    hex1 = "#ff0000";
    hex2 = "#0000ff";

    Color::Rgb color1 = Color::Rgb_from_hex(hex1);
    Color::Rgb color2 = Color::Rgb_from_hex(hex2);

    Color::Rgb mixedColor = ColorUtils::mix(color1, color2);

    float luminance = ColorUtils::luminance(mixedColor);
    Color::Rgb invertedColor = ColorUtils::invert(mixedColor);

    std::cout << "Mixed color (RGB): ";
    mixedColor.display();
    std::cout << "Mixed color (Hex): #" << Color::rgb_to_hex_string(mixedColor) << std::endl;
    std::cout << "Luminance: " << luminance << std::endl;
    std::cout << "Inverted color (RGB): ";
    invertedColor.display();
    std::cout << "Inverted color (Hex): #" << Color::rgb_to_hex_string(invertedColor) << std::endl;

    auto graycolor = ColorUtils::grayscale(mixedColor);
    std::cout << "Grayscale color (RGB): " << graycolor.red << ", " << graycolor.green << ", " << graycolor.blue << std::endl;
    return 0;
}