#include <iostream>
using namespace std;

class complex{
    private:
    int real;
    int img;
    public:
    void input(){
        cin>>real>>img;
    }
    void show(){
        cout<<real;
        if(img>=0)
            cout<<"+"<<img<<"i"<<endl;
        else
            cout<<img<<"i"<<endl;
    }
    void add(complex c1,complex c2){
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }
    complex add(int a ,int b){
        complex c;
        c.real=real+a;
        c.img=img+b;
        return c;
    }
};
int main(){
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c1.show();
    c2.show();
    c3.add(c1,c2);
    c3.show();
    c3=c1.add(5,10);
    c3.show();

}
