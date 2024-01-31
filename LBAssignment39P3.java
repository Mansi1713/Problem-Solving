import java.util.*;
class LBAssignment39P3
{
    public static int onchkBit(int iNo, int iPos)
    {
        int iMask = 0x00000001;
        iMask = iMask << (iPos -1);
        int iResult = 0;
        iResult=iMask & iNo;
        if (iResult==iMask) {
        
         return iNo;

        }
        else
        {
            return iNo^iMask;
        }
    
        
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

        iRet = onchkBit(iNo, iPos);
    
       System.out.println("Upadted :"+iRet);
    }
}