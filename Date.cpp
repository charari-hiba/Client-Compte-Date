#include "Date.h"



Date::Date(int j, int m, int a) : jour(j), mois(m), annee(a)
{
	cout << "costructeur date" << endl;
}

void Date::afficherDate() const
{
	cout << jour << " / " << mois << " / " << annee << endl;
}

Date::~Date()
{
	cout << "destructeur date" << endl;
}
