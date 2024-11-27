#include<iostream>
#include<string.h>

using namespace std;

class school
{

   public:

   string name;
   int roll_number;
   int subject_code;
   string subject_name;
   int internal_marks;
   int external_marks;

   school()
   {
    cout<<"enter the name"<<endl;
      cin>>this->name;
      cout<<"enter the roll number"<<endl;
      cin>>this->roll_number;
      cout<<"enter the subject code "<<endl;
      cin>>this->subject_code;
      cout<<"enter the subject name"<<endl;
      cin>> this->subject_name;
      cout<<"enter the internal marks"<<endl;
      cin>> this->internal_marks;
      cout<<"enter the external marks"<<endl;
      cin>> this->external_marks;

   }


   inline void display();
   

   school(int roll_number,int subject_code, int internal_marks,int external_marks)
   {

    cout<<"enter the name"<<endl;
      cin>>this->name;
      cout<<"enter the subject name"<<endl;
      cin>>this->subject_name;
      this->roll_number=roll_number;
      this->subject_code=subject_code;
      this->internal_marks=internal_marks;
      this->external_marks=external_marks;
   }

   school( school&e)
   {

      cout<<"this is a copy constructor"<<endl;
      this->name=e.name;
      this->roll_number =e.roll_number;
      this->subject_code=e.subject_code;
      this->subject_name=e.subject_name;
      this->internal_marks=e.internal_marks;
      this->external_marks=e.external_marks;
   }

   ~school()
   {
      cout<<"this is a destructor"<<endl;
   }

    
};

void school ::display()
{
    
    cout<<"this is the name" <<""<< this->name <<endl;
    cout<<"this is the roll number  " <<  ""<< this->roll_number <<endl;
    cout<<"this is the subject code" <<""<< this->subject_code <<endl;
    cout<<"this is the subject name " << ""<<this->subject_name<<endl;
    cout<< "this is the internal marks " <<""<<this->internal_marks<<endl;
    cout<<"this is the external marks" <<""<< this->external_marks <<endl;
    
}

int main()
{
    school e1;
    e1.display();
    school e2(2344587,234,20,100);
    e2.display();
    school e3(e2);
    e3.display();

    return 0;
}