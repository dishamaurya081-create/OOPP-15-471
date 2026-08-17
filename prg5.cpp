#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    float balance;

public:
    void setData()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount Deposited Successfully\n";
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount Withdrawn Successfully\n";
        }
        else
        {
            cout << "Insufficient Balance\n";
        }
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.setData();
    b.deposit(500);
    b.withdraw(200);
    b.display();

    return 0;
}