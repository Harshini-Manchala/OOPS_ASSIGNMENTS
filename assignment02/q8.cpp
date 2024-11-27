#include<iostream>
#include<string.h>
using namespace std;

class Details
{
    string name;
    int dob;
    string Blood_group;
    int HEight;
    int Weight;
    int IPN;
    int Phone_no;
    string address;
    int Driving_licence_no;

    public:
    Details()
    {
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter employee code"<<endl;
        cin>>dob;
        cout<<"Enter blood group"<<endl;
        cin>>Blood_group;
        cout<<"Enter height"<<endl;
        cin>>HEight;
        cout<<"Enter Weight"<<endl;
        cin>>Weight;
        cout<<"Enter IPN"<<endl;
        cin>>IPN;
        cout<<"Enter contact address"<<endl;
        cin>>address;
        cout<<"Enter phone number"<<endl;
        cin>>Phone_no;
        cout<<"Enter dlm"<<endl;
        cin>>Driving_licence_no;
        
    }
    friend void personal(Details &s)
    {
        cout<<"tihs is a friend function"<<endl;
        cout<<"this is employee name  "<<s.name<<endl;
        cout<<"this is doj  "<<s.dob<<endl;
    
    }
    inline void show();
    
    ~Details()
    {
        cout<<"this is a Destrustor"<<endl;
    }

};

void Details :: show()
{
        cout<<"This is the output"<<endl;
        cout<<this->name<<endl;
        cout<<this->dob<<endl;
        cout<<this->Blood_group<<endl;
        cout<<this->HEight<<endl;
        cout<<this->Weight<<endl;
        cout<<this->IPN<<endl;
        cout<<this->address<<endl;
        cout<<this->Phone_no<<endl;
        cout<<this->Driving_licence_no<<endl;

    }


int main()
{
    Details *s=new Details;
    s->show();
    personal(*s);

}