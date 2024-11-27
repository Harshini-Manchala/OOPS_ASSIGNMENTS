#include<iostream>
#include<string.h>

using namespace std;

class employee
{
    string name;
    int earnings;
    float bonus;
    public:
    void input()
    {
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"enter the salary"<<endl;
        cin>>earnings;
    }
    void Cal_Bonus()
    {
        bonus=(earnings)*0.1;
    }

    void show()
    {
        if (earnings >2000)
        {
            cout<<name<<endl;
            cout<<"your bonus is:"<<bonus<<endl;
        }
        else
        {
            cout<<"Name:"<<name<<endl;
            cout<<"you dont have bonus"<<endl;
        }
        
    }
};

int main()
{
    employee e1;
    e1.input();
    e1.Cal_Bonus();
    e1.show();
}