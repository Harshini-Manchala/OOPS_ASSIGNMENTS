#include<iostream>
using namespace std;

class Bank_account
{
    string Name;
    int Account_no;
    string Account_type;
    int Balance_amount;

    public:
    void input()
    {
        cout<<"enter the name"<<endl;
        cin>>Name;
        cout<<"enter income"<<endl;
        cin>>Account_no;
        cout<<"enter "<<endl;
        cin>>Account_type;
        cout<<"enter account balance"<<endl;
        cin>>Balance_amount;

    }
    void deposite(int amount)
    {
        cout<<"the amount deposited is :"<<amount<<endl;
        Balance_amount+=amount;
    }
    void Withdraw(int amount)
    {
        cout<<"the amount withdrawed is :"<<amount<<endl;
        Balance_amount-=amount;
    }

    void display()
    {
        cout<<"Name of account holder is:"<<Name<<endl;
        cout<<"account number is :"<<Account_no<<endl;
        cout<<"Type of account is : "<<Account_type<<endl;
        cout<<"Account Balance :"<<Balance_amount<<endl;
    }

};

int main()
{
    Bank_account b1;
    b1.input();
    b1.deposite(20000);
    b1.Withdraw(10000);
    b1.display();
}