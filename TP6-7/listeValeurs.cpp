#include "listeValeurs.h"

ListeValeur::ListeValeur()
{
    nb = 0;
}

void ListeValeur::ajout(const Personnel &p)
{
    if (nb < 100)
    {
        tab[nb] = p; // Problème de troncature à ce niveau
        nb++;
    }
    else
    {
        std::cout << "Erreur : Liste de valeurs pleine." << std::endl;
    }
}

void ListeValeur::afficherSalaires() const
{
    for (int i = 0; i < nb; ++i)
    {
        // Le compilateur appelle donc Personnel::calculSalaire() (qui renvoie juste le salaire de base, la partie fixe) car il ne peut pas accéder au calculSalaire des classes filles 'Admin' ou 'Vacataire' car l'objet est 'tronqué'.
        std::cout << tab[i].getNom() << " " << tab[i].getPrenom() << " : " << tab[i].calculSalaire() << " euros" << std::endl;
    }
}