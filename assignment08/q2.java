import java.util.*;

class TataMotors
{
    String category;
    TataMotors(String a)
    {
         category=a;
    }

    String MOdelOfCategory()
    {
       

        if(category.equals("SUV"))
        {
            return "TATA SAFARI";
        }
        else if (category.equals("SEDAN"))
        {
            return "TATA INDIGO";
        }
        else if (category.equals("ECONOMY"))
        {
            return "TATA INDICA";
        }
        else if (category.equals("MINI"))
        {
            return "TATA NANO";

        }
        else
        {
            return "-1";
        }
    }
}


public class q2
{
    public static void main(String[] args)
    {
        Scanner sc =new Scanner(System.in);
        String cat;
        cat= sc.next();
        String model;
        TataMotors car =new TataMotors(cat);
        model=car.MOdelOfCategory();
        System.out.println(model);

    }
}