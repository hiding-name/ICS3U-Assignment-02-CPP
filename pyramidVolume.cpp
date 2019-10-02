// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Sept 2019
// This is square pyramid calculator

#include <iostream>

int main() {
    // This will calculate volume
    float side1;
    float side2;
    float height;
    double volume;

    // Welcome statement
    std::cout << "Welcome, this is Rectangular Base Pyramid Volume Calculator"
    "1000!" << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    // input
    std::cout << "What is one side of the base: " << std::endl;
    std::cin >> side1;
    std::cout << "What is other side of the base: " << std::endl;
    std::cin >> side2;
    std::cout << "Finally, what is the height of the pyramid: " << std::endl;
    std::cin >> height;

    // process
    volume = (side1 * side2 * height) / 3;

    // output
    std::cout << "\nThe volume is " << volume << " units cubed." << std::endl;
}
