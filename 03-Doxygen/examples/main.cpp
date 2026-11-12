
/**
 * @file main.cpp
 * @brief Demonstration of Doxygen documentation.
 *
 * This program demonstrates a simple calculator
 * using functions and documentation comments.
 */

#include <iostream>
using namespace std;

/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Multiplies two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Product of the two integers.
 */
int multiply(int a, int b) {
    return a * b;
}

/**
 * @brief Calculates the square of an integer.
 * @param n Input integer.
 * @return Square of the given integer.
 */
int square(int n) {
    return n * n;
}

/**
 * @brief Main function of the program.
 *
 * Calls the calculator functions and displays
 * their results.
 */
int main() {

    int a = 10;
    int b = 5;

    cout << "Addition: " << add(a, b) << endl;
    cout << "Multiplication: "
         << multiply(a, b) << endl;
    cout << "Square of a: "
         << square(a) << endl;

    return 0;
}
