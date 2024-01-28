import java.util.*;

class LBAssignment34P4
{
    public static int Multiplication(int iNO)
    {
        int idigit = 0;
        int iCount = 0;
        int imul=1;

        while(iNO != 0)
        {
           
            idigit = iNO % 10;
             if (idigit!=0) {
            imul=imul*idigit;
            
            }
            iNO = iNO / 10;     
           
        }
        return imul;
       
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iRet = 0;

         System.out.println("Enter the element");
         int element=sobj.nextInt();
         iRet=Multiplication(element);
         System.out.println("\n"+iRet);
      

        sobj.close();
    
}
}