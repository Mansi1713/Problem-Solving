import java.util.*;
class LBAssignment32P3
{
    public static int countDiff(String str)
    {
        int iCnt=0;
        int iCount=0;
        int scnt=0;
        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
            else
            {
                     scnt++;
            }
        }
        return iCount-scnt;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter the String: ");
        str = sobj.nextLine();
        int iret=0;
        iret=countDiff(str);    
        System.out.println("Difference is :"+iret);   
        sobj.close();
    }
}