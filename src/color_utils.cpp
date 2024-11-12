#include "color_utils.hpp"

namespace ColorUtils {

Color::Rgb mix(const Color::Rgb& color1, const Color::Rgb& color2) {
    Color::Rgb result;
    result.red = (color1.red + color2.red +1 ) / 2;
    result.green = (color1.green + color2.green + 1) / 2;
    result.blue = (color1.blue + color2.blue + 1) / 2;
    return result;
}

float luminance(const Color::Rgb& color) {
    float red = color.red / 255.0f;
    float green = color.green / 255.0f;
    float blue = color.blue / 255.0f;
    return 0.2126f * red + 0.7152f * green + 0.0722f * blue;
}

Color::Rgb invert(const Color::Rgb& color) {
    Color::Rgb result;
    result.red = 255 - color.red;
    result.green = 255 - color.green;
    result.blue = 255 - color.blue;
    return result;
}

Color::Rgb grayscale(const Color::Rgb& color) {
    float lum = luminance(color) * 255;
    Color::Rgb result;
    result.red = result.green = result.blue = static_cast<unsigned int>(lum);
    return result;
}

}
