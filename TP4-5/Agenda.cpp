#include "NoeudRDV.hpp"
#include "Agenda.hpp"
#include <iostream>

Agenda::Agenda(){
    premier = nullptr;
}

Agenda::Agenda(const Agenda& autre) {
    /*constructeur copie*/
    premier = nullptr;

    NoeudRDV* current = autre.premier;
    NoeudRDV* temp = current;

    while (current != nullptr) {
        this->ajoute(current->getRdv());
        current = current->getSuivant();
    }
}

void Agenda::ajoute(RDV r){
    NoeudRDV* nouveau = new NoeudRDV(r);
    NoeudRDV* current = premier;

    if (premier == nullptr){
        premier = nouveau;
        return;
    }

    if (estAvant(r.getDate(), premier->getRdv().getDate())) {
        nouveau->setSuivant(premier);
        premier = nouveau;
        return;
    }

    /* Cas quelconque*/
    while (current->getSuivant() != nullptr && estAvant(r.getDate(), current->getSuivant()->getRdv().getDate())) {
        current = current->getSuivant();
    }

    nouveau->setSuivant(current->getSuivant());
    current->setSuivant(nouveau);    
}

void Agenda::affiche(){
    NoeudRDV* current = premier;

    while (current != nullptr) {
        current->getRdv().affiche();
        current = current->getSuivant();
    }
}






