#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle

template<typename it>
void sortujTagliatelle(it first, it last)
{
    std::sort(first,last,[](const Tagliatelle& a, const Tagliatelle& b)
    {return a.ileMaki(1)>b.ileMaki(1);});
};

//sortuje elementy zakresu zgodnie z malejącą wartością zwracaną przez metodę `ileMaki`
//  std::sort(first,last,[](const Tagliatelle& a, const Tagliatelle& b)
//    {return a.ileMaki(1)>b.ileMaki(1);});