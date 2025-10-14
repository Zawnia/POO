#ifndef DATE_H
#define DATE_H

class Date {
private:
    int day;
    int month;
    int year;

    bool checkDate(int j, int m, int a);

public:
    Date(int j, int m, int a);
    Date();
    void affiche();
    void setDay(int j);
    void setMonth(int m);
    void setYear(int a);
    int getDay();
    int getMonth();
    int getYear();
};

#endif // DATE_H