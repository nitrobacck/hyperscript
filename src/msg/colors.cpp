#include "colors.hpp"

std::string hs::colors::temp(uint32_t code) {
    return (std::string)("\033[" + std::to_string(code) + "m");
}

std::string hs::colors::combine(std::string (&one)(), std::string (&two)()) {
    return SUM_OF_NUMS((one)(), (two)());
}

std::string hs::colors::bold() {
    return hs::colors::temp(1);
}

std::string hs::colors::basic_white() {
    return hs::colors::temp(RESET);
}

std::string hs::colors::basic_red() {
    return hs::colors::temp(31);
}

std::string hs::colors::red() {
    return hs::colors::combine(
        hs::colors::bold,
        hs::colors::basic_red
    );
}

std::string hs::colors::white() {
    return hs::colors::basic_white();
}