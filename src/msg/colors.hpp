#pragma once

#include <string>

#define RESET 0
#define __operation(__e) \
    __e

#define SUM_OF_NUMS(x, y) \
    __operation(x + y)
    

namespace hs::colors {
    std::string temp(uint32_t code);
    std::string combine(
        std::string (&one)(),
        std::string (&two)());
    
    std::string bold();

    std::string basic_white();
    std::string basic_red();

    std::string red();
    std::string white();
}