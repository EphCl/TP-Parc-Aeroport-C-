// Ephrem CLEMENT

#ifndef VEHICULE_HPP
#define VEHICULE_HPP
#include <string>
#include <iostream>

class Vehicule {

protected :

    std::string marque;
    int anneeAchat;
    double prixAchat;

public :

    Vehicule(std::string marque, int anneeAchat, double prixAchat);

    std::string getMarque();
    int getAnneeAchat();
    double getPrixAchat();

    void setMarque(std::string);
    void setAnneeAchat(int);
    void setPrixAchat(double);

    void afficher();
    double decote(int);
    double argus(int);
};

#endif