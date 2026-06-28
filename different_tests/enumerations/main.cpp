#include <iostream>

enum class Difficulty 
{
    Easy, Medium, Hard
};

int main() {
    Difficulty difficulty = Difficulty::Medium;
    
    if(difficulty == Difficulty::Medium) {
        std::cout << "Standard difficulty seelcted.";
    }
}