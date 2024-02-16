#include<iostream>

class Adder {
private:
    int value;

public:
    Adder(int val) : value(val) {}

    // Overloading the += operator
    Adder& operator+=(const Adder& other) {
        value += other.value;
        return *this;
    }

    // Display the value
    void display() {
        std::cout << "Value: " << value << "\n";
    }
};

int main() {
    Adder obj1(5);
    Adder obj2(7);
    obj1 += obj2; // Using overloaded += operator
    obj1.display();

    return 0;
}

