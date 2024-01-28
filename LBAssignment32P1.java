import java.util.*;
class LBAssignment32P1
{
    public static int CountCaptial(String str)
    {
        int iCnt=0;
        int iCount=0;
        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter the String: ");
        str = sobj.nextLine();
        int iret=0;
        iret=CountCaptial(str);    
        System.out.println("Captial letters are:"+iret);   
        sobj.close();
    }
}