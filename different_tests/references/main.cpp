/** 
 Write a program that declares an integer variable named score 
 and a reference called playerScore that refers to it.
Increase the score through the reference, then display both 
variables to show they share the same value.
 * 
*/
#include <iostream>

int main() {
    int score = 0;
    int &playerScore = score;
    std::cout << "The Score is: " << score << std::endl;
    std::cout << "The Player Score is: " << playerScore << std::endl;
    score = 100;
    std::cout << "The new Score is: " << score << "\n";
    std::cout << "The new Player Score is: " << playerScore << "\n";
    
    return 0;
}