#ifndef COLOR_HEX_HPP
#define COLOR_HEX_HPP

#include "color.hpp"
#include <string>

namespace Color {

Rgb Rgb_from_hex(unsigned int hex);
unsigned int rgb_to_hex_int(const Rgb& color);
Rgb Rgb_from_hex(const std::string& hex);
std::string rgb_to_hex_string(const Rgb& color);

}

#endif