import java.util.*;
class LBAssignment32P4
{
    public static boolean checkVowel(String str)
    {
        int iCnt=0;
        int iCount=0;
        int scnt=0;
        char Arr[] = str.toCharArray();

        for(iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e')||((Arr[iCnt] == 'i')||(Arr[iCnt] == 'o'))||(Arr[iCnt] == 'u'))
            {
                return true;
            }
          
        }
        return false;
       
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter the String: ");
        str = sobj.nextLine();
        boolean bret=false;
        bret=checkVowel(str);    
        if (bret==true) {
        System.out.println("contains vowel:"); 
        }  
        else
        {}
        sobj.close();
    }
}