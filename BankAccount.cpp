#include <iostream>
using namespace std;

class BankAccount{
    public:
    string name;
    int amt=0;
    void withdraw(int rs)
    {
        amt-=rs;
        cout<<amt<<endl;
    }
    void deposit(int rs)
    {
        amt+=rs;
        cout<<amt<<endl;
    }
};
int main(){
    BankAccount a,b,c;
    cout<<"Balance of a after deposit:";
    a.deposit(25000);
    cout<<"Balance of b after withdraw:";
    b.withdraw(10000);
    cout<<"Balance of c after initialization:";
    c.amt=0;
    cout<<c.amt<<endl;
}