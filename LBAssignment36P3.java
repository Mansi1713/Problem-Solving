import java.util.Scanner;

public class LBAssignment36P3 {

    public static Boolean StrNCmp(String src,String dest,int icnt)
    {

        for(int i=0;i<icnt;i++)
        {
            if (src.charAt(i)!=dest.charAt(i)) {
                return false;
                
            }
        }
        return true;
      
    }
        
    
    public static void main(String[] args) {
        
          Scanner sc=new Scanner(System.in);
        Boolean bret=false;
        System.out.println("Enter the string one");
        String str1=sc.next();

        System.out.println("Enter the string two");
        String str2=sc.next();

        System.out.println("Enter the count");
        int i=sc.nextInt();

        bret=StrNCmp(str1, str2,i);
        System.out.println(bret);
    }

    
}