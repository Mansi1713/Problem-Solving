import java.util.*;
class LBAssignment40P1
{
    public static int Countone(int iNo)
    {
       int cnt=0;
       while (iNo>0) {
        cnt+=iNo&1;
        iNo>>=1;

       }
       return cnt;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iRet = Countone(iNo);
    
       System.out.println("count :"+iRet);
    }
}