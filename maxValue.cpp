// Created by: Finn Kitor
// Created on: December 14th, 2023
// this program generates 10 numbers between 0 to 100 and it finds the maximum value of the array.
#include <iostream>
#include <time.h>
#include <array>

// Constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;


int findMaxValue(const std::array<int, MAX_ARRAY_SIZE>& arr) {
    int maxVal = arr[0];  // Initialize maxVal with the first element of the array

    // Loop through the array to find the maximum value
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    return maxVal;
}

int main() {
    std::array<int, MAX_ARRAY_SIZE> arrayOfInt;

    // Generate random numbers and store them in the array
    srand(time(NULL));
    for (int i = 0; i < arrayOfInt.size(); i++) {
        arrayOfInt[i] = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
    }

    // Print the numbers in the array
    std::cout << "Generated numbers: ";
    for (int i = 0; i < arrayOfInt.size(); i++) {
        std::cout << arrayOfInt[i] << " ";
    }
    std::cout << std::endl;

    // Find the maximum value in the array
    int maxVal = findMaxValue(arrayOfInt);

    // Print the maximum value
    std::cout << "Maximum value: " << maxVal << std::endl;

    return 0;
}