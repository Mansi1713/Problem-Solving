import java.util.Scanner;

public class LBAssignment36P2 {

    public static boolean StrCmp(String src,String dest)
    {
        for(int i=0;i<src.length();i++)
        {
            for(int j=0;j<dest.length();j++)
            {
                if (src.charAt(i)==(dest.charAt(j))) {
                    
                    return true;
                }
            }
            
        }
        return false;

    }

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        Boolean bret=false;
        System.out.println("Enter the string one");
        String str1=sc.next();

        System.out.println("Enter the string two");
        String str2=sc.next();

        bret=StrCmp(str1, str2);
        System.out.println(bret);


    }
    
}