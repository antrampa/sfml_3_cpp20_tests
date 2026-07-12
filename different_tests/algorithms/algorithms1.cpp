/*
Write a program that verifies the validity of player scores.

Instructions
– Create a vector of integers named scores, filled with a few random values.
– Use all_of to check if all scores are above zero.
– Use any_of to test if at least one score reaches 100.
– Use none_of to make sure no score is negative.
– For each condition, print a clear message showing whether it’s true or false.
*/

#include <algorithm>
#include <iostream>
#include <vector>

int main() {

    std::vector<int> scores = {10, 30, 40, 14, 20, 60, 100, 140};

    bool allAbpveZero = std::ranges::all_of(scores, [](int score){
        return score > 0;
    });

    std::cout << "All above zero: " << (allAbpveZero ? "True" : "False") << "\n";

    bool anyReachesAt100 = std::ranges::any_of(scores, [](int score){
        return score >= 100;
    });

    std::cout << "Any reached 100: " << (anyReachesAt100 ? "True" : "False") << "\n";

    bool noNegativeScore = std::ranges::none_of(scores, [](int score){
        return score < 0; 
    });

    std::cout << "No negative score: " << (noNegativeScore ? "True" : "False") << "\n";
}