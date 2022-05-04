// Ephrem CLEMENT

#ifndef AEROPORT_CPP
#define AEROPORT_CPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "aeroport.hpp"
using namespace std;

Aeroport::Aeroport() : garage(), hangar(){

};

void Aeroport::ajouterVoiture(Voiture &v){
    garage.push_back(v);
    std::cout << "Voiture Ajoutée" << std::endl;
}

void Aeroport::ajouterAvion(Avion &a){
    hangar.push_back(a);
    std::cout << "Avion Ajouté" << std::endl;
}

void Aeroport::charger(const std::string &nomDuFichier){

    std::string fin = "F";
    std::string v = "V";
    std::string a = "A";
    std::string verif;
    std::string ligne;
    std::string marque;
    int anneeAchat;
    double prixAchat;
    double cylindree;
    int nbrPortes;
    int puissance;
    double kilometrage;
    bool type;
    int heuresVol;

    fstream fichier(nomDuFichier);

    do
    {
        fichier >> verif; 
        if (verif == v)
        {
            fichier >> marque;
            fichier >> anneeAchat;
            fichier >> prixAchat;
            fichier >> cylindree;
            fichier >> nbrPortes;
            fichier >> puissance;
            fichier >> kilometrage;
            Voiture v(marque, anneeAchat, prixAchat, cylindree, nbrPortes, puissance, kilometrage);
            ajouterVoiture(v);
        }
        else if (verif == a)
        {
            fichier >> marque;
            fichier >> anneeAchat;
            fichier >> prixAchat;
            fichier >> type;
            fichier >> heuresVol;
            Avion a(marque, anneeAchat, prixAchat, type, heuresVol);
            ajouterAvion(a);
        }
        else if (verif == fin) {
            break;
        }
    }
        while (fichier) ;
    
}

void Aeroport::afficherGarage(int a){

    int compteur = 0;

    for (compteur; compteur < garage.size(); compteur++){
        garage[compteur].afficher();
        std::cout << ", argus = " << garage[compteur].argus(a) << " euros" << std::endl;
        
    }

    if (garage.size() == 0) {
        std::cout << "Garage vide" << std::endl;
    } 

}

void Aeroport::afficherHangar(int a){

    int compteur = 0;

    for (compteur; compteur < hangar.size(); compteur++){
        hangar[compteur].afficher();
        std::cout << ", argus = " << hangar[compteur].argus(a) << " euros" << std::endl;  
        
    }

    if (hangar.size() == 0) {
        std::cout << "Hangar vide" << std::endl;
    } 
}

void Aeroport::afficherParc(int a){

    afficherGarage(a);
    afficherHangar(a);

}


void Aeroport::vider(){

    garage.clear();
    hangar.clear();
    
}

#endif