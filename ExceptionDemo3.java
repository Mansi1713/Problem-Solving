import java.util.*;

class Demo{

    public void Division() throws ArithmeticException
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter First number");
        int no1=sobj.nextInt();

        System.out.println("Enter Second number");
        int no2=sobj.nextInt();

        int iAns=0;
        iAns=no1/no2;
        System.out.println("Division is "+iAns);        

    }
}
public class ExceptionDemo3 {
    public static void main(String[] args) {
        
        Demo dobj=new Demo();
        try {
            System.out.println("Inside try");
            dobj.Division();

        } 
        catch(ArithmeticException obj) {
    
            System.out.println("Arithemetic exxception"+obj);
        }
        finally
        {
            System.out.println("Inside finnally...");
        }
        
}
}