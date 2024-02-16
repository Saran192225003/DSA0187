#include<iostream>

class Car {
public:
    Car(std::string make, std::string model) {
        this->make = make;
        this->model = model;
        std::cout << "Car Created: " << make << " " << model << "\n";
    }
    ~Car() {
        std::cout << "Car Destroyed: " << make << " " << model << "\n";
    }
private:
    std::string make;
    std::string model;
};
int main() {
    Car myCar("Toyota", "Camry");
    return 0;
}

