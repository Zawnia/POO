#ifndef LISTEPERSONNEL_H
#define LISTEPERSONNEL_H

#include "personnel.h"

class ListePersonnel
{
private:
    Personnel** tab;
    int nb;          
    int tailleMax;

    void doubleTableau(); 

public:
    ListePersonnel();
    ~ListePersonnel();

    void ajoutPersonnel(Personnel* p);
    void afficherSalaires() const;
    
    int getNb() const { return nb; }
};

#endif
