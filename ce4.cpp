#include <iostream>
#include <string>
#include <ctime>  
#include <cstdlib> 

int main() {
    char playAgain;
    do {
        int iSecret, iGuess;
        int maxTries = 5;
        bool correctGuess = false;

        srand(static_cast<unsigned int>(time(0))); 
        iSecret = rand() % 100 + 1;

        for (int i = 1; i <= maxTries; ++i) {
            std::cout << "Attempt " << i << " of " << maxTries << std::endl;
            std::cout << "Guess the number (1 to 100): ";
            std::cin >> iGuess;

            if (iSecret < iGuess) {
                std::cout << "Lower." << std::endl;
            } else if (iSecret > iGuess) {
                std::cout << "Higher." << std::endl;
            } else {
                std::cout << "Congratulations!" << std::endl;
                correctGuess = true;
                break; 
            }
        }

        if (!correctGuess) {
            std::cout << "\nSorry, you ran out of tries!" << std::endl;
            std::cout << "The correct number was: " << iSecret << std::endl;
        }

        // Prompt to restart or quit
        std::cout << "\nWould you like to play again? (y/n): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');
    
    std::cout << "Thanks for playing!" << std::endl;
    return 0;
}
