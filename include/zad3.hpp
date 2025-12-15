#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
template <typename Sos>
std::size_t polejSosem(const Tagliatelle& t, const Sos& s)
{
    return s.polej(t);
};


//Napisz szablon funkcji który:- sparametryzowany jest jednym typem
//  template <typename Sos>
//zwraca obiekt typu `std::size_t`
//  std::size_t polejSosem
//wynikiem wywołania metody `polej` 2-go argumentu na 1-szym argumencie
//   return s.polej(t);
