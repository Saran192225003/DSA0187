#include<iostream>
#include<string>

class Student {
public:
    Student(std::string name, int age) {
        this->name = name;
        this->age = age;
        std::cout << "Student Created: " << name << ", Age: " << age << "\n";
    }
    ~Student() {
        std::cout << "Student Destroyed: " << name << ", Age: " << age << "\n";
    }
private:
    std::string name;
    int age;
};

int main() {
    Student myStudent("John Doe", 20);
    return 0;
}

