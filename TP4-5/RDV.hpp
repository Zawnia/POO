#ifndef RDV_R
#define RDV_R
#include "Date.hpp"
#include "Heure.hpp"
#include <string>

class RDV {
    Date date;
    Heure heure;
    std::string lieu;
    int nb_prtcps;
    std::string* liste_prtcps;

    public :
        RDV(Date d, Heure h, std::string l);
        RDV();
        ~RDV();

        void affiche();
        void saisieParticipants();
        void supprime_participant(std::string p);
        void saisieLieu();
        void saisie();

        void setDate(const Date& dateRdb);
        void setHeure(const Heure& h);
        void setLieu(const std::string& lieuRdv);
        void setNbPrtcps(int n);

        void setListePrtcps(std::string* ps);
        void setparticipant(int i, std::string s);

        Date getDate();
        Heure getHeure();
        std::string getLieu();
        int getNbPrtcps();
        std::string* getListePrtcps();       

};


#endif