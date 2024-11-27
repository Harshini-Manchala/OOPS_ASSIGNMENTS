#include<iostream>

using namespace std;

class tax
{
    string Name;
    int income;
    float Tax_Due;
    public:
    void input()
    {
        cout<<"enter the name"<<endl;
        cin>>Name;
        cout<<"enter income"<<endl;
        cin>>income;

    }
    void cal_Tax()
    {
        if(income<=100000)
        {
            Tax_Due=0;
        }
        else if (income>100000 && income<=150000)
        {
            Tax_Due=0.1*(income-100000);
        }
        else if (income>=151001 && income<=200000)
        {
            Tax_Due=0.2*(income-150000);
        }
        else if (income>200000 )
        {
            Tax_Due=0.3*(income-200000);
        }
        
    }
    void output()
    {
    
        cout<<"Name:"<<Name<<endl;
        cout<<"Tax to be paid  is :"<<Tax_Due<<endl;
    }

};

int main()
{
    tax t1;
    t1.input();
    t1.cal_Tax();
    t1.output();

}