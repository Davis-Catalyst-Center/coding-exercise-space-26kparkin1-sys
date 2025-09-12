#include "Wizard.hpp"

Wizard::Wizard(string n, string e, int l, int m) : name(n), element(e), level(l), maxMP(m), mp(m) {}

string Wizard::displayInfo() {
    return "Name: " + name + " | Element: " + element + " | Level: " + to_string(level) + " | MP: " + to_string(mp) + "/" + to_string(maxMP);
}

void Wizard::castSpell(Wizard &target, int damage) {
    if (target.mp - damage < 0) target.mp = 0;
    else target.mp -= damage;
}

void Wizard::recharge() {
    mp = maxMP;
}
