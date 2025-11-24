#include <iostream>
#include "personnelAdmin.h"
#include "enseignantPermanent.h"
#include "enseignantVacataire.h"
#include "listePersonnel.h"
#include "listeValeurs.h"

int main() {
    std::cout << "-> test complet \n" << std::endl;

    // Admin : Salaire de base 2000 + (10h * 50e) = 2500 attendu
    PersonnelAdmin* admin = new PersonnelAdmin("Victor", "Wembanyama", "", "");
    admin->setSalaire(2000); 
    admin->setHeureSup(10); admin->setTaux(50);

    // Prof : Salaire 3000 + (Grade 2 * Prime 500 / 100) = 3010 attendu
    EnseignantPermanent* prof = new EnseignantPermanent("Pascal", "Denis", "", "");
    prof->setSalaire(3000);
    prof->setGrade(2); prof->setPrimeMensuelle(500);

    // Vacataire : 0 fixe + (20h * 40e) = 800 attendu
    EnseignantVacataire* vac = new EnseignantVacataire("Michael", "Jackson", "", "");
    vac->setnbreHeures(20); vac->settaux(40);

    std::cout << "--- PARTIE 1 : Liste AVEC Pointeurs  ---" << std::endl;
    ListePersonnel listeTP;
    
    listeTP.ajoutPersonnel(admin);
    listeTP.ajoutPersonnel(prof);
    listeTP.ajoutPersonnel(vac); 

    listeTP.afficherSalaires(); 
    // Résultat attendu : 2500, 3010, 800.


    std::cout << "\n--- PARTIE 2 : Liste SANS Pointeurs, par valeur ---" << std::endl;
    ListeValeur listeDM;

    // On ajoute les mêmepersonnes, mais par valeur
    listeDM.ajout(*admin);
    listeDM.ajout(*prof);
    listeDM.ajout(*vac);

    listeDM.afficherSalaires();
    // Résultat attendu : 2000 (fixe), 3000 (fixe), 0 (fixe du vacataire), donc tous les calculs d'heure sup ont disparu.

    std::cout << "\n-> CONCLUSION " << std::endl;
    std::cout << "Avec pointeurs : Le polymorphisme fonctionne bien." << std::endl;
    std::cout << "Sans pointeurs : Troncature des objets filles aux propriétés de la mère => Perte des donnees." << std::endl;

    return 0;
}