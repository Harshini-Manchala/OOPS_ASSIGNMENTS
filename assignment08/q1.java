import java.util.Scanner;

class DrivingClass
{
    double total_mile;
    int cost_P_gallon;
    double average_fees;
    double tolls;
    Scanner sc = new Scanner(System.in);
    public void SetData()
    {
        System.out.println("enter total miles tarveled in a day");
        total_mile=sc.nextDouble();
        System.out.println("enter cost per gallon of gasoline");
        cost_P_gallon=sc.nextInt();
        System.out.println("enter tolls per day");
        tolls=sc.nextDouble();

        
        average_fees=(total_mile*cost_P_gallon)+tolls;

    }
    public void display()
    {
        System.out.println("The amount of money spent per day is" + average_fees);
    }

}

public class q1
{
    public static void main(String args[])
    {
        DrivingClass a=new DrivingClass();
        a.SetData();
        a.display();
       
    }
}