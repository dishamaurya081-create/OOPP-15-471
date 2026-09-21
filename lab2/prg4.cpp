#include <iostream>
using namespace std;

void updateByReference(float &salary)
{
    salary = salary + (salary * 0.10);
}

void updateByPointer(float *salary)
{
    *salary = *salary + (*salary * 0.10);
}

int main()
{
    float salary1 = 50000;
    float salary2 = 50000;

    updateByReference(salary1);
    updateByPointer(&salary2);

    cout << "Salary using reference: " << salary1 << endl;
    cout << "Salary using pointer: " << salary2 << endl;

    return 0;
}