#include "exit.hpp"

int64_t hs::exit::code = 0;

std::string hs::exit::msg() {
    return (std::string)(
        "returned code "
        + hs::colors::bold()
        + std::to_string(hs::exit::code)
        + hs::colors::white()
        + "."
        + "\n");
}