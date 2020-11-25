// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on November 2020
// This program can calculate the area and perimeter of a rectangle with
// dimensions entered by users

#include <iostream>

int main()  {
    // This function calculates the area and the perimeter of a rectangle
    int length;
    int width;
    int area;
    int perimeter;
  
    // input
    std::cout << "Enter the length of the rectangle (mm):" << std::endl;
    std::cin >> length;
    std::cout << "Enter the width of the rectangle (mm):" << std::endl;
    std::cin >> width;

    // process
    area = length*width;
    perimeter = 2*(length+width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << "mm²" << std::endl;
    std::cout << "Perimeter is " << perimeter << "mm" << std::endl;
}
