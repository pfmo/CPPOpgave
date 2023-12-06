// Opgave 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int dPot = 20;
	int tries = 0;
	cout << "Neem een drop: " << endl;
	int userInput;
	cin >> userInput;
	
	if (userInput <= 20) {
	cout << "Drop over: " << dPot - userInput << endl;
	}
	else {
		cout << "Dat mag je niet doen" << endl;
	}
	for (dPot = 20; userInput > 20; userInput++) {
		cin >> userInput;
	}
}

