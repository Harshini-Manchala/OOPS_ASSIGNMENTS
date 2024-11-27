#include<iostream>
#include<string>
using namespace std;

class Employee
{ 
    int emp_id[10];
    string emp_name[10];
    int emp_age[10];
    
public:
    Employee() 
    {
        
        for(int i = 0; i < 3; i++)
        {
            emp_id[i] = -1; 
            emp_name[i] = "";
            emp_age[i] = 0;
        }
    }
    
    void setEmployee(int id, int i, string name, int age)
    {
        emp_id[i] = id;
        emp_name[i] = name;
        emp_age[i] = age;
    }

    int find(int key)
    {
        for (int i = 0; i < 3; i++)
        {
            if(emp_id[i] == key)
            {
                cout << "Employee found: ID = " << emp_id[i] << ", Name = " << emp_name[i] << ", Age = " << emp_age[i] << endl;
                return emp_id[i];
            }
        }
        cout << "Employee not found" << endl;
        return -1;
    }
};

int main()
{
    int id;
    string name;
    int age;
    int key;
    
    Employee e1;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        
        e1.setEmployee(id, i, name, age);
    }
    
    cout << "Enter ID to search: ";
    cin >> key;

    e1.find(key);

    return 0;
}
