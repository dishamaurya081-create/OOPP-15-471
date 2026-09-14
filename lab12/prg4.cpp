#include <bits/stdc++.h>
using namespace std;

class point{
private:
    int x,y;
public:
    point(int x=0,int y=0):x{x},y{y}{}
    
    void show(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }   
    friend point operator+(point p1,int n);
};
point operator+(point p1,int n){
    return point(p1.x+n,p1.y+n);
}