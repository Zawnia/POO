#include "personne.cpp"
#include <iostream>

int main() {
    Personne p1("Echenique", "Carlos", "7 Square Stalingrad");
    p1.affiche();

    Personne p2;
    p2.setNom("JUGE");
    p2.setPrenom("Alexandre");
    p2.setAdresse("7 Square Stalingrad");
    p2.setTelephone("07.67.87.01.31");
    p2.affiche();

    return 0;
}