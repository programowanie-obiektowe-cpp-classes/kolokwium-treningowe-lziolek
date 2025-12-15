#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne: public Makaron
{
    public:
    double ileMaki(unsigned P) const override
    {
        return P;
    }
};
// tutaj definicja metody gotujMakaron
Makaron *Makaron::gotujMakaron(const std::string& a)
{
    if(a.front()==a.back()){return new Tagliatelle{3.14, 0.42, 0.1};}
    else return new Penne;
};

//dynamicznie alokuje pod zwracanym adresem obiekt typu `Penne`
//  return new Penne;