/*
Write a program that defines an array containing 5 integers.

Use a for-each loop with a reference to multiply each element by 2.

Then display all elements on one line separated by spaces.
*/

#include <iostream>
#include <array>
#include <string>

void printArray(std::array<int, 5> &arr) {
    for(int i = 0; i<arr.size(); i++) {
        std::cout << "Arr["<<i<<"]"<<arr[i]<<std::endl;
    }
}

int main() {
    std::string name = "Hello String!";
    std::cout << "String message: " << name << std::endl;

    std::array<int, 5> myArray = {1,2,3,4,5};
    std::cout << "The Original Array: " << std::endl;
    printArray(myArray);
    for(int &v : myArray) {
        v = v * 2;
    }
    std::cout << "The new array: \n";
    printArray(myArray);
    
}