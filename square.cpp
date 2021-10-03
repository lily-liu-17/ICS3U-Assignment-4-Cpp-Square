// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Sept 2021
// This program will show whether or not the rectangle is a square

#include <iostream>
#include <string>

int main() {
    // This program will show whether or not the rectangle is a square
    int length;
    int width;
    std::string lengthString;
    std::string widthString;

    // input
    std::cout << "Enter the length of a rectangle (cm) : ";
    std::cin >> lengthString;
    std::cout << "Enter the width of a rectangle (cm) : ";
    std::cin >> widthString;

    // process and output
    try {
        length = std::stoi(lengthString);
        width = std::stoi(widthString);
        if (length == width) {
            std::cout << "This rectangle is a square." << std::endl;
        } else {
            std::cout << "This rectangle is not a square." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input";
    }

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
