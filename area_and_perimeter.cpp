// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: April 2021
// This program calculates the perimeter and area of a rectangle
// with inputted length and width

#include <iostream>

int main() {
    // This function calculates perimeter and area
    int lengthOfRectangle;
    int widthOfRectangle;
    int areaOfRectangle;
    int perimeterOfRectangle;

    // Input
    std::cout << "Enter the length of the rectangle (mm): ";
    std::cin >> lengthOfRectangle;
    std::cout << "Enter the width of the rectangle (mm): ";
    std::cin >> widthOfRectangle;

    // Process
    areaOfRectangle = lengthOfRectangle * widthOfRectangle;
    perimeterOfRectangle = (2 * (lengthOfRectangle + widthOfRectangle));

    // Output
    std::cout << "Area is " << areaOfRectangle << " mm²." << std::endl;
    std::cout << "Perimeter is " << perimeterOfRectangle << " mm." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
