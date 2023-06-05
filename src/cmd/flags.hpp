#pragma once

#include <vector>
#include <string>

#include "../ext/os.hpp"

namespace hs::cmd {
    void seperate(std::vector<std::string>& src, std::vector<std::string> &flag_vector);
}
