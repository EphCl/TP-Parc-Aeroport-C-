// Ephrem CLEMENT

#include <string>
#include <iostream>
#include <algorithm>
#include "vehicule.hpp"


void Vehicule::afficher() {

	std::cout << "Veh : marque = " << getMarque() << ", date achat = " << getAnneeAchat() << ", prix achat = " << getPrixAchat() << " euros" << std::endl;

}

double Vehicule::decote(int annee) {

    double ammortissement = 0;
    int anneeAchat = getAnneeAchat();
    double prixAchat = getPrixAchat();

    if (annee > anneeAchat){
        for (annee; annee > anneeAchat; anneeAchat++) {
            ammortissement = ammortissement + 0.01;
        }
        return ammortissement;
    } else {
        return 0;
    }
}

double Vehicule::argus(int annee){

    double d = decote(annee);
    double arg = 0.0;
    arg = std::max(0.0, (1 - d) * getPrixAchat());

    return arg;

}




// Constructeur

Vehicule::Vehicule(std::string marque, int anneeAchat, double prixAchat) : marque(marque), anneeAchat(anneeAchat), prixAchat(prixAchat)
{

}



// Accesseurs

std::string Vehicule::getMarque()
{

    return marque;
}

int Vehicule::getAnneeAchat()
{

    return anneeAchat;
}

double Vehicule::getPrixAchat()
{

    return prixAchat;
}


// Mutateurs

void Vehicule::setMarque(std::string m)
{

    this->marque = m;
}

void Vehicule::setAnneeAchat(int a)
{

    this->anneeAchat = a;
}

void Vehicule::setPrixAchat(double p)
{

    this->prixAchat = p;
}