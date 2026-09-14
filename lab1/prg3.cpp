#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    string branch;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter branch: ";
        cin >> branch;
    }

    void show()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter details of Student 1:" << endl;
    s1.input();

    cout << "\nEnter details of Student 2:" << endl;
    s2.input();

    cout << "\nStudent 1";
    s1.show();

    cout << "\nStudent 2";
    s2.show();

    return 0;
}