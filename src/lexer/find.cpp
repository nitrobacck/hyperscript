#include "find.hpp"

template<typename _Tp, std::size_t _Nm>
std::size_t hs::find(std::array<_Tp, _Nm> &_arr, _Tp _ele) {
    for(size_t i = 0; i < _Nm; ++i) {
        if(_arr[i] == _ele) return i;
    }

    return _Nm + 1;
}