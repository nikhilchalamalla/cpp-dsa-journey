#include <iostream>
using namespace std;

// Base class
class TestA {
protected:
    string name;

public:
    TestA(string n) {
        name = n;
        cout << "TestA Constructor called" << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class (Level 2)
class TestB : public TestA {
protected:
    int age;

public:
    TestB(string n, int a) : TestA(n) {   // calling base class constructor
        age = a;
        cout << "TestB Constructor called" << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class (Level 3)
class TestC : public TestB {
private:
    string phone;

public:
    TestC(string n, int a, string p) : TestB(n, a) {  // calling parent constructor
        phone = p;
        cout << "TestC Constructor called" << endl;
        cout << "Phone: " << phone << endl;
    }
};

int main() {
    // Object creation (this is what your sir gave)
    TestC obj("Nikhil", 23, "87643267");

    return 0;
}