#include <iostream>
#include <string>
#include <limits> // <-- this fixes the error

using namespace std;

int main ()
{
    int age;
    string name;

    cout << "Hello World" << endl;

    cout << "How old are you? ";
    cin >> age;

    // clear the leftover newline so getline works properly
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "What is your name? ";
    getline(cin, name);

    cout << "Hello " << name << ", you are " << age << " years old." << endl;

    return 0;
}
