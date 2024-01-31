import java.util.*;
class LBAssignment39P5
{
    public static int ToggleBit(int iNo)
    {
        int iMask = 0xF000000F;
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

        iRet = ToggleBit(iNo);
    
       System.out.println("Upadted :"+iRet);
    }
}