#include<iostream>

class Comparator {
private:
    int value;

public:
    Comparator(int val) : value(val) {}

    bool operator==(const Comparator& other) const {
        return value == other.value;
    }
};

int main() {
    Comparator obj1(5);
    Comparator obj2(5);

    if (obj1 == obj2) { 
        std::cout << "Objects are equal\n";
    } else {
        std::cout << "Objects are not equal\n";
    }

    return 0;
}

