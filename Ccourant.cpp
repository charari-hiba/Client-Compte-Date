#include "Ccourant.h"
using namespace bank;

bank::Ccourant::Ccourant(string devise, double solde, Date* dateCreation, double plafond)
	: Compte(devise, solde, dateCreation), plafond(plafond)
{
	cout << "constructeur compte courant" << endl;

}

void bank::Ccourant::debiter(double montant)
{
	if (solde - montant >= -plafond) {
		solde -= montant;
	}
	else
		cout << "depassement de decouvert autorise!" << endl;

}

void bank::Ccourant::afficherCompte() const
{
	Compte::afficherCompte();//demasquage d'afficherCompte de la classe de base 
	cout << "Plafond: " << plafond << endl;
}

bank::Ccourant::~Ccourant()
{
}


