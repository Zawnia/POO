#include "personnel.h"
#include <iostream>

Personnel::Personnel(const std::string &nom, const std::string &prenom, const std::string &adresse, const std::string &telephone) : Personne(nom, prenom, adresse, telephone)
{
    salaire = 0.0f;
}

float Personnel::calculSalaire()
{
    return salaire;
}

void Personnel::setSalaire(float sal)
{
    salaire = sal;
}

float Personnel::getSalaire() const
{
    return salaire;
}

void Personnel::affiche() const
{
    Personne::affiche();
    std::cout << "Salaire: " << salaire << std::endl;
}

