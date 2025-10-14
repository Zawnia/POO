#ifndef AGENDA_H
#define AGENDA_H
#include "NoeudRDV.hpp"
#include <iostream>

class Agenda {
    //Cette classe représente un ensemble de rendez-vous sous forme de liste chainée ordonée (suite de NoeudRDV)
    NoeudRDV* premier;

    public :
        Agenda();
        Agenda(const Agenda&); /* Constructeur copie*/
        ~Agenda(); /* Destructeur */
        void ajoute(RDV r); /*ajoute un rendez-vous en respectant l’ordre chronologique basé sur la date*/
        void enleve();
        void affiche();

};

#endif





