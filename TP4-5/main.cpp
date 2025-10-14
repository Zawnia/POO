#include <iostream>
#include "Agenda.cpp"
#include "NoeudRDV.cpp"
#include "Date.cpp"
#include "Heure.cpp"
#include "RDV.cpp"

int main() {
    std::cout << "Test de l'Agenda" << std::endl << std::endl;
    
    std::cout << "1. Création de l'agenda" << std::endl;
    Agenda monAgenda;
    
    std::cout << "\n2. Ajout de plusieurs rendez-vous" << std::endl;
    RDV rdv1(Date(15, 10, 2025), Heure(10, 30), "Salle A");
    RDV rdv2(Date(14, 10, 2025), Heure(14, 0), "Bureau");
    RDV rdv3(Date(16, 10, 2025), Heure(9, 0), "Salle B");
    RDV rdv4(Date(15, 10, 2025), Heure(16, 30), "Cafétéria");
    
    monAgenda.ajoute(rdv1);
    monAgenda.ajoute(rdv2);
    monAgenda.ajoute(rdv3);
    monAgenda.ajoute(rdv4);
    std::cout << "Rendez-vous ajoutés avec succès." << std::endl;
    
    std::cout << "\n3. Affichage des rendez-vous:" << std::endl;
    monAgenda.affiche();
    
    std::cout << "\n4. Suppression d'un rendez-vous" << std::endl;
    monAgenda.enleve();
    std::cout << "Premier rendez-vous supprimé." << std::endl;
    
    std::cout << "\n5. Affichage des rendez-vous restants:" << std::endl;
    monAgenda.affiche();
    
    std::cout << "\n6. Vidage de l'agenda" << std::endl;

    while (true) {
        try {
            monAgenda.enleve();
        } catch (...) {
            break;
        }
    }
    std::cout << "Agenda vidé." << std::endl;
    

    std::cout << "\n7. Affichage de l'agenda vide:" << std::endl;
    monAgenda.affiche();
    
    std::cout << "\nFin du test " << std::endl;
    
    return 0;
}
