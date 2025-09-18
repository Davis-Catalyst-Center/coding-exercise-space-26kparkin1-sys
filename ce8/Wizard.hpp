#ifndef WIZARD_HPP
#define WIZARD_HPP

#include <string>
#include <algorithm> // for std::max

class Wizard {
protected:
    std::string name;
    std::string element;
    int level;
    int mp;

public:
    Wizard(const std::string& n, const std::string& e, int l, int m)
        : name(n), element(e), level(l), mp(m) {}

    // safe setter (clamps to >= 0)
    void setMP(int m) { mp = std::max(0, m); }

    // getter needed by derived classes
    int getMP() const { return mp; }

    virtual void castSpell(Wizard &target, int dmg) {
        target.setMP(target.getMP() - dmg);
    }

    void recharge() { mp += 20; }

    std::string displayInfo() const {
        return name + " | Element: " + element +
               " | Level: " + std::to_string(level) +
               " | MP: " + std::to_string(mp);
    }

    virtual ~Wizard() = default;
};

#endif // WIZARD_HPP
