#include "Cepargne.h"
using namespace bank;


Cepargne::Cepargne(string devise, double solde, Date* dateCreation, double tauxInteret)
	: Compte(devise, solde, dateCreation) , tauxInteret(tauxInteret) 
{
	cout << "constructeur compte epargne" << endl;
}

void Cepargne::crediter(double montant)
{
	double interet = montant * (tauxInteret / 100);
	Compte::crediter(montant + interet);//demasquage de crediter de la classe de base Compte
}

void bank::Cepargne::debiter(double montant)
{
	if (solde - montant >= min) {
		solde -= montant;
	}
	else
		cout << "solde minimum non respecter" << endl;


}


void Cepargne::afficherCompte() const
{
	Compte::afficherCompte();//demasquage d'afficherCompte de la classe de base 
	cout << "Taux d'interet: " << tauxInteret << "%" << endl;
}

Cepargne::~Cepargne()
{
	cout << "destructeur compte epargne" << endl;
}
