// Opgave 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int getal1;
    int getal2;
    cin >> getal1;
    cin >> getal2;
    
    if (getal1 >= getal2) {
        cout << "Getal 1 is grooter dan getal 2 " << endl;
    }
    else {
        cout << "Getal 1 is kleiner dan getal 2";
    }
}
