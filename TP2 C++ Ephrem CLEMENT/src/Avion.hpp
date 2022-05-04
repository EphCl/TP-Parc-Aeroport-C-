// Ephrem CLEMENT

#ifndef AVION_HPP
#define AVION_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include "vehicule.hpp"

class Avion : public Vehicule
{

private:
    bool type;
    int heuresVol;

public:
    Avion(std::string marque, int anneeAchat, double prixAchat, bool type, int heuresVol);

    void afficher();
    double decote(int annee);
    double argus(int annee);

    bool getType();
    int getHeuresVol();

    void setType(bool);
    void setHeuresVol(int);
};

#endif