#include "personne.h"
#include <iostream>

Personne::Personne()
{
    nom = "Nom";
    prenom = "Prenom";
    adresse = "";
    telephone = "";
}

Personne::Personne(const std::string& nom, const std::string& prenom, 
                   const std::string& adresse, const std::string& telephone)
    : nom(nom), prenom(prenom), adresse(adresse), telephone(telephone)
{
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

