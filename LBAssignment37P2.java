import java.util.*;
class LBAssignment37P2
{
    public static boolean CheckBit(int iNo)
    {
         int iMask=0x00040010;
        int iresult=0;
        iresult=iNo &iMask;
        if (iresult==iMask) {
            
           return true;
        }
        else
        {
            return false;
        }

    }
    public static void main(String[] args) {
        
        Scanner sc =new Scanner (System.in);
        int iNo=0;
        Boolean bret=false;
        int  iDigit=0;
       
        System.out.println("Enter number:");
        iNo=sc.nextInt();
        bret=CheckBit(iNo);
        if (bret==true) {
            
              System.out.println("5 and 18 bit is on..");
        }
        else{
            
              System.out.println(" Bits are off..");
        }


        

        
    }
}