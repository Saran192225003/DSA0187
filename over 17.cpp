#include<iostream>
#include<cmath>

// Overloading the power function for integers
int power(int base, int exponent) {
    return std::pow(base, exponent);
}

// Overloading the power function for doubles
double power(double base, double exponent) {
    return std::pow(base, exponent);
}

int main() {
    int resultInt = power(2, 3);           // Using overloaded power for integers
    double resultDouble = power(2.0, 3.0); // Using overloaded power for doubles

    std::cout << "Power (int): " << resultInt << "\n";
    std::cout << "Power (double): " << resultDouble << "\n";

    return 0;
}

