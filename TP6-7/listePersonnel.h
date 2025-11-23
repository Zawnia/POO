#ifndef LISTEPERSONNEL_H
#define LISTEPERSONNEL_H
#include "personnel.h"

class ListePersonnel
{
    // Cette classe représente une liste de personnel.

private:
    Personnel *tab[100];
    int nb; // nombre d’employés ajoutés à la liste (entre 0 et 100)

public:
    ListePersonnel();
    ~ListePersonnel();

    void ajoutPersonnel(Personnel *ptPersonnel);
    void afficherSalaires() const; // affiche les noms et les salaires de tous les ´el´ements de la liste.
};
#endif