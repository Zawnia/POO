#ifndef ELEVE_H
#define ELEVE_H
#include <string>
#include "personne.h"

class Eleve  : public Personne
{
    // Classe réelle avec des instances d'éleves.

private:
    std::string promotion;
    std::string groupeDeTd;
    float gpa;

public:
    // Constructeur
    Eleve(const std::string &nom, const std::string &prenom, const std::string &adresse = "", const std::string &telephone = "", const std::string &promotion,
    const std::string &groupeDeTd, float &gpa);

    // Destructeur
    virtual ~Eleve() {}

    // Méthodes
    virtual void affiche() const;

    std::string getPromotion() const;
    float getGpa() const;
    std::string getGroupeDeTd() const;

    void setPromotion(const std::string &promotion);
    void setGroupeDeTd(const std::string &groupeDeTd);
    void setGpa(float &note);
};

#endif // ELEVE_H