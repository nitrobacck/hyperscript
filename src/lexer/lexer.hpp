#pragma once

#include <iostream>
#include <algorithm>
#include <array>
#include <fstream>
#include <ios>
#include <iosfwd>

#include "find.hpp"
#include "pair.hpp"

#include "../msg/colors.hpp"
#include "../ext/config.h"
#include "../ext/os.hpp"
#include "../cmd/flags.hpp"
#include "../exit/exit.hpp"

namespace hs::lexer {
    class lexer {
        private:
            std::string path, line, code;
            std::ifstream file;
            std::array<std::pair<std::string, bool>, FLAG_AMOUNT> flags = {
                std::pair("g", au), /* Debug */
                std::pair("O", au)  /* Optimisation */
            };

            std::vector<std::string> incs = { std_inc };

        public:
            lexer();
            lexer(std::string _path);
            
            void add_flag(std::string &_flag);
            std::array<std::pair<std::string, bool>, FLAG_AMOUNT> get_flags();
    };
}