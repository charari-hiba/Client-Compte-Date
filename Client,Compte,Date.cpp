// Client,Compte,Date.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Client.h"
#include "Compte.h"
#include "Date.h"
using namespace bank;



int main()
{
Date* d = new Date(1, 11, 2000);
Date* dateCreation = new Date(22, 5, 2025);
Compte * c1= new Compte("MAD", 1000.00, dateCreation);
Compte c2("MAD", 1000000.00, dateCreation);
Compte c3("EUR", 10000000.00, dateCreation);
Compte c4("EUR", 1000.00, dateCreation);

Client cl1 = Client::creator("houda", "sabir", "BB1234", c1, d);
Client cl2 = Client::creator("HIBA", "CHARARI", "BB1234", &c2, d);
Client cl3 = Client::creator("HANAN", "KAMIL", "BB1234", &c3, d);
Client cl4 = Client::creator("NAJIB", "HADAN", "BB1234", &c4, d);


    cl1.afficherClient();
	cl2.afficherClient();
	cl3.afficherClient();
	cl4.afficherClient();

	delete d;
	delete dateCreation;
	delete c1;


	

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
