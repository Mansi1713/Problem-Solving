import java.util.*;
class LBAssignment36P1
{
    public static String StrNCatx(String src,String dest,int icnt)
    {
        char arr[]=src.toCharArray();
        char arr1[]=dest.toCharArray();
        for(int i=0;i<=icnt;i++)
        {
            src=src+dest.charAt(icnt);
            
        }
       return src;
        
   
    }
    public static void main(String args[])
    {
       Scanner Sobj=new Scanner(System.in);

       String str1;
       String str2;
       String str3;
       System.out.println("Enter the first string");
       str1=Sobj.next();
       System.out.println("Enter the second string");
       str2=Sobj.next();
       System.out.println("Enter the value of n");
       int n=Sobj.nextInt();
       str3=StrNCatx(str1,str2,n);
       System.out.println(str3);
       

    }
}