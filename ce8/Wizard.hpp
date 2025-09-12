#ifndef WIZARD_HPP
#define WIZARD_HPP

#include <string>
using namespace std;

class Wizard {
private:
    string name;
    string element;
    int level;
    int maxMP;
    int mp;

public:
    Wizard(string n, string e, int l, int m);
    string displayInfo();
    void castSpell(Wizard &target, int damage);
    void recharge();
};

#endif
