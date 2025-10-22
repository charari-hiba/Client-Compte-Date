#include "Client.h"



Client::Client(string nom, string prenom, string cin, Compte* c, Date d)
	: nom(nom), prenom(prenom), CIN(cin), compte(c), dateNaissance(d)
{
	cout << "costructeur client" << endl;
}

/*Client::Client(string nom, string prenom, string cin, Compte& c, Date d)
	: nom(nom), prenom(prenom), CIN(cin), compte(c), dateNaissance(d)
{
}*/

void Client::afficherClient() const
{
	cout << "Nom: " << nom << endl;
	cout << "Prenom: " << prenom << endl;
	cout << "CIN: " << CIN << endl;
	cout << "Compte : " << endl;
	compte->afficherCompte();
	//compte.afficherCompte();
	cout << "Date de Naissance: ";
	dateNaissance.afficherDate();
}

Client::~Client()
{
	cout << "destructeur client" << endl;
}
