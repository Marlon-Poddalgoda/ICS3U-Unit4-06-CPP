// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program displays every RGB value using nested loops

#include <iostream>

int main() {
    // This function displays every RGB value using nested loops

    std::cout << "This program displays every RGB value."
              << std::endl;

    // variable declarations
    int counterR;
    int counterG;
    int counterB;

    // process
    for (counterR = 0; counterR < 256; counterR++) {
        for (counterG = 0; counterG < 256; counterG++) {
            for (counterB = 0; counterB < 256; counterB++) {
                std::cout << "RGB (" << counterR << "," << counterG
                          << "," << counterB << ")" <<std::endl;
            }
        }
    }
}
