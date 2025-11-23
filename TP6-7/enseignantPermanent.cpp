#include "enseignantPermanent.h"
#include <iostream>

EnseignantPermanent::EnseignantPermanent(const std::string &nom, const std::string &prenom, const std::string &adresse, const std::string &telephone) : Personnel(nom, prenom, adresse, telephone)
{
    bureau = "";
    grade = 0;
    primeMensuelle = 0.0f;
}

float EnseignantPermanent::calculSalaire() const
{
    return salaire + (grade * primeMensuelle) / 100;
}

void EnseignantPermanent::affiche()
{
    Personnel::affiche();
    std::cout << "Bureau: " << bureau << ", Grade: " << grade << ", Prime Mensuelle: " << primeMensuelle << std::endl;
}

std::string EnseignantPermanent::getBureau() const
{
    return bureau;
}

int EnseignantPermanent::getGrade() const
{
    return grade;
}

float EnseignantPermanent::getPrimeMensuelle() const
{
    return primeMensuelle;
}

void EnseignantPermanent::setBureau(const std::string &b)
{
    bureau = b;
}

void EnseignantPermanent::setGrade(int g)
{
    grade = g;
}

void EnseignantPermanent::setPrimeMensuelle(float p)
{
    primeMensuelle = p;
}