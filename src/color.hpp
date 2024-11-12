#ifndef COLOR_HPP
#define COLOR_HPP

#include <iostream>

namespace Color {

struct Rgb {
    unsigned int red = 0;
    unsigned int green = 0;
    unsigned int blue = 0;

    void display() const;
};

} 

#endif