// Ephrem CLEMENT

#ifndef AEROPORT_HPP
#define AEROPORT_HPP

#include <string>
#include <iostream>
#include <vector>
#include "voiture.hpp"
#include "avion.hpp"

    class Aeroport
{

private:
    std::vector<Voiture> garage;
    std::vector<Avion> hangar;

public:
    Aeroport();

    void afficher();
    double decote(int annee);
    double argus(int annee);
    void ajouterVoiture(Voiture &v);
    void ajouterAvion(Avion &a);
    void charger(const std::string &nomDuFichier);
    void afficherGarage(int a);
    void afficherHangar(int a);
    void afficherParc(int a);
    void vider();

    bool getType();
    int getHeuresVol();

    void setType(bool);
    void setHeuresVol(int);
};

#endif