#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Wizard.hpp"
#include "FireWizard.hpp"
#include "WildMagicWizard.hpp"

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr))); // seed RNG

    // Base wizards
    Wizard w1("Merlin", "Arcane", 10, 100);
    Wizard w2("Morgana", "Shadow", 12, 120);

    // Derived class wizards
    FireWizard f1("Dumbledore", "Fire", 14, 150);
    WildMagicWizard wmw1("Cassandra", "Chaos", 11, 135, 25); // critChance = 25%

    // Initial info
    std::cout << w1.displayInfo() << '\n';
    std::cout << w2.displayInfo() << '\n';
    std::cout << f1.displayInfo() << '\n';
    std::cout << wmw1.displayInfo() << "\n\n";

    // Spells (tests)
    w1.castSpell(w2, 30);   // base
    f1.castSpell(w2, 35);   // FireWizard uses base castSpell
    wmw1.castSpell(w1, 40); // WildMagicWizard may crit

    std::cout << "After casting spells:\n";
    std::cout << w1.displayInfo() << '\n';
    std::cout << w2.displayInfo() << '\n';
    std::cout << f1.displayInfo() << '\n';
    std::cout << wmw1.displayInfo() << "\n\n";

    // Recharge + special abilities
    w1.recharge();
    f1.recharge();
    wmw1.recharge();

    f1.fireball(w2);    // reduces target MP by 50
    wmw1.chaosSurge();  // buffs self MP

    std::cout << "After abilities + recharge:\n";
    std::cout << w1.displayInfo() << '\n';
    std::cout << w2.displayInfo() << '\n';
    std::cout << f1.displayInfo() << '\n';
    std::cout << wmw1.displayInfo() << '\n';

    return 0;
}
