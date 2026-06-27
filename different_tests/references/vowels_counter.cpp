/*
Write a program that declares a string variable named text.

Use a for-each loop with a const reference to count how many vowels (a, e, i, o, u) 
appear in the text, without modifying it.

Display the vowel count.
*/
#include <iostream>
#include <string>

bool hasVower(char ch);

int main() {
    std::string text = "Hello world.This is a simple example text. It contains several vowels and consonants. Programming in C++ is fun."; 
    std::cout << "The original text is: \n" << text;
    std::string vowerChars = "";    
    int vowelCounter = 0;
    for(char32_t ch : text) {
        bool hasVowel = hasVower(ch);
        if(hasVowel){
            vowelCounter++;
            vowerChars.push_back(ch);
            vowerChars.push_back(',');
        }
    }
    vowerChars.pop_back();

    std::cout << "The count of vowels is: " << vowelCounter << "\n";
    std::cout << "The found vowels are: \n " << vowerChars << "\n"; 
}

bool hasVower(char ch){
    if(std::tolower(ch) == 'a'
        || std::tolower(ch) == 'e'
        ||std::tolower(ch) == 'i'
        ||std::tolower(ch) == 'o'
        ||std::tolower(ch) == 'u'
    ){
        return true;
    }

    return false;
}