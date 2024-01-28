import java.util.Scanner;
class LBAssignment35P3 {

    public static int Lastoccr(int Brr[],int ino)
    {
         int iCnt=0;
         int Lastoccr=0;
         for(iCnt=0;iCnt<Brr.length;iCnt++)
         {
            if (Brr[iCnt]==ino) {

                Lastoccr=iCnt;
                
            }
         } 
        return  Lastoccr;

        
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
        iret= Lastoccr(Arr, ino);
        System.out.println("Index of Last occrance is"+iret);

        
    }
}