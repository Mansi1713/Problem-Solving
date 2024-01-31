import java.util.*;
class LBAssignment38P2
{
    public static int offBit(int iNo)
    {
         int iMask=0X00000240;
         int iresult=0;
         iresult=iMask & iNo;
         if (iMask==iresult) {
             iresult=iNo ^iMask;
             return iresult;
         }
         else
         {
             return iNo;
         }
    }
    public static void main(String[] args) {
        
        Scanner sc =new Scanner (System.in);
        int iNo=0;
        int iret=0;
        int  iDigit=0;
       
        System.out.println("Enter number:");
        iNo=sc.nextInt();
        iret=offBit(iNo);
        System.out.println("Updated is :"+iret);
    }
}