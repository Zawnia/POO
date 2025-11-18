#ifndef PERSONNEL_H
#define PERSONNEL_H
#include <string>
#include "personne.h"
#include "eleve.h"

class Personnel : public Personne //Classe mère de tous le personnel de l'école
{

protected:
    float salaire;

public:
    //Constructeurs
    Personnel();
    Personnel(const std::string &nom, const std::string &prenom, const std::string &adresse = "", const std::string &telephone = "", const float &salaire = 0.0f);

    virtual float calculSalaire() const;

    void setSalaire(float salaire);
    float getSalaire() const;

    void affiche() const;


};

#endif // PERSONNEL_H