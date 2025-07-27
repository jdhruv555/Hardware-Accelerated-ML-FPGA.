// File: array_addition_tb.cpp

#include <iostream>
#include <cstdlib>
#include "array_addition.h"

#define SIZE 10

int main() {
    int a[SIZE], b[SIZE], result[SIZE];

    // Initialize arrays with random values
    for (int i = 0; i < SIZE; ++i) {
        a[i] = rand() % 100;
        b[i] = rand() % 100;
    }

    // Call the array addition function
    array_addition(a, b, result, SIZE);

    // Display the result
    std::cout << "Array A: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array B: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Result: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

