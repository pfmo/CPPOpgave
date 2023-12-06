#include <iostream>
using namespace std;
int main()
{
    int balance = 250;
    int ingeld = 50;
    int opgeld = 95;

    cout << (balance += ingeld -= 95) << endl;
}

