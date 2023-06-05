#include "pair.hpp"

template<
    typename _One,
    typename _Two>
hs::pair<_One, _Two>::pair() {

}

template<
    typename _One,
    typename _Two>
hs::pair<_One, _Two>::pair(_One _one, _Two _two) {
    this->one = _one;
    this->two = _two;
}

/*template<
    typename _One,
    typename _Two>
hs::pair<_One, _Two>::pair(_One &_one, _Two &_two) {
    this->one = _one;
    this->two = _two;
} */