#include "NoeudRDV.hpp"
#include <iostream>
#include "RDV.hpp"


NoeudRDV::NoeudRDV(RDV r) {
    rdv = r;
    suivant = nullptr;
}

NoeudRDV::NoeudRDV(RDV r, NoeudRDV* s) {
    rdv = r;
    suivant = s;
}

RDV NoeudRDV::getRdv() {
    return rdv;
}

NoeudRDV* NoeudRDV::getSuivant() {
    return suivant;
}

void NoeudRDV::setRdv(RDV r) {
    rdv = r;
}

void NoeudRDV::setSuivant(NoeudRDV* s) {
    suivant = s;
}









