#include <iostream>

#include "exit/exit.hpp"
#include "cmd/cmd.hpp"

int main(int argc, const char **argv) {
    /*if(hs::os::ends_with((std::string&) "hey", (std::string&) "y")) {
        std::cout << "YY" << std::endl;
    }*/

    hs::cmd::init(argc, argv);

    return 0;
}
