#ifndef COLOR_UTILS_HPP
#define COLOR_UTILS_HPP

#include "color.hpp"

namespace ColorUtils {

Color::Rgb mix(const Color::Rgb& color1, const Color::Rgb& color2);
float luminance(const Color::Rgb& color);
Color::Rgb invert(const Color::Rgb& color);
Color::Rgb grayscale(const Color::Rgb& color);

} 

#endif