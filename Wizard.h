#include <iostream>

#if WIZARD_H
#define WIZARD_H

#include <string>
using namespace std;

class Wizard {
private:
    string name;
    string element;
    int level;
    int maxHP;
    int currentHP;

public:
    Wizard (string wizName, string wizElement, int wizLevel, int maxMana);

    string displayInfo() const;
    void castSpell(Wizard &target, int manaCost);
    void rechargeMana(int amount);
    void takeDamage(int damange);

};

#endif
