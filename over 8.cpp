#include<iostream>

class Subtractor {
private:
    int value;

public:
    Subtractor(int val) : value(val) {}

    // Overloading the - operator
    Subtractor operator-(const Subtractor& other) const {
        return Subtractor(value - other.value);
    }

    // Display the value
    void display() {
        std::cout << "Value: " << value << "\n";
    }
};

int main() {
    Subtractor obj1(10);
    Subtractor obj2(5);
    Subtractor result = obj1 - obj2; // Using overloaded - operator
    result.display();

    return 0;
}

