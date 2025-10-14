#include "RDV.hpp"
#include <iostream>
#include <string>

int compteur = 0;

RDV::RDV(Date d, Heure h, std::string l) : date(d), heure(h), lieu(l) {
    nb_prtcps = 0;
    liste_prtcps = new std::string[10];
    compteur++;
    
}

RDV::RDV() : date(), heure(), lieu("Inconnu") {
    nb_prtcps = 0;
    liste_prtcps = new std::string[10];
    compteur++;
}

void RDV::affiche() {
    std::cout << "Date: ";
    date.affiche();
    std::cout << "Heure: ";
    heure.affiche();
    std::cout << "Lieu: " << lieu << std::endl;
    std::cout << "Nombre de participants: " << nb_prtcps << std::endl;
    std::cout << "Liste des participants: ";
    for (int i = 0; i < nb_prtcps; i++) {
        std::cout << liste_prtcps[i] << " ";
    }
    std::cout << std::endl;
}


RDV::~RDV() {
    delete[] liste_prtcps;
    compteur--;
}

void RDV::saisieLieu() {
    std::cout << "Entrez le lieu du rendez-vous: ";
    std::cin >> lieu;
}

void RDV::saisieParticipants() {
    std::cout << "Entrez le nombre de participants: ";
    std::cin >> nb_prtcps;
    delete[] liste_prtcps;
    liste_prtcps = new std::string[nb_prtcps];
    for (int i = 0; i < nb_prtcps; i++) {
        std::cout << "Participant " << i + 1 << ": ";
        std::cin >> liste_prtcps[i];
    }
}

void RDV::saisie() {
    date = Date();
    heure = Heure();
    saisieLieu();
    saisieParticipants();
}

void RDV::setDate(const Date& dateRdb) {
    date = dateRdb;
}
void RDV::setHeure(const Heure& h) {
    heure = h;
}
void RDV::setLieu(const std::string& lieuRdv) {
    lieu = lieuRdv;
}
void RDV::setNbPrtcps(int n) {
    nb_prtcps = n;
}
void RDV::setListePrtcps(std::string* ps) {
    delete[] liste_prtcps;
    liste_prtcps = ps;
}

void RDV::setparticipant(int i, std::string s) {
    if (i >= 0 && i < nb_prtcps) {
        liste_prtcps[i] = s;
    }
}















