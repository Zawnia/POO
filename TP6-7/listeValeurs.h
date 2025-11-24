#ifndef LISTEVALEUR_H
#define LISTEVALEUR_H

#include "personnel.h"
#include <iostream>

class ListeValeur
{
private:
    // Ici, on stocke les objets complets, pas les adresses contrairement aliste Personnel. De plus j'ai pas fait de liste dynamique la on a une taille fixe
    Personnel tab[100];
    int nb;

public:
    ListeValeur();

    void ajout(const Personnel &p);
    void afficherSalaires() const;
};

#endif