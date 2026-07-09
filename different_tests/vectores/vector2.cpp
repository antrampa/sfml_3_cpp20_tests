/*
Write a program that creates a vector of enemy names. Add a few names manually, 
insert a new one at the beginning of the list, 
and finally display all the enemies currently on screen.
 */


#include <iostream>
#include <vector>

void printVectorValues(const std::vector<std::string>& values) {
    std::cout << "Enemies:" << "\n";
    for(std::string s : values) {
        std::cout << s << "\n";
    }    
}

int main() {

    std::vector<std::string> enemies = {"Robot", "Goblin", "Dragon"};

    printVectorValues(enemies);

    std::cout << "Please give 2 more enemies" << "\n";
    for(int i = 0; i < 2; i++) {
        std::string e = "";
        std::cin >> e;
        enemies.push_back(e);
    }
    std::cout << "with the new enemies: " << "\n";
    printVectorValues(enemies);

    return 0;
}