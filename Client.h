#pragma once
#include<iostream>
using namespace std;
#include "Compte.h"
#include "Date.h"
namespace bank {
class Client
{
private:
    static int ninstance;
    static int idcount;
    int numclient;
	string nom;
	string prenom;
	string CIN;
	Compte* compte;
	Date* dateNaissance;
    Client(string , string , string , Compte *, Date *);
public:
	
	static Client creator(string , string , string , Compte *, Date *);
	void afficherClient() const;
	~Client();
};
}
