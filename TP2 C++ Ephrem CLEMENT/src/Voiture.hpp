// Ephrem CLEMENT
#ifndef VOITURE_HPP
#define VOITURE_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include "vehicule.hpp"

class Voiture : public Vehicule{

private :

    double cylindree;
    int nbrPortes;
    int puissance;
    double kilometrage;


public :

    Voiture(std::string marque, int anneeAchat, double prixAchat, double cylindree, int nbrPortes, int puissance, double kilometrage);

    double getCylindree();
    int getNbrPortes();
    int getPuissance();
    double getKilometrage();

    void setCylindree(double);
    void setNbrPortes(int);
    void setPuissance(int);
    void setKilometrage(double);

    void afficher();
    double decote(int annee);
    double argus(int annee);
};

#endif