import java.util.*;
class LBAssignment32P5
{
    public static void StringRev(String str)
    {
        int iCnt=0;
        int iCount=0;
        int scnt=0;
        char Arr[] = str.toCharArray();

        for(iCnt= Arr.length-1;iCnt>=0;iCnt--)
        {
           System.out.println(Arr[iCnt]);
          
        }
       
       
    }
    public static void main(String Arg[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter the String: ");
        str = sobj.nextLine();
        int iret=0;
        StringRev(str);    
        
        sobj.close();
    }
}