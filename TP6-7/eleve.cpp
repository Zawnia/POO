#include "personne.h"
#include "eleve.h"
#include <iostream>

Eleve::Eleve(const std::string &nom, const std::string &prenom, const std::string &adresse, const std::string &telephone, const std::string &promotion, const std::string &groupeDeTd, float gpa)
{
    Personne(nom, prenom, adresse, telephone);
    this->promotion = promotion;
    this->groupeDeTd = groupeDeTd;
    this->gpa = gpa;
}

             
void Eleve::affiche() const
{
    Personne::affiche();
    std::cout << "Promotion: " << promotion << ", Groupe de TD: " << groupeDeTd << ", GPA: " << gpa << std::endl;
}

std::string Eleve::getPromotion() const
{
    return promotion;
}

float Eleve::getGpa() const
{
    return gpa;
}

std::string Eleve::getGroupeDeTd() const
{
    return groupeDeTd;
}

void Eleve::setPromotion(const std::string &prom)
{
    promotion = prom;
}

void Eleve::setGpa(float &note)
{
    gpa = note;
}

void Eleve::setGroupeDeTd(const std::string &gdt)
{
    groupeDeTd = gdt;
}




