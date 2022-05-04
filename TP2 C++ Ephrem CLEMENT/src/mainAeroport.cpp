// Ephrem CLEMENT

#include "aeroport.hpp"
#include "avion.hpp"
#include "voiture.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "aeroport.hpp"
using namespace std;

int main() {

	Vehicule v ("Peugot",1998,14732);
	v.afficher();
	// std::cout <<", argus = "<<v.argus(2019)<<" euros"<<std::endl;
	// Vehicule *v1;
	// v1 = new Vehicule("Porsche", 1985, 25000);
	// v1->setMarque("BMW");
	// v1->afficher();
	// std::cout<<std::endl;
	// std::cout<<"Entrer la marque : ";
	// std::string m;
	// std::cin>>m;
	// std::cout<<"Entrer annee achat : ";
	// int a;
	// std::cin>>a;
	// std::cout<<"Entrer prix achat : ";
	// float p;
	// std::cin>>p;
	// Vehicule v2(m,a,p);
	// v2.afficher();

	// std::cout << 81320/10000.0 << std::endl;
	// Voiture v ("Peugot", 1998, 14732, 2.5, 5, 180, 12000);
	// v.afficher(); std::cout << std::endl;
	// Voiture v1 ("Fiat", 2001, 732, 1.6, 3, 65, 3000);
	// v1.afficher();
	// std::cout << ", argus = " << v1.argus(2006) << " euros" << std::endl;
	// Voiture v2 ("Porsche", 1985, 25000, 6.5, 2, 280, 81320);
	// v2.afficher();
	// std::cout << ", argus = " << v2.argus(2006) << " euros" << std::endl;

	// Avion a("Cesna", 1972, 123067, 0, 250);
	// a.afficher();
	// std::cout << ", argus = " << a.argus(1997) << " euros" << std::endl;
	// Avion a1("Fouga", 1992 ,432109, 1, 1300);
	// a1.afficher();
	// std::cout << ", argus = " << a1.argus(2005) << " euros" << std::endl;

	Aeroport a;
	a.charger("parc.txt");
	a.afficherParc(2000);	

	return 0;
}