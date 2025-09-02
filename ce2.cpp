#include <iostream>
#include <cctype> // for std::tolower
using namespace std;

int main() {
    char grade;

    cout << "What grade did you receive in your under-water basket weaving? " << endl;
    cin >> grade;
    grade = tolower(grade); // normalize input

    // if-else-if-else for grades a–f
    if (grade == 'a') {
        cout << "Amazing! You aced underwater basket weaving!" << endl;
    } else if (grade == 'b') {
        cout << "Great job, solid work weaving underwater." << endl;
    } else if (grade == 'c') {
        cout << "Not bad, but those baskets might leak a little." << endl;
    } else if (grade == 'd') {
        cout << "Barely holding together, just like your basket." << endl;
    } else if (grade == 'f') {
        cout << "The basket sank... you failed." << endl;
    } else {
        cout << "That’s not a valid letter grade... bruh." << endl;
    }

    cout << "\nNow let’s check the switch version:" << endl;

    // switch statement with the same cases
    switch (grade) {
        case 'a':
            cout << "Switch: Excellent work — your basket is watertight!" << endl;
            break;
        case 'b':
            cout << "Switch: Good effort, sturdy basket." << endl;
            break;
        case 'c':
            cout << "Switch: Average, basket needs improvement." << endl;
            break;
        case 'd':
            cout << "Switch: Weak basket, almost failed." << endl;
            break;
        case 'f':
            cout << "Switch: Failed — your basket fell apart." << endl;
            break;
        default:
            cout << "Switch: Invalid grade input." << endl;
            break;
    }

    // Reflection
    cout << "\nReflection: Using both conditionals (if/else-if/else) and switch statements is useful. "
         << "If/else works well for general checks and ranges, while switch is cleaner for handling multiple exact cases." << endl;

    return 0;
}
