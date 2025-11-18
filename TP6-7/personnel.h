#ifndef PERSONNEL_H
#define PERSONNEL_H
#include <string>
#include "personne.h"
#include "eleve.h"

class Personnel : public Personne
{

protected:
    float salaire;

public:
    //Constructeurs
    Personnel();
    Personnel(const std::string &nom, const std::string &prenom, const std::string &adresse = "", const std::string &telephone = "");

    float calculSalaire();

    void setSalaire(float salaire);
    float getSalaire() const;

    void affiche() const;


};

#endif // PERSONNEL_H