#pragma once
#include<iostream>
using namespace std;
#include"Date.h"
namespace bank{

class Compte
{
	private:
    static int count;
	int numeroCompte;
	double solde;
	string devise;
    Date* datecreation;
public:
	
	Compte(string, double, Date*);
	void afficherCompte() const;
    void debiter(double montant);
    void crediter(double montant);
	~Compte();
};

}
