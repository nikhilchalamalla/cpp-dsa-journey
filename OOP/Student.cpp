#include <iostream>
using namespace std;

class Student
{

    int roll_no;
    string name;

public:
    void getData()
    {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter name: ";
        cin >> name;
    }

    void displayData()
    {
        cout << "Roll number: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s;
    s.getData();
    s.displayData();
    return 0;
}