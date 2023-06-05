#pragma once

#include <vector>
#include <string>

#include <string.h>
#include <stdlib.h>

#define append(__value) \
    push_back(__value)

#define quit \
    hs::exit::code = hs::os::failure; \
    std::cout << hs::exit::msg();     \
    std::exit(os::failure)

namespace hs::os {
    const auto failure = EXIT_FAILURE;
    const auto success = EXIT_SUCCESS;

    void rem_pref(const char* str);
    bool prefix(const char* pre, const char* str);

    bool ends_with(std::string &str, std::string &suf);

    template<typename T>
    std::vector<T> to_vector(T* in);

    std::vector<std::string> to_str_vector(char** __array);
}