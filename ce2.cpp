#include <iostream>
using namespace std;
int main () {
    char grade;
    cout << "What grade did you receive in your under-water basket weaving? " << std::endl;
    cin >> grade;

    switch(std::tolower(grade)) {
        case 'a':
            cout << "Wow, you must be able to hold your breath for a really long time!" << std::endl;
            break;
        case 'f':
            cout << "I suggest you take some professional swim lessons for next time." << std::endl;
            break;
        default:
            cout << "Um, that's not a valid grade." << std::endl;
        break;
        
}{
    cout << "\nWhat grade did you receive in chocolate tasting? " << std::endl;
    cin >> grade;

     switch(std::tolower(grade)) {
        case 'p':
            cout << "Um, that's not a valid grade. Did you bribe the teacher or something?" << std::endl;
            break;
        case 'f':
            cout << "Okay, so your an average chocolate taster. Cool. What does that even mean???" << std::endl;
            break;
        default:
            cout << "Um, that's not a valid grade." << std::endl;
        break;
        
}
    return 0;
}}
