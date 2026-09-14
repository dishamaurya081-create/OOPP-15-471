#include <iostream>
using namespace std;

class Time
{
private:
    int hh, mm, ss;

public:
    void input(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }

    void show()
    {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main()
{
    Time t1, t2;

    int h, m, s;

    cout << "Enter time for Time 1:" << endl;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter minutes: ";
    cin >> m;
    cout << "Enter seconds: ";
    cin >> s;

    t1.input(h, m, s);

    cout << "\nEnter time for Time 2:" << endl;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter minutes: ";
    cin >> m;
    cout << "Enter seconds: ";
    cin >> s;

    t2.input(h, m, s);

    cout << "\nTime 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}