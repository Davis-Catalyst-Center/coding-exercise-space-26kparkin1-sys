#include <iostream>
#include "Wizard.hpp"
using namespace std;

int main() {
    Wizard w1("Merlin", "Fire", 10, 100);
    Wizard w2("Morgana", "Ice", 12, 120);
    Wizard w3("Dumbledore", "Air", 14, 150);
    Wizard w4("Cassandra", "Rock", 11, 135);

    cout << w1.displayInfo() << endl;
    cout << w2.displayInfo() << endl;
    cout << w3.displayInfo() << endl;
    cout << w4.displayInfo() << endl;

    w1.castSpell(w2, 30);
    cout << w2.displayInfo() << endl;

    w2.recharge();
    cout << w2.displayInfo() << endl;

    return 0;
}