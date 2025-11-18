#include "personne.h"
#include "eleve.h"
#include <iostream>

Eleve::Eleve(const std::string &surname, const std::string &name,const std::string &adress, const std::string &phone) 
{
    Personne(surname, name, adress, phone);

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




