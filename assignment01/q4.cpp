#include<iostream>
#include<string.h>

using namespace std;

class hospital
{

   public:

   string name;
   string sex;
   int age;
   int ward_number;
   int bedNumber;
   string nature_of_illness;
   int date_of_admission;

   hospital()
   {
    cout<<"enter the name"<<endl;
      cin>>this->name;
      cout<<"enter the sex"<<endl;
      cin>>this->sex;
      cout<<"enter the age"<<endl;
      cin>>this->age;
      cout<<"enter the ward number"<<endl;
      cin>> this->ward_number;
      cout<<"enter the bed number"<<endl;
      cin>> this->bedNumber;
      cout<<"enter the illness"<<endl;
      cin>> this->nature_of_illness;
      cout<<"enter the date of admission"<<endl;
      cin>> this->date_of_admission;

   }


   inline void display();
   

   hospital(int age,int ward_number, int bedNumber)
   {

    cout<<"enter the name"<<endl;
      cin>>this->name;
      cout<<"enter the sex"<<endl;
      cin>>this->sex;
      cout<<"enter the illness"<<endl;
      cin>> this->nature_of_illness;
      cout<<"enter the date of admission"<<endl;
      cin>> this->date_of_admission;
      this->age=age;
      this->ward_number=ward_number;
      this->bedNumber=bedNumber;
   }

   hospital( hospital&e)
   {

      cout<<"this is a copy constructor"<<endl;
      this->name=e.name;
      this->age =e.age;
      this->sex=e.sex;
      this->ward_number=e.ward_number;
      this->bedNumber=e.bedNumber;
      this->nature_of_illness=e.nature_of_illness;
      this->date_of_admission=e.date_of_admission;

   }

   ~hospital()
   {
      cout<<"this is a destructor"<<endl;
   }

    
};

void hospital ::display()
{
    
    cout<<"this is the output" <<""<< this->name <<endl;
    cout<<"this is the output  " <<  ""<< this->sex <<endl;
    cout<<"this is the output" <<""<< this->age <<endl;
    cout<<"this is the output " << ""<<this->ward_number<<endl;
    cout<< "this is the output " <<""<<this->bedNumber<<endl;
    cout<<"this is the output" <<""<< this->nature_of_illness <<endl;
    cout<<"this is the output  " <<  ""<< this->date_of_admission <<endl;
    
}

int main()
{
    hospital e1;
    e1.display();
    hospital e2(23445,15,43);
    e2.display();
    hospital e3(e2);
    e3.display();

    return 0;
}