#include "os.hpp"

void hs::os::rem_pref(const char* str) {
    str += 1;
}

bool hs::os::prefix(const char* pre, const char* str) {
    return strncmp(pre, str, strlen(pre)) == 0;
}

bool hs::os::ends_with(std::string &str, std::string &suf) {
    if(str.length() < suf.length()) return false;
    return str.compare(str.length() - suf.length(), suf.length(), suf) == 0;
}

template<typename T>
std::vector<T> hs::os::to_vector(T* in) {
    std::vector<T> res;
    for(size_t i = 0; i != sizeof(in); ++i) {
        res.push_back(in[i]);
    }

    return res;
}

std::vector<std::string> hs::os::to_str_vector(char** __array) {
    std::vector<std::string> res;
    for(size_t i = 0; i < sizeof __array; ++i) {
        res.push_back(__array[i]);
    }

    return res;
}