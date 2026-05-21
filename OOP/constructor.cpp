#include <iostream>
using namespace std;

class constructor {
private:
    int x;

public:
    // Default Constructor
    constructor() {
        x = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    constructor(int val) {
        x = val;
    }

    // Copy Constructor
    constructor(const constructor &obj) {
        x = obj.x;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    // Default constructor
    constructor c1;
    c1.display();

    // Parameterized constructor
    constructor c2(10);
    c2.display();

    // Copy constructor
    constructor c3 = c2;
    c3.display();

    return 0;
}