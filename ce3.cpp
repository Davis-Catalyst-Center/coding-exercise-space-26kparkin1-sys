#include <iostream>
using namespace std;

int main() {
    bool hasKey = false;
    bool noGhost = false;
    bool puzzleSolved = false;
    bool noTrap = false;
    bool hiddenPassageFound = false;
    bool exitFound = false;
    bool noMonster = false;

    char choice;

    // ---------- Room A ----------
    cout << "\n--- Room A ---" << endl;
    cout << "Do you want to search for the key? (y/n): ";
    cin >> choice;
    if (choice == 'y') {
        hasKey = true;
    }

    cout << "Is there a ghost in the room? (y/n): ";
    cin >> choice;
    noGhost = (choice == 'n');  // true if no ghost

    if (hasKey && noGhost) {
        // ---------- Room B ----------
        cout << "\n--- Room B ---" << endl;
        cout << "Do you want to solve the puzzle? (y/n): ";
        cin >> choice;
        if (choice == 'y') {
            puzzleSolved = true;
        }

        cout << "Is there a trap in the room? (y/n): ";
        cin >> choice;
        noTrap = (choice == 'n');

        cout << "Do you want to search for a hidden passage? (y/n): ";
        cin >> choice;
        if (choice == 'y') {
            hiddenPassageFound = true;
        }

        // ONE complex boolean expression to progress
        if ((puzzleSolved && noTrap) || hiddenPassageFound) {
            // ---------- Room C ----------
            cout << "\n--- Room C ---" << endl;
            cout << "Do you want to search for the exit? (y/n): ";
            cin >> choice;
            if (choice == 'y') {
                exitFound = true;
            }

            cout << "Is there a monster in the room? (y/n): ";
            cin >> choice;
            noMonster = (choice == 'n');

            if (exitFound && noMonster) {
                cout << "\n🎉 You found the exit and escaped the haunted house!" << endl;
            } else if (!noMonster) {
                cout << "\n👻 A monster appears! You hide until it leaves, but the game ends here." << endl;
            }
        } else {
            cout << "\nYou cannot progress further. The game ends here." << endl;
        }
    } else if (!noGhost) {
        cout << "\nA ghost chased you out of the room! Game over." << endl;
    } else {
        cout << "\nYou don’t have the key. The game ends here." << endl;
    }

    return 0;
}
