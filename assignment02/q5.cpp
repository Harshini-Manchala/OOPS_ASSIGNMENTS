#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
    string Employee_name;
    int Employee_code;
    string designation;
    int acc_no;
    int date_oj;
    int Basic_pay;
    int DA;
    int HRA;
    int CCA,PPF,GPF,CPF,LIC,NSS,NSC;

    public:
    Employee()
    {
        cout<<"enter employee mname"<<endl;
        cin>>Employee_name;
        cout<<"enter employee code"<<endl;
        cin>>Employee_code;
        cout<<"Enter desigmaton"<<endl;
        cin>>designation;
        cout<<"Enter account no"<<endl;
        cin>>acc_no;
        cout<<"Enter basic pay"<<endl;
        cin>>Basic_pay;
        cout<<"Enter DA"<<endl;
        cin>>DA;
        cout<<"Enter HRA"<<endl;
        cin>>HRA;
        cout<<"Enter CCa"<<endl;
        cin>>CCA;
        cout<<"Enter PPf"<<endl;
        cin>>PPF;
        cout<<"Enter GPF"<<endl;
        cin>>GPF;
        cout<<"Enter cpf"<<endl;
        cin>>CPF;
        cout<<"Enter lic"<<endl;
        cin>>LIC;
        cout<<"Enter nss"<<endl;
        cin>>NSS;
        cout<<"Enter nsc"<<endl;
        cin>>NSC;
        
    }
    friend void Employee_personal(Employee &s)
    {
        cout<<"tihs is a friend function"<<endl;
        cout<<"this is employee name  "<<s.Employee_name<<endl;
        cout<<"this is doj  "<<s.date_oj<<endl;
    
    }
    inline void show();
    
    ~Employee()
    {
        cout<<"this is a Destrustor"<<endl;
    }

};

void Employee:: show()
{
        cout<<"This is the output"<<endl;
        cout<<this->Employee_name<<endl;
        cout<<this->Employee_code<<endl;
        cout<<this->designation<<endl;
        cout<<this->acc_no<<endl;
        cout<<this->date_oj<<endl;
        cout<<this->Basic_pay<<endl;
        cout<<this->DA<<endl;
        cout<<this->HRA<<endl;
        cout<<this->CCA<<endl;
        cout<<this->PPF<<endl;
        cout<<this->GPF<<endl;
        cout<<this->CPF<<endl;
        cout<<this->LIC<<endl;
        cout<<this->NSS<<endl;
        cout<<this->NSC<<endl;
       
    }


int main()
{
    Employee *s=new Employee;
    s->show();
    Employee_personal(*s);

}