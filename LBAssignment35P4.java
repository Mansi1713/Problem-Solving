import java.util.Scanner;
class LBAssignment35P4 {

    public static void Range(int Brr[],int istart,int iend)
    {
         int iCnt=0;
         int Lastoccr=0;
         for(iCnt=0;iCnt<Brr.length;iCnt++)
         {
            if ((Brr[iCnt]>=istart)&&(Brr[iCnt]<=iend)) {
                
                System.out.println("\n"+Brr[iCnt]);
            }
         }
        
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
        System.out.println("Enter the start NO:");
        int ino=sobj.nextInt();

        System.out.println("Enter the end NO:");
        int end=sobj.nextInt();
        Range(Arr, ino, end);
        
        

        
    }
}