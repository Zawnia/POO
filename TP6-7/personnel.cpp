#include "personnel.h"
#include "personne.cpp"
#include <iostream>

Personnel::Personnel(const std::string &nom, const std::string &prenom, const std::string &adresse, const std::string &telephone, const float &salaire) : Personne(nom, prenom, adresse, telephone)
{
    this->salaire = salaire;
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
    std::cout << "Salaire fixe: " << salaire << std::endl;
}

