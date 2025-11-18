#ifndef ELEVE_H
#define ELEVE_H
#include <string>
#include "personne.h"

class Eleve  : public Personne
{
    // Classe virtuelle car destinée à être héritée.

private:
    std::string promotion;
    std::string groupeDeTd;
    float gpa;

public:
    // Constructeur
    Eleve(const std::string &nom, const std::string &prenom,
             const std::string &adresse = "", const std::string &telephone = "");

    // Destructeur
    virtual ~Eleve() {}

    // Méthodes
    virtual void affiche() const;

    std::string getNom() const;
    std::string getPrenom() const;
    std::string getAdresse() const;
    std::string getTelephone() const;

    void setPromotion(const std::string &promotion);
    void setGroupeDeTd(const std::string &groupeDeTd);
    void setGpa(float gpa);
};

#endif // ELEVE_H