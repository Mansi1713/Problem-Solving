import java.util.Scanner;
class LBAssignment35P1 {

    public static boolean check(int Brr[],int ino)
    {
         int iCnt=0;
         for(iCnt=0;iCnt<Brr.length;iCnt++)
         {
            if (Brr[iCnt]==ino) {

                return true;
                
            }
         } 
         return false;


        
    }
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        int iSize = 0, iCnt = 0;
        boolean Bret=false;

        System.out.println("Enter the number of elements : ");
        iSize  = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        System.out.println("Enter the element NO:");
        int ino=sobj.nextInt();
        Bret=check(Arr, ino);
        if (Bret==true) {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

        
    }
}