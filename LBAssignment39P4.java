import java.util.*;
class LBAssignment39P4
{
    public static int ToggleBit(int iNo, int iPos)
    {
        int iMask = 0x00000001;
        iMask = iMask << (iPos -1);
        int iResult = 0;
        return iNo^iMask;

    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iPos = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position : ");
        iPos = sobj.nextInt();

        iRet = ToggleBit(iNo, iPos);
    
       System.out.println("Upadted :"+iRet);
    }
}