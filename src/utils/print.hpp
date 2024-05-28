#pragma once

#include <vector>
#include <iostream>

namespace utils
{
    template<class T>
    void print(const T& e, std::ostream& os)
    {
        os << e << '\t';
    }

    template<class T>
    void print(const std::vector<T>& v, std::ostream& os)
    {
        for (const auto& elem : v)
        {
            print(elem);
        }

        os << '\n';
    }

}


