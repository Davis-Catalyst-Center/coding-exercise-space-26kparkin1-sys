#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function declarations (prototypes)
int generateRandom(int min, int max);
void askQuestion(int num1, int num2, int operation, int &correct_answers, int question_number);

int main() {
    srand(time(0));  // seed the random number generator

    int total_problems = 0;
    int correct_answers = 0;

    cout << "Welcome to the arithmetic quiz!" << endl;
    cout << "Enter the number of problems you want to solve: ";

    while (!(cin >> total_problems) || total_problems <= 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    for (int i = 1; i <= total_problems; i++) {
        int num1 = generateRandom(1, 10);
        int num2 = generateRandom(1, 10);
        int operation = generateRandom(0, 3);

        // Make sure division problems are valid
        if (operation == 3) {
            while (num2 == 0 || num1 % num2 != 0) {
                num1 = generateRandom(1, 10);
                num2 = generateRandom(1, 10);
            }
        }

        askQuestion(num1, num2, operation, correct_answers, i);
    }

    cout << "\nQuiz finished!" << endl;
    cout << "Your score: " << correct_answers << " / " << total_problems << endl;

    return 0;
}

// Function definitions

// Generates a random number between min and max inclusive
int generateRandom(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Asks a single math question and checks the answer
void askQuestion(int num1, int num2, int operation, int &correct_answers, int question_number) {
    int correct_answer;
    char op_symbol;

    switch (operation) {
        case 0:
            correct_answer = num1 + num2;
            op_symbol = '+';
            break;
        case 1:
            correct_answer = num1 - num2;
            op_symbol = '-';
            break;
        case 2:
            correct_answer = num1 * num2;
            op_symbol = '*';
            break;
        case 3:
            correct_answer = num1 / num2;
            op_symbol = '/';
            break;
    }

    cout << "Problem " << question_number << ": What is " 
         << num1 << " " << op_symbol << " " << num2 << "? ";

    int user_answer;
    while (!(cin >> user_answer)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    if (user_answer == correct_answer) {
        cout << "Correct!" << endl;
        correct_answers++;
    } else {
        cout << "Incorrect. The correct answer was " << correct_answer << endl;
    }
}
