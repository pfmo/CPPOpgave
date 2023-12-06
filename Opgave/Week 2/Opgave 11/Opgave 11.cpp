// Opgave 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
constexpr int film_size = 10;
int main()
{

	int film_ratings[film_size]{};

	int aantal_studenten;
	cout << "Hoeveel studen zijn er?" << endl;
	cin >> aantal_studenten;

	// Ask students their fav film
	for (size_t i = 0; i < aantal_studenten; i++)
	{
		cout << "Student: " << i + 1 << " wat is jou favo film? " << endl;
		int favo_film;
		cin >> favo_film;

		// Increment favo_film of user
		film_ratings[favo_film - 1]++;
	}

	// Print films
	for (size_t i = 0; i < film_size; i++)
	{
		cout << film_ratings[i] << " ";
	}
	//cout << film_ratings;//Avatar, Spidy, Avengers, Fast F, Matrix;

	//int Avatar = 1;
	//int trickStar = 2;
	//int Whale = 3;
	//int StarWreck = 4;
	//int pluto = 5;
	//int user1
	//cout << "\nKies een Bios" << endl;
	//cin >> user1;
	//int user2;
	//cout << "\nKies een Bios" << endl;
	//cin >> user2;
	//int user3;
	//cout << "\nKies een Bios" << endl;
	//cin >> user3;
	//int user4;
	//cout << "\nKies een Bios" << endl;
	//cin >> user4;
	//int user5;
	//cout << "\nKies een Bios" << endl;
	//cin >> user5;
	

	

}

