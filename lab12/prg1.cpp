<<<<<<< HEAD
//Binary Operator Overloading
#include <bits/stdc++.h>
using namespace std;

class point{
private:
    int x,y;
public:
    point(int x=0,int y=0):x{x},y{y}{}

    point operator+(point p){
        int a=x+p.x;
        int b=y+p.y;
        return point(a,b);
    }
    void show(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
int main(){
    point p1(10,20),p2(30,40);
    p1.show();
    p2.show();
    point p3=p1+p2;
    p3.show();
=======
//Binary Operator Overloading
#include <bits/stdc++.h>
using namespace std;

class point{
private:
    int x,y;
public:
    point(int x=0,int y=0):x{x},y{y}{}

    point operator+(point p){
        int a=x+p.x;
        int b=y+p.y;
        return point(a,b);
    }
    void show(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
int main(){
    point p1(10,20),p2(30,40);
    p1.show();
    p2.show();
    point p3=p1+p2;
    p3.show();
>>>>>>> 9e6e2f325735d32f3636e92210abed8fb4e9c987
}