/*
Write a program that stores several player scores inside a vector. 
Ask the user to enter a few integer values, store them in the vector, 
and then display all the scores in a loop, one per line.
*/

#include <iostream>
#include <vector>

void printVectoreValues(const std::vector<int>& values) {
    for(int v : values) {
        std::cout << "score: " << v << "\n";
    }
}

int main() {
    std::vector<int> scores = {10, 20 ,30};

    std::cout << "Give player 5 scores: " << "\n";
    for(int i =0; i< 5; i++) {
        int score = 0;
        std::cin >>score;
        scores.push_back(score);
    }

    printVectoreValues(scores);

    return 0;
}