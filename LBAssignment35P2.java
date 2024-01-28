import java.util.Scanner;
class LBAssignment35P2 {

    public static int Firstoccr(int Brr[],int ino)
    {
         int iCnt=0;
         for(iCnt=0;iCnt<Brr.length;iCnt++)
         {
            if (Brr[iCnt]==ino) {

                return iCnt;
                
            }
            else
            {
                return -1;
            }
         } 
        return -1;

        
    }
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        int iSize = 0, iCnt = 0;
        int iret=0;

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
        iret=Firstoccr(Arr, ino);
        System.out.println("Index of No is"+iret);

        
    }
}