#include<iostream>

class FunctionCaller {
public:
    // Overloading the () operator to call a function with arguments
    int operator()(int a, int b) {
        return a + b;
    }
};

int main() {
    FunctionCaller func;
    int result = func(5, 7); // Using overloaded () operator to call a function
    std::cout << "Result: " << result << "\n";

    return 0;
}

