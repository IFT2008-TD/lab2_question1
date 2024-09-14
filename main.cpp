#include <iostream>
#include "util.h"
#include "Torniflex.h"

static const int variableGlobale = 42  ;

int main() {


    std::cout << "Variable déclarée globalement:\n" ;
    afficheInfoPointeur(std::cout, &variableGlobale) ;

    int variableLocale = 666 ;
    std::cout << "\n\nVariable locale déclarée dans main: \n" ;
    afficheInfoPointeur(std::cout, &variableLocale) ;

    auto pointeur = new int(2897) ;
    std::cout << "\n\nPointeur allouée dynamiquement avec new: \n" ;
    afficheInfoPointeur(std::cout, pointeur) ;

    auto monTorniflex = new Torniflex ;
    std::cout << "\n\nPointeur à un objet exotique, alloué dynamiquement avec new: \n" ;
    afficheInfoPointeur(std::cout, monTorniflex) ;

    return 0;
}
