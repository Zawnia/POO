#ifndef PERSONNELADMIN_H
#define PERSONNELADMIN_H

#include "personnel.h"
#include <string>

class PersonnelAdmin : public Personnel
{
private:
    int heureSup;
    float taux;

public:

    PersonnelAdmin();
    PersonnelAdmin(const std::string &nom, const std::string &prenom, const std::string &adresse = "", const std::string &telephone = "");

    float calculSalaire() const; //salaire + (heureSup * taux)
    void affiche();


    float getTaux() const;
    int getHeureSup() const;

    void setHeureSup(int heureSup);
    void setTaux(float taux);

};

#endif