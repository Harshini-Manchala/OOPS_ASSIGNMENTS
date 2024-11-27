package assignment07;


class invoice
{
    String num;
    String description;
    int quantity;
    int price;

    invoice()
    {
        num="0";
        description="0";
        quantity=0;
        price=0;
    }

    public void SetData(String num,String description,int quantity,int price)
    {
        this.num=num;
        this.description=description;

        if(quantity<0)
        {
            this.quantity=0;
        }
        else
        {
            this.quantity=quantity;
        }
        if(price<0)
        {
            this.price=0;
        }
        else
        {
            this.price=price;
        }

        System.out.println("Setdata is called\n");

    }

    public void getData()
    {
        System.out.println("the num is"+num);
        System.out.println("the description is"+description);
        System.out.println("the quantity is"+quantity);
        System.out.println("the price is"+price+"\n");

    }
    public void getInvoiceAmount()
    {
        System.out.println("the invoice amount is"+ quantity*price+"\n");
    }
}


public class q2
{
    public static void main(String args[])
    {
        invoice k = new invoice();
        k.SetData("244","rice",77,56);
        k.getData();
        k.getInvoiceAmount();

    }
}