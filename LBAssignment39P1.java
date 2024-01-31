import java.util.*;
class LBAssignment39P1
{
    public static Boolean chkBit(int iNo, int iPos)
    {
        int iMask = 0x00000001;
        int iResult = 0;

        iMask = iMask << (iPos -1);
        
        iResult = iNo & iMask;

        if (iResult==iMask) {
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
        int iNo = 0, iPos = 0;
        Boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position : ");
        iPos = sobj.nextInt();

        bRet = chkBit(iNo, iPos);
    
        if (bRet==true) {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}