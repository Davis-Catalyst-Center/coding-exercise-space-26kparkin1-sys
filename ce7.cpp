#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cmath>

int main() {
    unsigned seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    std::mt19937 generator(seed);
    std::uniform_int_distribution<int> op_distribution(1, 5);
    std::uniform_int_distribution<int> num_distribution(1, 100);

    int total_problems;
    int correct_answers = 0;

    std::cout << "Welcome to the Arithmetic Quiz!" << std::endl;
    std::cout << "Enter the number of problems you want to solve: ";

    while (!(std::cin >> total_problems) || total_problems <= 0) {
        std::cout << "Invalid input. Please enter a positive integer for the number of problems: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    for (int i = 0; i < total_problems; ++i) {
        int operation = op_distribution(generator);
        double num1 = num_distribution(generator);
        double num2 = num_distribution(generator);
        double correct_answer = 0.0;
        char op_symbol = ' ';

        if (operation == 4) { // Division
            while (num2 == 0) {
                num2 = num_distribution(generator);
            }
        } else if (operation == 5) { // Modulus
            while (num2 == 0 || num1 <= num2) {
                num1 = num_distribution(generator);
                num2 = num_distribution(generator);
            }
        }

        switch (operation) {
            case 1:
                correct_answer = num1 + num2;
                op_symbol = '+';
                break;
            case 2:
                correct_answer = num1 - num2;
                op_symbol = '-';
                break;
            case 3:
                correct_answer = num1 * num2;
                op_symbol = '*';
                break;
            case 4:
                correct_answer = num1 / num2;
                op_symbol = '/';
                break;
        }

        std::cout << "\nProblem #" << i + 1 << ": What is " << num1 << " " << op_symbol << " " << num2 << "? ";

        double user_answer;

        while (!(std::cin >> user_answer)) {
            std::cout << "Invalid input. Please enter a numerical answer: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        if (operation == 4) {
             if (std::abs(user_answer - correct_answer) < 0.0001) {
                std::cout << "Correct!" << std::endl;
                correct_answers++;
            } else {
                std::cout << "Incorrect. The correct answer was " << correct_answer << "." << std::endl;
            }
        } else {
            if (user_answer == correct_answer) {
                 std::cout << "Correct!" << std::endl;
                correct_answers++;
            } else {
                std::cout << "Incorrect. The correct answer was " << correct_answer << "." << std::endl;
            }
        }
    }

    std::cout << "\nQuiz finished!" << std::endl;
    std::cout << "Your score: " << correct_answers << "/" << total_problems << std::endl;

    return 0;
}
