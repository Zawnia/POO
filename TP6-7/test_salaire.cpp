#include <iostream>
#include "personnel.cpp"
#include "personnelAdmin.cpp"
#include "enseignantPermanent.cpp"
#include "enseignantVacataire.cpp"

int main()
{
    PersonnelAdmin admin("Denis", "Pascal", "123 Square Stalingrad", "555-1234");
    admin.setSalaire(2000.0f);
    admin.setHeureSup(10);
    admin.setTaux(15.0f);
    std::cout << "Personnel Admin:" << std::endl;
    admin.affiche();
    std::cout << "Salaire calculé: " << admin.calculSalaire() << std::endl;

    EnseignantPermanent enseignantP("Rossi", "jean-Marie", "Route 66", "00.00.00.00.01");
    enseignantP.setSalaire(3000.0f);
    enseignantP.setGrade(2);
    enseignantP.setPrimeMensuelle(500.0f);
    std::cout << "\nEnseignant Permanent:" << std::endl;
    enseignantP.affiche();
    std::cout << "Salaire calculé: " << enseignantP.calculSalaire() << std::endl;

    EnseignantVacataire enseignantV("Wembanyama", "Victor", "789 Vacataire Avenue", "04.90.02.11.27");
    enseignantV.setSalaire(0.0f); //vacataire => pas de salaire fixe
    enseignantV.setnbreHeures(20);
    enseignantV.settaux(50.0f);
    std::cout << "\nEnseignant Vacataire:" << std::endl;
    enseignantV.affiche();
    std::cout << "Salaire calculé: " << enseignantV.calculSalaire() << std::endl;

    return 0;
}


