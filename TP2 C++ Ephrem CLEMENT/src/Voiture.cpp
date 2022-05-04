// Ephrem CLEMENT
#ifndef VOITURE_CPP
#define VOITURE_CPP

#include <string>
#include <iostream>
#include <algorithm>
#include "voiture.hpp"


void Voiture::afficher() {

    Vehicule::afficher();
    std::cout << "** Voiture : " << getCylindree() << " litres, " << getNbrPortes() << " portes, " << getPuissance() << " CV, " << getKilometrage() << " km";

}

double Voiture::decote(int annee) {

    double ammortissement = 0;
    int anneeAchat = getAnneeAchat();
    double prixAchat = getPrixAchat();
    double kilo = getKilometrage();
    std::string marque = getMarque();

    if (annee > anneeAchat)
    {
        for (annee; annee > anneeAchat; anneeAchat++)
        {
            ammortissement = ammortissement + 0.02;
        }
    }
    else
    {
        return 0;
    }

    for (kilo; kilo > 10000; kilo - 10000)
    {
        ammortissement = ammortissement + 0.05;
        kilo -= 10000;
        // std::cout << "tst";
    }

    if (marque == "Fiat" || marque == "Renault")
    {
        ammortissement = ammortissement - 0.2;
    }

    if (marque == "Ferrari" || marque == "Porsche")
    {
        ammortissement = ammortissement - 0.2;
    }
    return ammortissement;
}

double Voiture::argus(int annee)
{
 // Oui il faut réécrire car dans certains cas la méthode peux retourner un argus supérieur au prix d'achat
    double d = Voiture::decote(annee);
    if (annee > anneeAchat)
    {
        std::cout << "Année non valide. ";
        return 0;
    }
    double arg = 0.0;
    double retour;
    arg = std::max(0.0, (1 - d) * getPrixAchat());
    retour = std::min(arg, getPrixAchat());
    return retour;
}

// Constructeur

Voiture::Voiture(std::string marque, int anneeAchat, double prixAchat, double cylindree, int nbrPortes, int puissance, double kilometrage) : Vehicule(marque, anneeAchat, prixAchat), cylindree(cylindree), nbrPortes(nbrPortes), puissance(puissance), kilometrage(kilometrage)
{

}

// Accesseurs

double Voiture::getCylindree() {

    return cylindree;
}

int Voiture::getNbrPortes() {

    return nbrPortes;
}

int Voiture::getPuissance() {

    return puissance;
}

double Voiture::getKilometrage() {

    return kilometrage;
}


// Mutateurs

void Voiture::setCylindree(double cylindree)
{

    this->cylindree = cylindree;
}

void Voiture::setNbrPortes(int nbrPortes)
{

    this->nbrPortes = nbrPortes;
}

void Voiture::setPuissance(int puissance)
{

    this->puissance = puissance;
}

void Voiture::setKilometrage(double kilometrage)
{

    this->kilometrage = kilometrage;
}

#endif