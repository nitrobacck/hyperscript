#include "cmd.hpp"
#include "../lexer/lexer.hpp"
#include <cstddef>
#include <string>

using namespace hs::colors;
using namespace hs::os;

void hs::cmd::argc::init(const int &argc) {
    if(argc == 1) {
        std::cout
            << bold() 
            << "compiler: "
            << red()
            << "error: "
            << white()
            << "no input commands!"
            << std::endl;
        quit;
    }
}

void hs::cmd::argv::init(std::vector<std::string> args) {
    //std::vector<std::string> argv(std::begin(args), std::end(args));
    std::vector<std::string> flags;

    /*for(std::size_t i = 0; i < args.size(); ++i) {
        if(args[i].starts_with("-")) {

        }
    } */

    hs::cmd::seperate(args, flags);
    
    hs::lexer::lexer lex;

    for(std::size_t i = 0; i < flags.size(); ++i)
        lex.add_flag(flags[i]);

    lex = hs::lexer::lexer(args[1]);
}

void hs::cmd::init(const int &argc, const char** argv) {
    hs::cmd::argc::init(argc);

    hs::cmd::argv::init(std::vector<std::string>(argv, argv + argc));
}
