import java.lang.reflect.Array;
import java.util.*;

class LBAssignment34P1
{
    public static int CountEven(int iNO)
    {
        int iCnt = 0, icount = 0,iosum=0;
        while (iNO!=0) {
            
            int idigit=iNO%10;
            if (iNO%2==0) {
                
                icount++;
            }
            iNO=iNO/10;
        }
        return icount;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iRet = 0;

         System.out.println("Enter the element");
         int element=sobj.nextInt();
         iRet=CountEven(element);
         System.out.println("\n"+iRet);
      

        sobj.close();
    
}
}