#pragma once

#include <string>

namespace hs {
    template<
        typename _One,
        typename _Two> 
    struct pair {
        _One one;
        _Two two;

        pair();
        pair(_One _one, _Two _two);
    };

    using flag_pair = hs::pair<
        std::string,
        bool>;
}