import java.util.*;

class LBAssignment33P1
{
    public static int Difference(int Brr[])
    {
        int iCnt = 0, iSum = 0,iosum=0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if (iCnt%2==0) {
                  iSum = iSum + Brr[iCnt];
                
            }
            else
            {
                iosum=iosum+Brr[iCnt];
            }
          
        }
        return iosum-iSum;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iRet = 0;

        System.out.println("Enter the number of elements : ");
        iSize  = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        iRet = Difference(Arr);

        System.out.println("subtraction of all elements is : "+iRet);

        sobj.close();
    }
}