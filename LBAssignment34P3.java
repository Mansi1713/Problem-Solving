import java.util.*;

class LBAssignment34P3
{
    public static int CountRange(int iNO)
    {
        int idigit = 0;
        int iCount = 0;

        while(iNO != 0)
        {
            idigit = iNO % 10;

            if((idigit >= 3)&&(idigit <= 7))
            {
                iCount++;
            }
            iNO = iNO / 10;
        }
        return idigit;
       
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iRet = 0;

         System.out.println("Enter the element");
         int element=sobj.nextInt();
         iRet=CountRange(element);
         System.out.println("\n"+iRet);
      

        sobj.close();
    
}
}