#include <iostream>

void printCats(int numCats);
int doubleNum(int num, int num2);

int main() {
printCats (7);
int result = doubleNum(5, 2);
std::cout << result << std::endl;

}
int doubleNum(int num, int num2){
    return num * num2;

}

void printCats(int numCats) {
    if(numCats > 20){
        return;

    }
for(int i = 0; i < numCats; i++){
std::cout << "Cats" << std::endl;
}

}