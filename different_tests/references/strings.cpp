/*
Write a program that defines an array of 4 strings containing a few words.

Use a for-each loop by reference to convert the first character of each word to uppercase.

Display the modified array at the end.
*/

#include <iostream>
#include <array>
#include <string>

void printArray(std::array<std::string, 4> &arr) {
    for(int i = 0; i<arr.size(); i++) {
        std::cout << "Arr["<<i<<"]: " << arr[i] << std::endl;
    }
}

int main() {

    std::array<std::string, 4> arr = {"word1", "word2", "word3", "Word4"};
    std::cout<<"Original array: \n";
    printArray(arr); 
    for(std::string &str : arr) {
        str[0] = std::toupper(str[0]);
    }
    std::cout<<"New array is: \n";
    printArray(arr);

}