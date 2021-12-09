// Copyright (c) 2019 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Created on: Dec 08,  2019
// This program asks the user to guess my favorite
// number and if they get it wrong they are told so.

#include <iostream>

int main() {
    // this function checks if ther is over 30 students
    const int FAVORITE_NUMBER = 7;
    int numberGuessed;

    // input
    std::cout << "Guess my favorite number from 0-9: ";
    std::cin >> numberGuessed;
    std::cout << "" << std::endl;

    // process
    if (numberGuessed == FAVORITE_NUMBER) {
        // output
        std::cout << "YOU GOT IT RIGHT!";
    } else {
        std::cout << "You got it wrong, my favorite number is " \
            << FAVORITE_NUMBER << "\n";
    }
}
