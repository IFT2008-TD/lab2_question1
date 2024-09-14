//
// Created by Pascal Charpentier on 2024-09-14.
//


#include "Torniflex.h"

std::string Torniflex::to_string() const {
    std::ostringstream os ;
    os << "Ce torniflex possède " << tracas << " tracas et " << tracaboom << " tracaboom!" ;
    return os.str() ;
}

std::ostream &operator<<(std::ostream &os, const Torniflex &obj) {
    os << obj.to_string() ;
    return os ;
}
