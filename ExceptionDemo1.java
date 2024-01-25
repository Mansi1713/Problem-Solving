import java.util.*;
public class ExceptionDemo1 {

    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter First number");
        int no1=sobj.nextInt();

        System.out.println("Enter Second number");
        int no2=sobj.nextInt();

         int iAns=0;
         iAns=no1/no2;
         System.out.println("Division is :"+iAns);
    }
}