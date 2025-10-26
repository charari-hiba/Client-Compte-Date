#include "Client.h"
using namespace std;
using namespace bank;

int Client::ninstance = 0;
int Client::idcount = 0;



Client::Client(string nom, string prenom, string cin, Compte* c, Date *d)
	: nom(nom), prenom(prenom), CIN(cin), compte(c), dateNaissance(d)
{
	ninstance++;
    idcount++;
    numclient = idcount;
	cout << "costructeur client" << endl;
}


Client Client::creator(string n, string p, string cin, Compte* c, Date* d)
{
	if (ninstance < 3) { return Client(p, n, cin, c, d); }

	else {
		cout << "c'est la limite des clients " << endl;
		exit;
	}
	
}

void Client::afficherClient() const
{
	cout << "numClient: " << numclient << endl;
	cout << "Nom: " << nom << endl;
	cout << "Prenom: " << prenom << endl;
	cout << "CIN: " << CIN << endl;
	
	if (this->compte != nullptr) {
	cout << "Compte : " << endl;
	compte->afficherCompte();
	}else 
		cout << "erreur affichage compte" << endl;
	
	if(this->dateNaissance != nullptr) {
	cout << "Date de Naissance: ";
	dateNaissance->afficherDate();
	}else
		cout << "erreur affichage date" << endl;
}

Client::~Client()
{
	ninstance--;
	cout << "destructeur client" << endl;
}
