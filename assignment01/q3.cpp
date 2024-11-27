#include<iostream>
#include<string.h>

using namespace std;

class employee
{

   public:

   string name;
   int code;
   string designation;
   int yoe;
   int age;

   employee()
   {
    cout<<"enter"<<endl;
      cin>>this->name;
      cout<<"enter"<<endl;
      cin>>this->age;
      cout<<"enter"<<endl;
      cin>>this->code;
      cout<<"enter"<<endl;
      cin>> this->designation;
      cout<<"enter"<<endl;
      cin>> this->yoe;

   }


   inline void display();
   

   employee(int code,int yoe, int age)
   {

    cout<<"enter"<<endl;
     cin>> this->name;
     cout<<"enter"<<endl;
     cin>> this->designation;
     this->code=code;
     this->yoe=yoe;
     this->age=age;
   }

   employee( employee &e)
   {
      this->name=e.name;
      this->age =e.age;
      this->code=e.code;
      this->designation=e.designation;
      this->yoe=e.yoe;

      cout<<"this is a copy constructor \n"<<endl;
   }

   ~employee()
   {
      cout<<"this is a destructor"<<endl;
   }

   // friend void get(employee &e);

    
};

void employee ::display()
{
    
    cout<<"this is the output" <<""<< this->name <<endl;
    cout<<"this is the output  " <<  ""<< this->code <<endl;
    cout<<"this is the output" <<""<< this->designation <<endl;
    cout<<"this is the output " << ""<<this->yoe<<endl;
    cout<< "this is the output " <<""<<this->age<<endl;
}

int main()
{
    employee e1;
    e1.display();
    employee e2(23445,15,43);
    e2.display();
    employee e3(e2);
    e3.display();

    return 0;
}