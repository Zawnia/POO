#include "enseignantVacataire.h"
#include <iostream>

EnseignantVacataire::EnseignantVacataire(const std::string &nom, const std::string &prenom, const std::string &adresse, const std::string &telephone) : Personnel(nom, prenom, adresse, telephone)
{
    casier = "";
    nbreHeures = 0;
    taux = 0.0f;
}

float EnseignantVacataire::calculSalaire() const
{
    return nbreHeures * taux;
}

void EnseignantVacataire::affiche()
{
    Personnel::affiche();
    std::cout << "Casier: " << casier << ", nbreHeures: " << nbreHeures << ", Taux: " << taux << std::endl;
}

std::string EnseignantVacataire::getcasier() const
{
    return casier;
}

int EnseignantVacataire::getnbreHeures() const
{
    return nbreHeures;
}

float EnseignantVacataire::gettaux() const
{
    return taux;
}

void EnseignantVacataire::setcasier(const std::string &c)
{
    casier = c;
}

void EnseignantVacataire::setnbreHeures(int n)
{
    nbreHeures = n;
}

void EnseignantVacataire::settaux(float t)
{
    taux = t;
}

