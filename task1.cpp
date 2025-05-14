#include <iostream>

#include <cstdlib>

#include <ctime>

#include <cmath> // for abs()



int main() {

    std::srand(std::time(0)); // Initalized random number generator

    int numberToGuess = std::rand() % 100 + 1; // Random number between 1 and 100

    int userGuess;



    std::cout << "Welcome to the Number Guessing Game!\n";

    std::cout << "I've picked a number between 1 and 100. Can you guess it?\n";



    while (true) {

        std::cout << "Enter your guess: ";

        std::cin >> userGuess;



        if (userGuess < numberToGuess) {

            std::cout << "Too low!. Try again.\n";

        } else if (userGuess > numberToGuess) {

            std::cout << "Too high!. Give iit another shot.\n";

        } else {

            std::cout << " Correct! You guessed the number!\n";

            break;

        }



        // Check if the guess is close (within 5 numbers)

        if (std::abs(userGuess - numberToGuess) <= 5) {

            std::cout << " But you're very close!";

        }



        std::cout << "\n";

    }



    return 0;

}