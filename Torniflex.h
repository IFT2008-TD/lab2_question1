//
// Created by Pascal Charpentier on 2024-09-14.
//

#ifndef LAB2_QUESTION1_TORNIFLEX_H
#define LAB2_QUESTION1_TORNIFLEX_H

#include <iostream>
#include <sstream>

class Torniflex {
public:
    Torniflex() : tracas(42), tracaboom(false) {} ;

    std::string to_string() const ;

    friend std::ostream& operator << (std::ostream& os, const Torniflex& obj) ;

private:
    int tracas ;
    bool tracaboom ;


};


#endif //LAB2_QUESTION1_TORNIFLEX_H
