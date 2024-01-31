import java.util.*;
class LBAssignment40P4
{
    public static Boolean Chkbit(int iNo)
    {
        int imask=0X00000001;
        int imask1=0X00000002;
        int iresult=0;
        iresult=iNo&imask;
        int iresult2=iNo&imask1;

        if (iresult==imask  || iresult2==imask1) {
            
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0,ipos1=0,ipos2=0;
         boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter pos 1 : ");
        ipos1 = sobj.nextInt();

        System.out.println("Enter pos 2 : ");
        ipos2 = sobj.nextInt();

        bRet = Chkbit(iNo);
    
        if (bRet==true) {
            
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("False");
        }
    }
}