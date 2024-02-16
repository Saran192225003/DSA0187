#include<iostream>
#include<cmath>

// Overloading the absolute function for integers
int absolute(int num) {
    return std::abs(num);
}

// Overloading the absolute function for doubles
double absolute(double num) {
    return std::fabs(num);
}

int main() {
    int resultInt = absolute(-5);           // Using overloaded absolute for integers
    double resultDouble = absolute(-3.14); // Using overloaded absolute for doubles

    std::cout << "Absolute (int): " << resultInt << "\n";
    std::cout << "Absolute (double): " << resultDouble << "\n";

    return 0;
}

