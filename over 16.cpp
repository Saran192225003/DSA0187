#include<iostream>
#include<algorithm>

// Overloading the sortArray function for integers
void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}

// Overloading the sortArray function for doubles
void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}

int main() {
    int intArray[] = {4, 2, 7, 1, 5};
    double doubleArray[] = {3.3, 1.1, 4.4, 2.2, 5.5};

    sortArray(intArray, 5);    // Using overloaded sortArray for integers
    sortArray(doubleArray, 5); // Using overloaded sortArray for doubles

    return 0;
}

