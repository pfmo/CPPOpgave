// Opgav 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double studs;
	double totaal = 0;
	double userInput;
	cout << "Enter Number of Students" << endl;
	cin >> studs;
	cout << "Class students are: " << studs;
	//int teach;
	//cin >> teach;
	for (int x =1; x <= studs; x++) {
		cout << endl << "wat is het cijfer van student " << x << endl;
		cin >> userInput; 
		totaal += userInput;
	}
	cout << "Gemiddelde cijfer is: " << totaal / studs << endl;
	
	system("pause");
}

