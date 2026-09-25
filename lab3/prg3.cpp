#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    void input();
    void show();
};

inline void Point::input()
{
    cout << "Enter x and y: ";
    cin >> x >> y;
}

inline void Point::show()
{
    cout << "Point = (" << x << ", " << y << ")" << endl;
}

int main()
{
    Point p1, p2;

    cout << "For Point 1:" << endl;
    p1.input();

    cout << "For Point 2:" << endl;
    p2.input();

    cout << "\nPoint 1: ";
    p1.show();

    cout << "Point 2: ";
    p2.show();

    return 0;
}