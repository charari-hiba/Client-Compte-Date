// Client,Compte,Date.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Client.h"
#include "Compte.h"
#include "Date.h"




int main()
{
	Compte * compte1= new Compte("1234567899", 1000.00, "MAD");
	//Compte compte2("12345678999", 10000.00, "MAD");
	Date date1(15, 11, 2005);

	Client client1("HIBA", "CHARARI", "BB239369", compte1 , date1);
	client1.afficherClient();

	//Client* client2=new Client("HIBA", "CHARARI", "BB239369", compte2, date1);
	//client2->afficherClient();


	delete compte1;
	//delete client2;

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
