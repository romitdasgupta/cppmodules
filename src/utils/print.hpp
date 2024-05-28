#pragma once

#include <vector>
#include <iostream>

namespace utils
{
    template<class T>
    void print(const T& e)
    {
        std::cout << e << '\t';
    }

    template<class T>
    void print(const std::vector<T>& v)
    {
        for (const auto& elem : v)
        {
            print(elem);
        }

        std::cout << '\n';
    }

}


