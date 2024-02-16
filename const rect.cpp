#include<iostream>

class Rectangle {
public:
    Rectangle(double length, double width) {
        this->length = length;
        this->width = width;
        std::cout << "Rectangle Created: Length=" << length << ", Width=" << width << "\n";
    }
    ~Rectangle() {
        std::cout << "Rectangle Destroyed: Length=" << length << ", Width=" << width << "\n";
    }
    double calculateArea() {
        return length * width;
    }
private:
    double length;
    double width;
};
int main() {
    Rectangle myRectangle(5.0, 3.0);
    std::cout << "Area: " << myRectangle.calculateArea() << "\n";
    return 0;
}

