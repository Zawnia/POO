
#include <iostream>
#include "personnelAdmin.h"
#include "enseignantPermanent.h"
#include "enseignantVacataire.h"
#include "listePersonnel.h"

int main()
{

    ListePersonnel liste; 

    PersonnelAdmin* admin = new PersonnelAdmin("Denis", "Pascal", "123 Square", "555-1234"); 
    admin->setHeureSup(10);
    admin->setTaux(15.0f);

    EnseignantPermanent* prof = new EnseignantPermanent("Rossi", "Jean", "Route 66", "010203");
    prof->setGrade(2);
    prof->setPrimeMensuelle(500.0f);

    EnseignantVacataire* vac = new EnseignantVacataire("Wembanyama", "Victor", "Av NBA", "049000");
    
    vac->setcasier("Casier 23");
    vac->setnbreHeures(20);
    vac->settaux(50.0f);


    liste.ajoutPersonnel(admin);
    liste.ajoutPersonnel(prof);
    liste.ajoutPersonnel(vac);

    admin->affiche();
    prof->affiche();
    vac->affiche();
 
    std::cout << "LISTE DES SALAIRES :" << std::endl;
    liste.afficherSalaires();

    return 0;
}