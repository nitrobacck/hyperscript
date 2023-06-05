#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "../msg/colors.hpp"
#include "../ext/os.hpp"

namespace hs::cmd::argc {
    void init(const int &argc);
}

namespace hs::cmd::argv {
    void init(std::vector<std::string> args);
}

namespace hs::cmd {
    void init(const int &argc, const char** argv);
}
