#pragma once

#include <iostream>
#include <string>

#include "../msg/colors.hpp"

namespace hs::exit {
    extern int64_t code;

    std::string msg();
}