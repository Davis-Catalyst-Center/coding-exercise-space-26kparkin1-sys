#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

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
        int num1 = rand() % 10 + 1; // 1–10
        int num2 = rand() % 10 + 1; // 1–10
        int operation = rand() % 4; // 0=+,1=-,2=*,3=/
        int correct_answer;
        char op_symbol;

        // Fix division so it divides cleanly
        if (operation == 3) {
            while (num2 == 0 || num1 % num2 != 0) {
                num1 = rand() % 10 + 1;
                num2 = rand() % 10 + 1;
            }
        }

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

        cout << "Problem " << i << ": What is " << num1 << " " << op_symbol << " " << num2 << "? ";

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

    cout << "\nQuiz finished!" << endl;
    cout << "Your score: " << correct_answers << " / " << total_problems << endl;

    return 0;
}