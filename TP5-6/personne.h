#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>

class Personne
{
    // Classe virtuelle car destinée à être héritée.

private:
    std::string nom;
    std::string prenom;
    std::string adresse;
    std::string telephone;

public:
    // Constructeur
    Personne(const std::string &nom, const std::string &prenom,
             const std::string &adresse = "", const std::string &telephone = "");

    // Destructeur
    virtual ~Personne() {}

    // Méthodes
    virtual void affiche() const;

    std::string getNom() const;
    std::string getPrenom() const;
    std::string getAdresse() const;
    std::string getTelephone() const;

    void setNom(const std::string &nom);
    void setPrenom(const std::string &prenom);
    void setAdresse(const std::string &adresse);
    void setTelephone(const std::string &telephone);
};

#endif // PERSONNE_H