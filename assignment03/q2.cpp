#include<iostream>
using namespace std;

class customer
{
    string Name;
    int No_calls;
    float bill_amount;
    float cost=0;
    public:
    void input()
    {
        cout<<"enter the name"<<endl;
        cin>>Name;
        cout<<"enter no. of calls"<<endl;
        cin>>No_calls;

    }
    void cal_bill()
    {
        int x;
       
        
        if (No_calls>100 && No_calls<=150)
        {
            x=No_calls-100;
            cost=x*0.6;
        }
        else if (No_calls>150 && No_calls<=200)
        {
            x=No_calls-150;
            cost=x*0.5+ 50*0.6;
        }
        else if (No_calls>200)
        {
            x=No_calls-200;
            cost= x*0.4 + 50*0.6+ 50*0.5;
        }
        
    }
    void output()
    {
        bill_amount=200+cost;
        cout<<"Name:"<<Name<<endl;
        cout<<"your bill amount is :"<<bill_amount<<endl;
    }

};


int main()
{
    customer c1;
    c1.input();
    c1.cal_bill();
    c1.output();
}