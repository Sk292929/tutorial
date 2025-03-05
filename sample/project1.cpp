#include <iostream>
#include <cstdlib>
#include <ctime>

void guess_the_number() {
    std::srand(std::time(0));
    int number_to_guess = std::rand() % 100 + 1;
    int user_guess = 0;

    std::cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?" << std::endl;

    while (user_guess != number_to_guess) {
        std::cout << "Enter your guess: ";
        std::cin >> user_guess;

        if (user_guess < number_to_guess) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (user_guess > number_to_guess) {
            std::cout << "Too high! Try again." << std::endl;
        }
    }

    std::cout << "Congratulations! You've guessed the number " << number_to_guess << " correctly." << std::endl;
}

int main() {
    guess_the_number();
    return 0;
}
