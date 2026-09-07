//Overloading of binary operator + using friend function
#include<bits/stdc++.h>
using namespace std;

class point{
private:
    int x,y;
public:
    point(int x=0,int y=0):x{x},y{y}{}
    void show(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    friend point operator+(point p1,point p2);
};
point operator+(point p1,point p2){
    int a=p1.x+p2.x;
    int b=p1.y+p2.y;
    return point(a,b);
}
int main(){
    point p1(10,20),p2(30,40);
    p1.show();
    p2.show();
    point p3=p1+p2;
    p3.show();
}