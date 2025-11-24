#include "listePersonnel.h"
#include <iostream>

ListePersonnel::ListePersonnel()
{
    nb = 0;
    tailleMax = 2; 
    tab = new Personnel*[tailleMax]; 
}

ListePersonnel::~ListePersonnel()
{
    for (int i = 0; i < nb; ++i)
    {
        delete tab[i];
    }
    
    delete[] tab;
}

void ListePersonnel::ajoutPersonnel(Personnel* p)
{
    if (nb >= tailleMax)
    {
        doubleTableau();
    }

    tab[nb] = p;
    nb++;
}

void ListePersonnel::afficherSalaires() const
{
    for (int i = 0; i < nb; ++i)
    {
        std::cout << tab[i]->getPrenom() << " " << tab[i]->getNom() << ": " << tab[i]->calculSalaire() << std::endl; // On remonte carrément au getPrenom de Personne !
    }
}

void ListePersonnel::doubleTableau()
{

    int nouvelleTaille = tailleMax * 2;
    Personnel** nouveauTab = new Personnel*[nouvelleTaille];

    for (int i = 0; i < nb; ++i)
    {
        nouveauTab[i] = tab[i];
    }

    delete[] tab;

    tab = nouveauTab;
    tailleMax = nouvelleTaille;
    
    std::cout << "--> Redimensionnement du tableau : " << tailleMax << " places." << std::endl;
}



