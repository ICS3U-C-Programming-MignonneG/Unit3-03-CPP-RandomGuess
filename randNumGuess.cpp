// Copyright 2026 Mignonne Gihozo

#include <cstdlib>
#include <iostream>

// Created by: Mignonne Gihozo
// Created on: Oct 2026
// This program checks if a user's guess matches a generated random number

int main() {
    // Variables
    int userGuess;
    int randomNumber;

    // Initialize random seed
    srand((unsigned)time(NULL));

    // Generate a random number between 1 and 9
    randomNumber = rand() % 9 + 1;  // NOLINT

    // Input
    std::cout << "Enter your guess (1-9): ";
    std::cin >> userGuess;
    std::cout << std::endl;

    // Process & Output
    if (userGuess == randomNumber) {
        std::cout << "You guessed the correct number" << std::endl;
    } else {
        std::cout << "You guessed the wrong number." << std::endl;
        std::cout << "The correct number is : " << randomNumber << std::endl;
    }

    return 0;
}
