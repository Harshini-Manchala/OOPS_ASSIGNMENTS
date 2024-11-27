#include<iostream>
#include<string.h>

using namespace std;

class school
{


   int accession_number;
   string name_of_the_auther;
   string title_of_book;
   int year_of_publication;
   string publishers_name;
   int cost;

   school()
   {
    cout<<"enter the accession_number"<<endl;
      cin>>this->accession_number;
      cout<<"enter the name_of_the_auther"<<endl;
      cin>>this->name_of_the_auther;
      cout<<"enter the title_of_book "<<endl;
      cin>>this->title_of_book;
      cout<<"enter the year_of_publication "<<endl;
      cin>> this->year_of_publication;
      cout<<"enter thepublishers_name "<<endl;
      cin>> this->publishers_name;
      cout<<"enter the cost "<<endl;
      cin>> this->cost;

   }


   inline void display();
   

   school(int accession_number,int year_of_publication, int cost)
   {

    cout<<"enter the name_of_the_auther"<<endl;
      cin>>this->name_of_the_auther;
      cout<<"enter the title_of_book"<<endl;
      cin>>this->title_of_book;
      cout<<"enter the publishers_name"<<endl;
      cin>>this->publishers_name;
      this->accession_number=accession_number;
      this->year_of_publication=year_of_publication;
      this->cost=cost;
      
   }

   school( school&e)
   {

      cout<<"this is a copy constructor"<<endl;
      this->accession_number=e.accession_number;
      this->name_of_the_auther =e.year_of_publication;
      this->title_of_book=e.title_of_book;
      this->year_of_publication=e.year_of_publication;
      this->publishers_name=e.publishers_name;
      this->cost=e.cost;
   }

   ~school()
   {
      cout<<"this is a destructor"<<endl;
   }

    
};

void school ::display()
{
    
    cout<<"this is the name" <<""<< this->accession_number <<endl;
    cout<<"this is the roll number  " <<  ""<< this->name_of_the_auther <<endl;
    cout<<"this is the subject code" <<""<< this->title_of_book <<endl;
    cout<<"this is the subject name " << ""<<this->year_of_publication<<endl;
    cout<< "this is the internal marks " <<""<<this->publishers_name<<endl;
    cout<<"this is the external marks" <<""<< this->cost<<endl;
    
}

int main()
{
    school e1;
    e1.display();
    school e2(234,20,100);
    e2.display();
    school e3(e2);
    e3.display();

    return 0;
}