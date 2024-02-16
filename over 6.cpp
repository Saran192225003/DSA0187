#include<iostream>

class ArrayAccessor {
private:
    int arr[5];

public:
    // Overloading the [] operator for array access
    int& operator[](int index) {
        return arr[index];
    }
};

int main() {
    ArrayAccessor arrObj;
    arrObj[0] = 10; // Using overloaded [] operator for array access

    return 0;
}

