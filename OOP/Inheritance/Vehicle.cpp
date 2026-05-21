#include <iostream>
using namespace std;


class Vehicle {
public:
    void showVehicle() {
        cout << "This is a Vehicle" << endl;
    }
};


class Car : public Vehicle {
public:
    void showCar() {
        cout << "This is a Car" << endl;
    }
};

int main() {

    Car obj;

    obj.showVehicle();  
    obj.showCar();      

    return 0;
}