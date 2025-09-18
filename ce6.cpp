#include <iostream>
#include <cmath>
using namespace std;

bool isEven(int number);
int sumOfDigits(int number);
bool isPrime(int number);
bool isSpecialNumber(int number);

int main() {
    int inputNumber;
    cout << "Enter a number: " << endl;
    cin >> inputNumber;

    if (isEven(inputNumber)) {
        cout << inputNumber << " is an even number." << endl;
    } else {
        cout << inputNumber << " is an odd number." << endl;
    }

    cout << "The sum of your digits is: " << sumOfDigits(inputNumber) << endl;

    if (isPrime(inputNumber)) {
        cout << "The number " << inputNumber << " is prime." << endl;
    } else {
        cout << "The number " << inputNumber << " is not prime." << endl;
    }
   
    if (isSpecialNumber(inputNumber)) {
        cout << "The number " << inputNumber << " is special." << endl;
    } else {
        cout << "The number " << inputNumber << " is not special." << endl;
    }

    return 0;
}

bool isEven(int number) {
    return (number % 2 == 0);
}

int sumOfDigits(int number) {
    int sum = 0;
    number = abs(number);
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
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

bool isSpecialNumber(int number) {
    return isEven(number) && isPrime(sumOfDigits(number));
}

