#include <bits/stdc++.h>
using namespace std;

class Complex {
    int real;
    int img;
    public:
    Complex(int r = 0, int i = 0):real(r), img(i) {}
    void show() {
        cout << real << " , " << img << "i" << endl;
    }
    Complex operator + (Complex c){
        return Complex(real+c.real, img+c.img);
    }
};
int main(){
    Complex c1 {5,10},c2{10,20},c3;
    //c3=c1+c2;
    c1.show();
    c2.show();
    c3.show();
}