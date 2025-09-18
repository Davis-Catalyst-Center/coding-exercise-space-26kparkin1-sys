#ifndef WILDMAGICWIZARD_HPP
#define WILDMAGICWIZARD_HPP

#include "Wizard.hpp"
#include <cstdlib>

class WildMagicWizard : public Wizard {
private:
    int critChance;

public:
    WildMagicWizard(const std::string& n, const std::string& e, int l, int m, int crit)
        : Wizard(n, e, l, m), critChance(crit) {}

    void castSpell(Wizard &target, int dmg) {
        int roll = rand() % 101; // random 0–100
        if (roll <= critChance) {
            dmg *= 2; // critical hit
        }
        target.setMP(target.getMP() - dmg);
    }

    void chaosSurge() {
        mp += 30;
    }
};

#endif
