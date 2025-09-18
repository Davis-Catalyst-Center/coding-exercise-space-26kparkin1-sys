#ifndef FIREWIZARD_HPP
#define FIREWIZARD_HPP

#include "Wizard.hpp"

class FireWizard : public Wizard {
public:
    FireWizard(const std::string& n, const std::string& e, int l, int m)
        : Wizard(n, e, l, m) {}

    // Special ability: fireball — reduces target MP by 50
    // (No cout here per rubric)
    void fireball(Wizard &target) {
        target.setMP(target.getMP() - 50);
    }
};

#endif // FIREWIZARD_HPP
