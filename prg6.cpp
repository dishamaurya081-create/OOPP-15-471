#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;

public:

    // Default Constructor
    Student()
    {
        roll = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Student(int r, string n)
    {
        roll = r;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Student(Student &s)
    {
        roll = s.roll;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    void display()
    {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    Student s1;
    s1.display();

    Student s2(101, "Ram");
    s2.display();

    Student s3(s2);
    s3.display();

    return 0;
}