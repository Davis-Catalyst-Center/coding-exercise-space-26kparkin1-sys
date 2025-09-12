#include <string>
#include <sstream>

#include <iostream>
#include "Wizard.h"

int Wizard;
int myWizard;

int main() {

    Wizard; int myWizard("Merlin", "Fire", 15, 100);

    std::cout << myWizard.displayInfo() << std::endl;

    return 0;
}

class Wizard {
private:
    std::string name;
    std::string element;
    int level;
    int maxHP;
    int currentHP;

public:
    Wizard(std::string wizName, std::string wizElement, int wizLevel, int maxMana) {
        name = wizName;
        element = wizElement;
        level = wizLevel;
        maxHP = maxMana;
        currentHP = maxMana;
    }

    std::string displayInfo() const {
        std::stringstream ss;
        ss << "Wizard: " << name
           << " | Element: " << element
           << " | Level: " << level
           << " | HP: " << currentHP << "/" << maxHP;
        return ss.str();
    }
};
