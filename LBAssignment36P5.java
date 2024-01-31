import java.util.Scanner;
public class LBAssignment36P5 {

    public static void strPallindrome(String str)
    {
        String rev="";
        //int i=0;
        char sArr[]=str.toCharArray();
        for(int i=str.length()-1;i>=0;i--)
        {
            rev =rev + str.charAt(i);
         
        }
        int i=0;
        if (str.charAt(i) == rev.charAt(i)) {
           
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("false");
        }
        
    }
     public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string");
        String str2=sc.next();
        strPallindrome(str2);
     }
    
}