#include "listePersonnel.h"
#include <iostream>

ListePersonnel::ListePersonnel()
{
    nb = 0;
}

ListePersonnel::~ListePersonnel()
{
    for (int i = 0; i < nb; ++i)
    {
        delete tab[i];
    }
}

void ListePersonnel::ajoutPersonnel(Personnel *ptPersonnel)
{
    if (nb < 100)
    {
        tab[nb] = ptPersonnel;
        nb++;
    }
    else
    {
        std::cout << "La liste de personnel est pleine." << std::endl;
    }
}

void ListePersonnel::afficherSalaires() const
{
    for (int i = 0; i < nb; ++i)
    {
        std::cout << tab[i]->getPrenom() << " " << tab[i]->getNom() << ": " << tab[i]->calculSalaire() << std::endl; // On remonte carrément au getPrenom de Personne !
    }
}
