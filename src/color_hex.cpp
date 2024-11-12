#include "color_hex.hpp"
#include <sstream>
#include <iomanip>

namespace Color {

Rgb Rgb_from_hex(unsigned int hex) {
    Rgb color;
    color.red = ((hex >> 16) & 0xFF);
    color.green = ((hex >> 8) & 0xFF);
    color.blue = ((hex) & 0xFF);
    return color;
}

unsigned int rgb_to_hex_int(const Rgb& color) {
    return (color.red << 16) | (color.green << 8) | color.blue;
}

Rgb Rgb_from_hex(const std::string& hex) {
    unsigned int hex_value;
    std::stringstream ss;
    if (hex[0] == '#') {
        ss << std::hex << hex.substr(1);
    } else {
        ss << std::hex << hex;
    }

    if (!(ss >> hex_value)) {
        return Rgb{0, 0, 0};
    }
    
    return Rgb_from_hex(hex_value);
}


std::string rgb_to_hex_string(const Rgb& color) {
    std::stringstream ss;
    ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(color.red)
       << std::setw(2) << std::setfill('0') << static_cast<int>(color.green)
       << std::setw(2) << std::setfill('0') << static_cast<int>(color.blue);
    return ss.str();
}

}
