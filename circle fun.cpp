#include <iostream>
#include <cmath>

double calculateCircleArea(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Area of the circle: " << calculateCircleArea(radius) << std::endl;
    return 0;
}

