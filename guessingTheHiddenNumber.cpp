// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds if the user's
// number between 0 and 9 is equal to the random number

#include <iostream>
#include <random>

int randomNumber;
int chosenNumber;

int main() {
    // Finds if the chosen number from 0 to 9 is equal to the random number

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);
    std::cout << "Enter a number from 0-9: ";
    std::cin >> chosenNumber;
    std::cout << std::endl;
    if (chosenNumber == randomNumber) {
        std::cout << "You got the number right!";
    } else {
        std::cout << "You got the number wrong.";
    }
    std::cout << std::endl;
    std::cout << "The number was " << randomNumber << ".";
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
