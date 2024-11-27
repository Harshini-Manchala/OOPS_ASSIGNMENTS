package assignment07;

class employee
{
    String first_name;
    String last_name;
    double salary;

    employee()
    {
        first_name="\0";
        last_name="\0";
        salary=0;
    }
    public void SetData(String first_name,String last_name,double salary)
    {
        this.first_name=first_name;
        this.last_name=last_name;

        if(salary<0)
        {
            this.salary=0;
        }
        else{
            this.salary=salary;
        }
        
    }
    public void getData()
    {
        System.out.println("the first name is "+first_name);
        System.out.println("the last name is "+last_name);
        System.out.println("the salary is "+salary+"\n");
       
    }
    public void showSalary()
    {
        System.out.println("the salary of "+ first_name + " is "+salary+"\n");
    }
    public void getHike()
    {
        this.salary=this.salary+(this.salary*0.1);
    }

}


public class q3
{
    public static void main(String args[])
    {
        employee e1=new employee();
        e1.SetData("honey","roy",3456783);
        e1.getData();
        employee e2=new employee();
        e2.SetData("ram","krish",867980);
        e2.getData();

        e1.showSalary();
        e1.getHike();
        e1.showSalary();

        e2.showSalary();
        e2.getHike();
        e2.showSalary();


    }
}
