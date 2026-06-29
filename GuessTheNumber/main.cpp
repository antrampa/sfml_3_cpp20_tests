#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int random_number(int min, int max){
    return rand() % (max - min + 1) + min;
}

int main() {
   
   srand(unsigned(time(nullptr)));
   bool play_again = true;

    while (play_again)
    {
        int min = 1;
        int max = 100;

        int number_to_guess = random_number(min, max);
        int attempts = 0;
        const int max_attempts = 10;

        std::cout << "I have chosen a number between " << min << " and " << max
                  << ". You have " << max_attempts << " attempts to guess it.\n";

        while (attempts < max_attempts)
        {
            int guess;
            std::cout << "Enter your guess: ";
            std::cin >> guess;

            attempts++;

            if (guess == number_to_guess)
            {
                std::cout << "Congratulations! You found the number " << number_to_guess
                          << " in " << attempts << " attempt(s)!\n";
                break;
            }
            else if (guess < number_to_guess)
            {
                std::cout << "Too low! Attempts left: " << (max_attempts - attempts) << '\n';
            }
            else
            {
                std::cout << "Too high! Attempts left: " << (max_attempts - attempts) << '\n';
            }

            if (attempts == max_attempts)
            {
                std::cout << "Sorry, you've used all attempts. The correct number was "
                          << number_to_guess << ".\n";
            }
        }

        char response;
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> response;

        if (response == 'y' || response == 'Y')
        {
            play_again = true;
        }
        else
        {
            play_again = false;
        }
    }

    std::cout << "Thanks for playing!\n";
}