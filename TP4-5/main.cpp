#include <iostream>
#include "Date.cpp"
#include "Heure.cpp"
#include "RDV.cpp"

int main() {

    Date d = Date();
    d.affiche();

    RDV rendezvous = RDV();
    rendezvous.saisie();
    rendezvous.affiche();

    return 0;
}

