#include <iostream>
using namespace std;

int main() {
    // Cooffe's 
    while (true) {
        cout << "Coffee Machine Menu\n";
        cout << "1. Espresso\n";
        cout << "2. Americano\n";
        cout << "3. Latte\n";
        cout << "4. Cappuccino\n";
        cout << "5. Mocha\n";

        int keuze;
        cout << "Vul je keuze 1 t/m 5: " << endl;
        cin >> keuze;
        if (keuze >= 1 && keuze <= 5) {

            cout << "\nJe hebt gekozen: ";
            switch (keuze) {
            case 1:
                cout << "Espresso";
                break;
            case 2:
                cout << "Americano";
                break;
            case 3:
                cout << "Latte";
                break;
            case 4:
                cout << "Cappuccino";
                break;
            case 5:
                cout << "Mocha";
                break;
            }
            break;
        }
        else {
            cout << "\nOngeldige Keuze" << endl;
        }


    }
}
