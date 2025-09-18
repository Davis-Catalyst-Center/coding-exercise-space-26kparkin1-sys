#ifndef WILDMAGICWIZARD_HPP
#define WILDMAGICWIZARD_HPP

#include "Wizard.hpp"
#include <cstdlib> // rand

class WildMagicWizard : public Wizard {
private:
    int critChance; // unique attribute

public:
    WildMagicWizard(const std::string& n, const std::string& e, int l, int m, int crit)
        : Wizard(n, e, l, m), critChance(crit) {}

    // Override castSpell (do NOT use 'override' keyword per instructions)
    void castSpell(Wizard &target, int dmg) {
        int roll = rand() % 101; // 0..100
        if (roll <= critChance) {
            dmg *= 2;
        }
        target.setMP(target.getMP() - dmg);
    }

    // Unique ability: chaos surge — gives self MP (no cout)
    void chaosSurge() {
        mp += 30;
    }

    int getCritChance() const { return critChance; }
};

#endif // WILDMAGICWIZARD_HPP
