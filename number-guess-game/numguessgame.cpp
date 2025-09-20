#include <iostream>
#include <cstdlib>  // for rand()
#include <ctime>    // for time()

int main() {
    std::srand(std::time(NULL)); // using NULL instead of nullptr
    int secret = std::rand() % 1000 + 1; // number between 1 and 1000
    int guess = 0;

    std::cout << "Welcome to the Guessing Game!\n";
    std::cout << "Guess the number (1-1000) to unlock a secret message.\n";

    while (guess != secret) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < secret) std::cout << "Too low!\n";
        else if (guess > secret) std::cout << "Too high!\n";
        else {
            std::cout << "Correct! Here's your secret message:\n\n";
            std::cout << R"(
   ____  _               _         __  __                                 
  / ___|| |__   __ _ ___| |__     |  \/  | ___  _ __ ___   ___  _ __ _   _
  \___ \| '_ \ / _` / __| '_ \    | |\/| |/ _ \| '_ ` _ \ / _ \| '__| | | |
   ___) | | | | (_| \__ \ | | |   | |  | | (_) | | | | | | (_) | |  | |_| |
  |____/|_| |_|\__,_|___/_| |_|   |_|  |_|\___/|_| |_| |_|\___/|_|   \__, |
                                                                      |___/
)";
        }
    }

    return 0;
}

	
