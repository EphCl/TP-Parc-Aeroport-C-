// Ephrem CLEMENT

#ifndef AVION_CPP
#define AVION_CPP

#include <string>
#include <iostream>
#include <algorithm>
#include "avion.hpp"

void Avion::afficher()
{

    Vehicule::afficher();

    std::string typeStr;
    bool type = getType();
    if (type == 0)
    {
        typeStr = "Helice";
    }
    else if (type == 1)
    {
        typeStr = "Réaction";
    }

    std::cout << "** Avion : " << typeStr << ", " << getHeuresVol() << " heures de vol";
}

double Avion::decote(int annee) {

    double ammortissement = 0;
    int anneeAchat = getAnneeAchat();
    double prixAchat = getPrixAchat();
    bool type = getType();
    int heuresVol = getHeuresVol();

    if (type == 0) {
        for (heuresVol; heuresVol > 100; heuresVol - 100)
        {
            ammortissement = ammortissement + 0.1;
            heuresVol -= 100;
        }
    } else if (type == 1) {
        for (heuresVol; heuresVol > 1000; heuresVol - 1000)
        {
            ammortissement = ammortissement + 0.1;
            heuresVol -= 1000;
        }
    }
    return ammortissement;
}

double Avion::argus(int annee)
{
    // Oui il faut réécrire car dans certains cas la méthode peux retourner un argus supérieur au prix d'achat
    double d = Avion::decote(annee);
    double arg = 0.0;
    double retour;
    arg = std::max(0.0, (1 - d) * getPrixAchat());
    retour = std::min(arg, getPrixAchat());
    return retour;
}

Avion::Avion(std::string marque, int anneeAchat, double prixAchat, bool type, int heuresVol) : Vehicule(marque, anneeAchat, prixAchat), type(type), heuresVol(heuresVol)
{
    
}


bool Avion::getType(){

    return type;
}

int Avion::getHeuresVol() {

    return heuresVol;
}


void Avion::setType(bool) {

    this->type = type;
}

void Avion::setHeuresVol(int) {

    this->heuresVol = heuresVol;
}

#endif