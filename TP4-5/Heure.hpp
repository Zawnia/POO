#ifndef HEURE_H
#define HEURE_H

class Heure {
private:
    int heure;
    int minute;

    bool checkHour(int h, int m);

public:
    Heure(int h, int m);
    Heure();
    void affiche();
    void setHeure(int h);
    void setMinute(int m);
    int getHeure();
    int getMinute();
};

#endif // HEURE_H