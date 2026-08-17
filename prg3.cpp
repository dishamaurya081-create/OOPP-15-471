#include <iostream>
using namespace std;

// Inline Function
inline int square(int x)
{
    return x * x;
}

// Default Argument Function
int add(int a, int b = 10)
{
    return a + b;
}

// Function Overloading
int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    cout << "Square of 5 = " << square(5) << endl;

    cout << "Addition (5) = " << add(5) << endl;
    cout << "Addition (5,15) = " << add(5, 15) << endl;

    cout << "Multiply Integers = " << multiply(4, 5) << endl;
    cout << "Multiply Doubles = " << multiply(2.5, 3.5) << endl;

    return 0;
}