#include <iostream>
#include "Date.cpp"
#include "Heure.cpp"
#include "RDV.cpp"

int main() {

    Date d = Date();
    d.affiche();

    RDV rendezvous = RDV();
    RDV rendezvous2 = RDV(Date(15, 10, 2023), Heure(14, 30), "Bureau");
    rendezvous.saisie();
    rendezvous.affiche();

    est_compatible(rendezvous, rendezvous2);

    return 0;
}

