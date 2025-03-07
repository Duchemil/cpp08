#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it != container.end())
        return it;
    throw std::out_of_range("Value not found in container");
}

#endif
