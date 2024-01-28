import java.util.Scanner;
class LBAssignment35P5 {

    public static int Product(int Brr[])
    {
         int iCnt=0;
         int iproduct=1;
         for(iCnt=0;iCnt<Brr.length;iCnt++)
         {
           if (Brr[iCnt]%2!=0) {
            
             iproduct=iproduct*Brr[iCnt];
           }
         }
         return iproduct;
        
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
        iret=Product(Arr);
        System.out.println(iret);       
        

        
    }
}