#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
class Makaron
{
    public:
    virtual ~Makaron() =default;
    virtual double ileMaki(unsigned) const =0;
    static Makaron* gotujMakaron(const std::string& a);

};
// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle: public Makaron
{
    public:
    Tagliatelle(double l, double w,double r){L=l; W=w; R=r;}
    Tagliatelle(){L=0.5; W=0.5; R=0.5;}

    double ileMaki(unsigned P) const override
    {
        return P*L*W*(1.-R)*C;
    }
    private:
    double L;
    double W;
    double R;
    static const double C;
};



//prywatne statyczne pole `const double C` 
//  private: static const double C;
//Zmodyfikuj `Tagliatelle` tak, aby klasa ta 
//dziedziczyła publicznie po `Makaron` i nadpisywała odpowiednią metodę
//  class Tagliatelle: public Makaron
//  double ileMaki(unsigned P) const override
//Dodaj do klasy `Makaron` publiczną statyczną metodę `gotujMakaron`, która:
//-przyjmuje przez stałą referencję jeden argument typu `std::string`
//-zwraca wskaźnik do obiektu typu `Makaron`
//  static Makaron* gotujMakaron(const std::string& a); &!!!!
