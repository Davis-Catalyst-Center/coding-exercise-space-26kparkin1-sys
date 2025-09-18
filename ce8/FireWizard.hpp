#ifndef FIREWIZARD_HPP
#define FIREWIZARD_HPP

#include "Wizard.hpp"

class FireWizard : public Wizard {
public:
    FireWizard(const std::string& n, const std::string& e, int l, int m)
        : Wizard(n, e, l, m) {}

    // Special ability from UML: fireball
    void fireball(Wizard &target) {
        target.setMP(target.getMP() - 50);
    }
};

#endif
