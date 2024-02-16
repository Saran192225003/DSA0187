#include<iostream>

// Overloading the printArray function for integers
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

// Overloading the printArray function for doubles
void printArray(const double arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

// Overloading the printArray function for characters
void printArray(const char arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int intArray[] = {1, 2, 3, 4};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4};
    char charArray[] = {'a', 'b', 'c', 'd'};

    printArray(intArray, 4);    // Using overloaded printArray for integers
    printArray(doubleArray, 4); // Using overloaded printArray for doubles
    printArray(charArray, 4);   // Using overloaded printArray for characters

    return 0;
}

