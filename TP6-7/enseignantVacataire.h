#ifndef ENSEIGNANTVACATAIRE_H
#define ENSEIGNANTVACATAIRE_H

#include "personnel.h"
#include <string>

class EnseignantVacataire : public Personnel
{
private:
    std::string casier;
    int nbreHeures;
    float taux;

public:

    EnseignantVacataire();
    EnseignantVacataire(const std::string &nom, const std::string &prenom, const std::string &adresse = "", const std::string &telephone = "");

    float calculSalaire() const; //taux * nbreHeures
    void affiche();

    std::string getcasier() const;
    int getnbreHeures() const;
    float gettaux() const;

    void setcasier(const std::string &casier);
    void setnbreHeures(int nbreHeures);
    void settaux(float prime);


};



#endif