#include<iostream>
#include<string.h>

using namespace std;

class employee
{ 
    int emp_id[10];
    string emp_name[10];
    int age[10];

    public:

    employee(int id,int i,string name,int age)
    {
        this->emp_id[i]=id;
        this->emp_name[i]=name;
        this->age[i]=age;

    }

    void find()
    {
        for (int i = 0; i < 3; i++)
        {
            
            cout<<emp_id[i]<<endl;
        
        }
        
    }

};

int main()
{
    int id;
    string name;
    int a;
    int key;
  

    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<"enter id"<<endl;
    //     cin>>id;
    //     cout<<"enter name"<<endl;
    //     cin>>name;
    //     cout<<"enter a"<<endl;
    //     cin>>a;
    //     employee e1(id,i,name,a);
    // }
    
    cout<<"enter key"<<endl;
    cin>>key;


    // cout<<"The element is found at "<<k<<endl;

}