#include "lexer.hpp"

using namespace hs::colors;

hs::lexer::lexer::lexer() {
    
}

hs::lexer::lexer::lexer(std::string _path) {
    this->path = _path;
    this->file = std::ifstream(this->path);

    if(!this->path.ends_with(EXT)) {
        std::cerr
            << red()
            << "Compiler: "
            << white()
            << "Not a source file '"
            << this->path
            << "'!"
            << std::endl;
            quit;
    }

    if(!this->file.good()) {
        std::cerr
            << red()
            << "Compiler: "
            << white()
            << "No such file '"
            << this->path 
            << "'"
            << std::endl;

        quit;
    }

    while (getline(this->file, this->line)) {  
        this->code += this->line + "\n";
    }

    std::cout << this->code << std::endl;

    /*std::string test = "cp " + this->path + " ";
    this->path.erase(this->path.size() - 4, this->path.size());
    this->path += ".temp.cpp";
    std::string out = this->path;

    test += out;
    
    std::string clean = "rm -r -f -rf " + out;
    std::string compile = "clang++ -std=gnu++2b -O2 -g -Wall -Werror " + out + " -o a.exe -lm -lstdc++";

    std::system(test.c_str());
    std::system(compile.c_str());
    std::system(clean.c_str()); */

    this->file.close();  
}


void hs::lexer::lexer::add_flag(std::string &_flag) {
    for(std::size_t i = 0; i < FLAG_AMOUNT; ++i) {
        if(this->flags[i].first == _flag)
            this->flags[i] = std::pair<
                std::string, bool>(_flag, true);
    }

    std::cerr 
        << red()
        << "Compiler: "
        << white()
        << "failed to find flag '-"
        << _flag
        << "'"
        << std::endl;

        quit;
}

std::array<
    std::pair<std::string, bool>,
    FLAG_AMOUNT>
    
    hs::lexer::lexer::get_flags() {
    return this->flags;
}