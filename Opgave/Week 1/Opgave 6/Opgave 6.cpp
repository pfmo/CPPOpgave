// Opgave 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()

{
	int aq1 = 8;    // dit is aquarium 1?
	int aq2 = 11;   // dit is aquarium 2?

		cout << "inhoud aquarium1 = " << aq1 << endl;   //hier tonen we de inhoud op het scherm?

		cout << "inhoud aquarium2 = " << aq2 << endl; 

		cout << "nu gaan we de wissel uitvoeren: \n"; 

		//hieronder schrijf jij de code voor de wissel?
		int aq3;
		
		aq3 = aq2;
		aq2 = aq1;
		aq1 = aq3;
		

		//we tonen nu opnieuw de inhoud van de aquariums, dus na de wissel?

		cout << "\ninhoud aquarium1 = " << aq1; 

		cout << "\ninhoud aquarium2 = " << aq2; 

}

