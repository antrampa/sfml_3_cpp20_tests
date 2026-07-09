/*
Write a program that removes one element from a vector of integers based on an index entered 
by the user. After removing the element, display the updated list to confirm the result.
*/

#include <iostream>
#include <vector>

void printVectorValues(const std::vector<int>& values) {
    for(int v : values) {
        std::cout << v << "\n";
    }    
}

int main() {
    std::vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "Original values of the vector" << "\n";

    printVectorValues(numbers);
    int chooseIndex; 
    std::cout << "Give the index to remove it" << "\n";
    std::cin >> chooseIndex;
    numbers.erase(numbers.begin() + chooseIndex);
    std::cout << "The updated vector values" << "\n";
    printVectorValues(numbers);

    return 0;
}