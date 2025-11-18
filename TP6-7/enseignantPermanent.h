#ifndef ENSEIGNANTPERMANENT_H
#define ENSEIGNANTPERMANENT_H

#include "personnel.h"
#include <string>

class EnseignantPermanent : public Personnel
{
private:
    std::string bureau;
    int grade;
    float primeMensuelle;

public:

    EnseignantPermanent();
    EnseignantPermanent(const std::string &nom, const std::string &prenom, const std::string &adresse = "", const std::string &telephone = "");

    float calculSalaire(); //salaire + (grade * primeMensuelle) / 100
    void affiche();

    std::string getBureau() const;
    int getGrade() const;
    float getPrimeMensuelle() const;

    void setBureau(const std::string &bureau);
    void setGrade(int grade);
    void setPrimeMensuelle(float prime);


};



#endif