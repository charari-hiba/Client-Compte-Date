#include "Compte.h"



Compte::Compte(string numc, double sold, string dev) : numeroCompte(numc), solde(sold), devise(dev)	
{
	cout << "costructeur compte" << endl;
}

void Compte::afficherCompte() const
{
	cout << "Numero de Compte: " << numeroCompte << endl;
	cout << "Solde: " << solde <<  endl;
	cout << "Devise: " << devise << endl;

}

Compte::~Compte()
{
	cout << "destructeur compte" << endl;
}
