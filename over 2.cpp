#include<iostream>
class Adder {
private:
    int value;
public:
    Adder(int val) : value(val) {}
    Adder operator+(const Adder& other) {
        Adder result(value + other.value);
        return result;
    }
    void display() {
        std::cout << "Value: " << value << "\n";
    }
};

int main() {
    Adder obj1(5);
    Adder obj2(7);
    Adder result = obj1 + obj2;
    result.display();

    return 0;
}

