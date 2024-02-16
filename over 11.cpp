#include<iostream>

// Overloading the findMax function for integers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Overloading the findMax function for floating-point numbers
double findMax(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int resultInt = findMax(5, 7);           // Using overloaded findMax for integers
    double resultDouble = findMax(3.5, 2.5); // Using overloaded findMax for floating-point numbers

    std::cout << "Max (int): " << resultInt << "\n";
    std::cout << "Max (double): " << resultDouble << "\n";

    return 0;
}

