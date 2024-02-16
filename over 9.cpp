#include<iostream>

// Overloading the add function for integers
int add(int a, int b) {
    return a + b;
}

// Overloading the add function for floating-point numbers
double add(double a, double b) {
    return a + b;
}

int main() {
    int resultInt = add(5, 7);           // Using overloaded add for integers
    double resultDouble = add(3.5, 2.5); // Using overloaded add for floating-point numbers

    std::cout << "Result (int): " << resultInt << "\n";
    std::cout << "Result (double): " << resultDouble << "\n";

    return 0;
}

