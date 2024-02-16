#include<iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int val) : data(val) {}
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << "Data: " << obj.data;
        return os;
    }
};

int main() {
    MyClass obj(10);
    std::cout << obj << "\n";

    return 0;
}

