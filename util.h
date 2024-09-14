//
// Created by Pascal Charpentier on 2024-09-14.
//

#ifndef LAB2_QUESTION1_UTIL_H
#define LAB2_QUESTION1_UTIL_H

template <typename T>
std::ostream& afficheInfoPointeur(std::ostream& os, T* pointeur) {
    os << "Adresse: " << pointeur << " Valeur: " << *pointeur ;
    return os ;
}

#endif //LAB2_QUESTION1_UTIL_H
