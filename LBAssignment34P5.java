import java.util.*;

class LBAssignment34P5
{
    public static int Multiplication(int iNO)
    {
        int idigit = 0;
        int iesum = 0;
        int iosum=0;

        while(iNO != 0)
        {
           
            idigit=iNO % 10;
            if (( idigit % 2)==0) {
                
                iesum=iesum+idigit; 
            }
            else
            {
                iosum=iosum+idigit;
            }
            iNO=iNO/10;
        }
        return iesum-iosum;
       
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