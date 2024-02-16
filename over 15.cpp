#include<iostream>

// Overloading the factorial function for integers
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Overloading the factorial function for doubles
double factorial(double n) {
    if (n == 0.0 || n == 1.0) {
        return 1.0;
    }
    return n * factorial(n - 1.0);
}

int main() {
    int resultInt = factorial(5);        // Using overloaded factorial for integers
    double resultDouble = factorial(5.0); // Using overloaded factorial for doubles

    std::cout << "Factorial (int): " << resultInt << "\n";
    std::cout << "Factorial (double): " << resultDouble << "\n";

    return 0;
}

