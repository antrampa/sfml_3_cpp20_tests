/*
Write a program that looks for a player in a list.

Instructions
– Create a vector of strings named players, for example with names like "Luna", "Rex", "Nova", and "Iris".
– Use find to search for a specific name in the list.
– If it’s found, print "Player found: <name>".
– If not, print "No player with that name."
– Test your program with both an existing and a missing name.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> players = {"Luna", "Rex", "Nova", "Iris"};

    auto it = std::ranges::find(players, "Rex");
    
    if(it != players.end()) {
        std::cout << "Found: " << *it << "\n";
    } else {
        std::cout << "Not found.\n";
    }

    auto it2 = std::ranges::find(players, "Test");
    if( it2 != players.end()) {
        std::cout << "Found: " << *it2 << "\n";
    } else {
        std::cout << "Not found.\n";
    }


}