import java.util.Scanner;

public class LBAssignment36P4 {

    public static void strRevToogle(String str)
    {
        char sArr[]=str.toCharArray();
        for(int i=str.length()-1;i>=0;i--)
        {
            if ((sArr[i]>='a')&&(sArr[i]<='z'))
            {
                sArr[i]=(char)(sArr[i]-32);
                System.out.print(sArr[i]);
                
            }
            else if ((sArr[i]>='A')&&(sArr[i]<='Z')) {
                
                sArr[i]=(char)(sArr[i]+32);
                System.out.print(sArr[i]);
                
            }
        }

    }
     public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String sret=null;
        System.out.println("Enter the string");
        String str2=sc.next();
        strRevToogle(str2);
     }
    
}