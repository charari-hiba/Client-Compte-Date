#pragma once
#include "Compte.h"

namespace bank {
class Cepargne :  public bank :: Compte
{
private:
		double tauxInteret;
		const double min = 200;

public:
	Cepargne(string devise, double solde, Date* dateCreation, double tauxInteret);
	void crediter(double montant);
	void debiter(double montant);
	void afficherCompte() const ;
	~Cepargne();



};

}