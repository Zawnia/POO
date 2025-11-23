#include "personnelAdmin.h"
#include <iostream>

PersonnelAdmin::PersonnelAdmin(const std::string &nom, const std::string &prenom, const std::string &adresse, const std::string &telephone) : Personnel(nom, prenom, adresse, telephone)
{
    heureSup = 0;
    taux = 0.0f;
}

float PersonnelAdmin::calculSalaire() const
{
    return salaire + (heureSup * taux);
}

void PersonnelAdmin::affiche()
{
    Personnel::affiche();
    std::cout << "Heures Supplémentaires: " << heureSup << ", Taux: " << taux << std::endl;
}

float PersonnelAdmin::getTaux() const
{
    return taux;
}

int PersonnelAdmin::getHeureSup() const
{
    return heureSup;
}

void PersonnelAdmin::setHeureSup(int hs)
{
    heureSup = hs;
}

void PersonnelAdmin::setTaux(float t)
{
    taux = t;
}



