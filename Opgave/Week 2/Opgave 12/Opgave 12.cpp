#include <iostream>
using namespace std;

int main() {
    //Variablen
    int hoursOfSailing, numberOfGuests;

    cout << "Vul het aantal vaaruren in: ";
    cin >> hoursOfSailing;

    cout << "Vul het aantal gasten in: ";
    cin >> numberOfGuests;

    int petrolCost = 50 * hoursOfSailing;
    int earningsPerGuest = 15 * numberOfGuests;
    int totalEarnings = petrolCost + earningsPerGuest;

  
    cout << "Benzine Kost: €" << petrolCost << endl;
    cout << "Inkomen: " << earningsPerGuest << endl;
    cout << "Totale Inkomen: " << totalEarnings << endl;

    return 0;
}
