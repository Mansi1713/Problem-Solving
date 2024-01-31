import java.util.*;
class LBAssignment38P3
{
    public static int Togglebit(int iNo)
    {
         int iMask=0X00000040;
        int iresult=0;
        iresult=iNo ^iMask;
        return iresult;
    }
    public static void main(String[] args) {
        
        Scanner sc =new Scanner (System.in);
        int iNo=0;
        int iret=0;
        int  iDigit=0;
       
        System.out.println("Enter number:");
        iNo=sc.nextInt();
        iret=Togglebit(iNo);
        System.out.println("Updated is :"+iret);
    }
}