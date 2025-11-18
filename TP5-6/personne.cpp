#include "personne.h"
#include <iostream>

Personne::Personne(const std::string &surname, const std::string &name,
                   const std::string &adress = "", const std::string &phone = "")
{
    nom = surname;
    prenom = name;
    adresse = adress;
    telephone = phone;
}

void Personne::affiche() const
{
    std::cout << prenom << " " << nom << " " << adresse << " " << telephone << std::endl;
}

std::string Personne::getNom() const
{
    return nom;
}

std::string Personne::getPrenom() const
{
    return prenom;
}

std::string Personne::getAdresse() const
{
    return adresse;
}

std::string Personne::getTelephone() const
{
    return telephone;
}

void Personne::setNom(const std::string &surname)
{
    nom = surname;
}

void Personne::setPrenom(const std::string &name)
{
    prenom = name;
}

void Personne::setAdresse(const std::string &adress)
{
    adresse = adress;
}

void Personne::setTelephone(const std::string &phone)
{
    telephone = phone;
}

