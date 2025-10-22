#pragma once
#include<iostream>
using namespace std;

class Compte
{
	private:
	string numeroCompte;
	double solde;
	string devise;
public:
	
	Compte(string, double, string);
	void afficherCompte() const;
	~Compte();
};

