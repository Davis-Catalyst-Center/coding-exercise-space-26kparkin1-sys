#include <iostream>
#include <cmath>
 
bool isEven(int number);
int sumOfDigits(int number);
bool isPrime(int number);
bool isSpecialNumber(int number);

bool isEven(int number) {
    return (number % 2 == 0);
}

int sumOfDigits(int number) {
    int sum = 0;
    number = std::abs(number); 
    while (number > 0) {
        sum += number % 10; 
        number /= 10;      
    }
    return sum;
}

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(number); ++i) {
        if (number % i == 0) {
            returssn false;
        }
    }
    return true;
}

bool isSpecialNumber(int number) {
    return isEven(number) && isPrime(sumOfDigits(number));
}

int main() {
    int inputNumber;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> inputNumber;

    if (isEven(inputNumber)) {
        std::cout << inputNumber << " is an even number." << std::endl;
    } else {
        std::cout << inputNumber << " is an odd number." << std::endl;
    }

    std::cout << "The sum of your digits is: " << sumOfDigits(inputNumber) << std::endl;

    if (isPrime(inputNumber)) {
        std::cout << "The number " << inputNumber << " is prime." << std::endl;
    } else {
        std::cout << "The number " << inputNumber << " is not prime." << std::endl;
    }
    
    if (isSpecialNumber(inputNumber)) {
        std::cout << "The number " << inputNumber << " is special." << std::endl;
    } else {
        std::cout << "The number " << inputNumber << " is not special." << std::endl;
    }

    return 0;
}
