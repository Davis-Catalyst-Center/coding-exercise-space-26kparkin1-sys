#include <iostream>
#include <cctype> // for std::tolower
using namespace std;

int main() {
    char grade;

    cout << "What grade did you receive in your under-water basket weaving? " << endl;
    cin >> grade;

    if (!isalpha(grade)) {
        cout << "That’s not even a letter grade... bruh." << endl;
    } else {
        switch (tolower(grade)) {
            case 'a':
                cout << "Wow, you must be able to hold your breath for a really long time!" << endl;
                break;
            case 'f':
                cout << "I suggest you take some professional swim lessons for next time." << endl;
                break;
            default:
                cout << "Um, that's not a valid grade for this class." << endl;
                break;
        }
    }

    cout << "\nWhat grade did you receive in chocolate tasting? " << endl;
    cin >> grade;

    if (!isalpha(grade)) {
        cout << "That’s not even a grade, dude." << endl;
    } else {
        switch (tolower(grade)) {
            case 'p':
                cout << "Um, that's not a valid grade. Did you bribe the teacher or something?" << endl;
                break;
            case 'c':
                cout << "Okay, so you’re an average chocolate taster. Cool. What does that even mean???" << endl;
                break;
            case 'f':
                cout << "Oh no, you failed chocolate tasting? That’s tragic." << endl;
                break;
            default:
                cout << "That grade doesn’t count for chocolate tasting." << endl;
                break;
        }
    }

    // Reflection
    cout << "\nReflection: Using both conditionals (if/else) and switch statements is useful. "
         << "If/else works better for general checks (like making sure input is a letter), "
         << "while switch is great for handling multiple exact cases cleanly." << endl;

    return 0;
}
 