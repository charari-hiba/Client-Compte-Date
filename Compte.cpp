#include "Compte.h"
#include"Date.h"
using namespace bank;

int Compte::count=0;
Compte::Compte(string dev, double sold, Date * date) : devise(dev), solde(sold), datecreation(date)	
{
	count++;
	numeroCompte=count;
	cout << "costructeur compte" << endl;
}

void Compte::afficherCompte() const
{
	cout << "Numero de Compte: " << numeroCompte << endl;
	cout << "Solde: " << solde <<" "<<device<<  endl;
	cout << "date de creation : " ;
	datecreation->afficherDate();

}

void Compte::debiter(double montant)
{
	if (solde >= montant && montant > 0) solde -= montant;
	else cout << "solde insuffisant" << endl;
}


void Compte::crediter(double montant)
{
	if (montant > 0) solde += montant;
	else cout << "donner un montant valide" << endl;
}



Compte::~Compte()
{
	cout << "destructeur compte" << endl;
}
