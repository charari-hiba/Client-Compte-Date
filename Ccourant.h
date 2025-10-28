#pragma once
#include "Compte.h"


namespace bank {
	class Ccourant :public bank::Compte
	{
private:
		double plafond;

public:
		Ccourant(string devise, double solde, Date* dateCreation, double plafond);
		void debiter(double montant);
		void afficherCompte() const;
		~Ccourant();



	};

}