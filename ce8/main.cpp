#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Wizard.hpp"
#include "FireWizard.hpp"
#include "WildMagicWizard.hpp"

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    Wizard w1("Merlin", "Arcane", 10, 100);
    Wizard w2("Morgana", "Shadow", 12, 120);

    FireWizard f1("Dumbledore", "Fire", 14, 150);
    WildMagicWizard wmw1("Cassandra", "Chaos", 11, 135, 25); // critChance = 25%

    std::cout << w1.displayInfo() << '\n';
    std::cout << w2.displayInfo() << '\n';
    std::cout << f1.displayInfo() << '\n';
    std::cout << wmw1.displayInfo() << "\n\n";

    // Spells
    w1.castSpell(w2, 30);
    f1.castSpell(w2, 35);
    wmw1.castSpell(w1, 40);

    std::cout << "After casting spells:\n";
    std::cout << w1.displayInfo() << '\n';
    std::cout << w2.displayInfo() << '\n';
    std::cout << f1.displayInfo() << '\n';
    std::cout << wmw1.displayInfo() << "\n\n";

    // Recharge + abilities
    w1.recharge();
    f1.recharge();
    wmw1.recharge();

    f1.fireball(w2);
    wmw1.chaosSurge();

    std::cout << "After abilities + recharge:\n";
    std::cout << w1.displayInfo() << '\n';
    std::cout << w2.displayInfo() << '\n';
    std::cout << f1.displayInfo() << '\n';
    std::cout << wmw1.displayInfo() << '\n';

    return 0;
}
