import java.util.*;
class LBAssignment38P5
{
    public static int onbit(int iNo)
    {
         int iMask=0X00000008;
         int iresult=0;
         iresult=iMask & iNo;
         if (iMask!=iresult) {
            
           return iNo;
           
         }
         else
         {
               iresult=iNo ^iMask;
             return iresult;
         }
    }
    public static void main(String[] args) {
        
        Scanner sc =new Scanner (System.in);
        int iNo=0;
        int iret=0;
        int  iDigit=0;
       
        System.out.println("Enter number:");
        iNo=sc.nextInt();
        iret=onbit(iNo);
        System.out.println("Updated is :"+iret);
    }
}