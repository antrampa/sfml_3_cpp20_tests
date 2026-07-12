/*
Write a program that finds the first item whose name starts with a certain letter.

Instructions
– Create a vector of strings named items, for example "Potion", "Scroll", "Amulet", "Shield".
– Use find_if with a lambda to locate the first item that starts with the letter 'S'.
– If found, print "First match: <item>".
– If not, print "No matching item found."
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> names = {"Potion", "Scroll", "Amulet", "Shield"};

    auto it = std::ranges::find_if(names, [](std::string name){
        return name.starts_with('S');
    });
    
    if(it != names.end()) {
        std::cout << "First match: " << *it << "\n";
    } else {
        std::cout << "No matching item found.\n";
    }

    auto it2 = std::ranges::find_if(names, [](std::string name){
        return name.starts_with('D');
    });
    
    if(it2 != names.end()) {
        std::cout << "First match: " << *it2 << "\n";
    } else {
        std::cout << "No matching item found.\n";
    }
}