#include <iostream>
using namespace std;

// Base class (Level 1)
class Vehicles {
public:
    void showVehicles() {
        cout << "This is a Vehicle" << endl;
    }
};

// Derived class (Level 2)
class Car : public Vehicles {
public:
    void showCar() {
        cout << "This is a Car" << endl;
    }
};

// Derived class (Level 3)
class SportsCar : public Car {
public:
    void showSportsCar() {
        cout << "This is a Sports Car" << endl;
    }
};

int main() {
    // Creating object of most derived class
    SportsCar obj;

    // Calling all methods
    obj.showVehicles();     // from Vehicles
    obj.showCar();         // from Car
    obj.showSportsCar();   // from SportsCar

    return 0;
}