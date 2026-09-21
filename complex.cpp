#include<iostream>

using namespace std;

class Complex{
    int real,img;
    public:
      Complex(int r=0,int i=0):real{r},img{i}{}

      void show(){
        cout<<real<<","<<img<<"i"<<endl;
      }
      // Complex operator + (Complex c){
      //   return Complex(real+c.real,img+c.img);
      // }
      friend Complex operator +(Complex c1, Complex c2);
};
Complex operator +(Complex c1, Complex c2){
    return Complex(c1.real+c2.real,c1.img+c2.img);
}
int main(){
    Complex c1(5,10);
    Complex c2(10,20);
    c1.show();
    c2.show();
    Complex c3=c1+c2;
    c3.show();
}
