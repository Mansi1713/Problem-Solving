import java.util.*;

public class ExceptionDemo1X {
    public static void main(String[] args) {
        

    Scanner sobj=new Scanner(System.in);

        System.out.println("Enter First number");
        int no1=sobj.nextInt();

        System.out.println("Enter Second number");
        int no2=sobj.nextInt();

         int iAns=0;
         try
         {
         System.out.println("Inside try block..");   
         iAns=no1/no2;
         }
         catch(ArithmeticException obj)
         {
            System.out.println("Inside catch block"+obj);
         }
         catch(ArrayIndexOutOfBoundsException obj)
         {
            System.out.println("Array indexout of bound exception"+obj);
         }
         catch(Exception obj)
         {
            System.out.println("Inside generic catch");
         }
         finally
         {
            System.out.println("Inside finnaly block..");
         }
         System.out.println("Division is :"+iAns);
    
}
}