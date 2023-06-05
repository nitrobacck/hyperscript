#include "flags.hpp"

void hs::cmd::seperate(std::vector<std::string> & src, std::vector<std::string> &flag_vector) {
    for(size_t i = 0; i < src.size(); ++i) {
        if(src[i].starts_with("-")) {
            src[i].erase(0, 1);
            flag_vector.push_back(src[i]);
        }
    }
}
