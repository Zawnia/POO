#ifndef NOEUD_RDV_H
#define NOEUD_RDV_H

#include "RDV.hpp"


class NoeudRDV {

    RDV rdv;
    NoeudRDV* suivant = nullptr; /*Réponse à la question 1.1*/

    public :

    NoeudRDV(RDV r);
    NoeudRDV(RDV r, NoeudRDV* s);

    RDV getRdv();
    NoeudRDV* getSuivant();
    void setRdv(RDV r);
    void setSuivant(NoeudRDV* s);   

};

#endif

