// Opgave 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string hobbys[] = { "Football", "Basketball", "Swimming", "Volleyball", "Gaming"};
    for (int i = 0; i < 5; i++) {
        cout << "Vul je hobby " << endl;
        getline(cin, hobbys[i]);
        system("cls");
    }
    cout << "Hobbies: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << hobbys[i] << endl;
    }
}

