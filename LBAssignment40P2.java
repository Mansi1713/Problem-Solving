import java.util.*;
class LBAssignment40P2
{
    public static void CountComman(int iNo,int iNo2)
    {
       int icnt=0;
       
       while (iNo!=0) {
        
            icnt+=iNo&1;
            iNo>>=1;
       }
       System.out.println(icnt);
       int icnt2=0;
       while (iNo2!=0) {
        
         icnt2+=iNo2&1;
         iNo2>>=1;
        }
        
        System.out.println(icnt2);
       } 

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iNo1 = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        CountComman(iNo,iNo1);
    
      
    }
}