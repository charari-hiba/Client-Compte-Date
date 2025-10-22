#pragma once
#include<iostream>
using namespace std;
#include "Compte.h"
#include "Date.h"

class Client
{
	private:
	string nom;
	string prenom;
	string CIN;
	Compte* compte;
	//Compte& compte;
	Date dateNaissance;
public:
	
	Client(string , string , string , Compte *, Date );
	//Client(string, string, string, Compte&, Date);
	void afficherClient() const;
	~Client();
};

