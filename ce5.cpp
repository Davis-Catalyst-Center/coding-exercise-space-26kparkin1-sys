#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    std::vector<std::string> names = {"Milk Chocolate", "Dark Chocolate", "White Chocolate"};
    std::vector<double> weights = {100.5, 95.2, 110.0};
    std::vector<int> cocoaPercentages = {30, 70, 20};

    names.push_back("Caramel Chocolate");
    weights.push_back(120.0);
    cocoaPercentages.push_back(45);

    std::cout << "--- After Adding Elements ---" << std::endl;
    for (size_t i = 0; i < names.size(); ++i) {
        std::cout << names.at(i) << " (Weight: " << weights.at(i) << "g, Cocoa: " << cocoaPercentages.at(i) << "%)" << std::endl;
    }
    std::cout << std::endl;

    if (!names.empty()) {
        names.pop_back();
        weights.pop_back();
        cocoaPercentages.pop_back();
    }
    
    auto it = std::find(names.begin(), names.end(), "Dark Chocolate");
    if (it != names.end()) {
        int indexToRemove = std::distance(names.begin(), it);
        names.erase(names.begin() + indexToRemove);
        weights.erase(weights.begin() + indexToRemove);
        cocoaPercentages.erase(cocoaPercentages.begin() + indexToRemove);
    }
    

    std::cout << "--- After Removing Elements ---" << std::endl;
    for (size_t i = 0; i < names.size(); ++i) {
        std::cout << names.at(i) << " (Weight: " << weights.at(i) << "g, Cocoa: " << cocoaPercentages.at(i) << "%)" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--- Accessing Specific Chocolate (Milk Chocolate) ---" << std::endl;
    for (size_t i = 0; i < names.size(); ++i) {
        if (names.at(i) == "Milk Chocolate") {
            std::cout << "Name: " << names.at(i) << std::endl; //
            std::cout << "Weight: " << weights.at(i) << "g" << std::endl; //
            std::cout << "Cocoa Percentage: " << cocoaPercentages.at(i) << "%" << std::endl; //
            break;
        }
    }
    std::cout << std::endl;

    std::cout << "--- Modifying Milk Chocolate Details ---" << std::endl;
    for (size_t i = 0; i < names.size(); ++i) {
        if (names.at(i) == "Milk Chocolate") {
            names.at(i) = "Premium Milk Chocolate";
            weights.at(i) = 105.0;
            cocoaPercentages.at(i) = 35;
            break;
        }
    }
    
    std::cout << "--- After Modifying Elements ---" << std::endl;
    for (size_t i = 0; i < names.size(); ++i) {
        std::cout << names.at(i) << " (Weight: " << weights.at(i) << "g, Cocoa: " << cocoaPercentages.at(i) << "%)" << std::endl;
    }
    std::cout << std::endl;

    names.clear();
    weights.clear();
    cocoaPercentages.clear();

    std::cout << "--- After Clearing Vectors ---" << std::endl;
    std::cout << "Names vector size: " << names.size() << std::endl; //
    std::cout << "Weights vector size: " << weights.size() << std::endl; //
    std::cout << "Cocoa Percentages vector size: " << cocoaPercentages.size() << std::endl; //
    
    return 0;
}
