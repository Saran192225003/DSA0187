#include<iostream>

class Incrementer {
private:
    int value;

public:
    Incrementer(int val) : value(val) {}
    Incrementer operator++() {
        value++;
        return *this;
    }
    void display() {
        std::cout << "Value: " << value << "\n";
    }
};

int main() {
    Incrementer obj(5);
    ++obj; 
    obj.display();

    return 0;
}

