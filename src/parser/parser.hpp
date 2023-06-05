#pragma once

#include "../lexer/lexer.hpp"

namespace hs::parser {
    class parser {
        public:
            parser(hs::lexer::lexer &_lex);
    };
}