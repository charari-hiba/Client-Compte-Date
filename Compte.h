#pragma once
#include<iostream>
using namespace std;
#include"Date.h"
namespace bank{

class Compte
{
protected:
    double solde;
private:
    static int count;
	int numeroCompte;
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
