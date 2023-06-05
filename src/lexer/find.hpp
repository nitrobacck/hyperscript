#pragma once

#include <algorithm>
#include <array>
#include <string>

namespace hs {
    template<typename _Tp, std::size_t _Nm>
    std::size_t find(std::array<_Tp, _Nm> &_arr, _Tp _ele);
}