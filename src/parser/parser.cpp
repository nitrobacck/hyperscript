#include "parser.hpp"

hs::parser::parser::parser(hs::lexer::lexer &_lex) {
    for(std::size_t i = 0; i < _lex.get_flags().size(); ++i) {
        if(_lex.get_flags()[i].second == true) {
            
        }
    }
}