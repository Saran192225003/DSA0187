#include<iostream>
#include<string>

// Overloading the concatenate function for strings
std::string concatenate(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

// Overloading the concatenate function for character arrays
const char* concatenate(const char* arr1, const char* arr2) {
    // Assuming arr1 and arr2 are null-terminated character arrays
    // Combine them into a new array
    size_t len1 = strlen(arr1);
    size_t len2 = strlen(arr2);

    char* result = new char[len1 + len2 + 1];
    strcpy(result, arr1);
    strcat(result, arr2);

    return result;
}

int main() {
    std::string resultStr = concatenate("Hello", "World");     // Using overloaded concatenate for strings
    const char* resultArr = concatenate("C++", "Programming");  // Using overloaded concatenate for character arrays

    std::cout << "Concatenated String: " << resultStr << "\n";
    std::cout << "Concatenated Array: " << resultArr << "\n";

    // Don't forget to free memory allocated for character array
    delete[] resultArr;

    return 0;
}

