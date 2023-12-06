#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Deelnemers declareren
    string deelneemers[5];
    
    // De projectgroep aanmaken
    string projectgroep = "";

    // Loop
    for (int i = 0; i < 5; ++i) {
        cout << "Vul in deelnemer " << i + 1 << ": ";
        cin >> deelneemers[i];
        projectgroep += deelneemers[i];

        if (i < 5 - 1) {
            projectgroep += ", ";
        }
    }

    cout << "Projectgroep: " << projectgroep << endl;
    
}

