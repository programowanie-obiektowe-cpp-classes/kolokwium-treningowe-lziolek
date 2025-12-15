#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle> tt)
{
    
    
    //auto ttr=tt;
   // std::reverse(ttr.begin(),ttr.end());
    double M=0;
    size_t i=1u;
   // for(const auto& p:ttr)
   // {
   //     M+=p.ileMaki(i++);
  //  };
    for(auto p=tt.crbegin();p!=tt.crend();++p){M+=p->ileMaki(i++);};
    if(M>100){throw 10;}
    else if(M>50){throw 5.5;}
    else return M;      
};