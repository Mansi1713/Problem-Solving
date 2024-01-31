import java.util.*;
class Matrix
{
    public int Arr[][];
  
    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    protected void finalize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the elements : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Entered elements are : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    // Logic
    public Boolean  Chkidentity()
    {
        
         int i = 0, j = 0;
         for(i=Arr.length-1;i>=0;i--)
        {
         for( j=0;j<Arr[i].length;j++)
        {
          if((i==j && Arr[i][j]!=1)||(i!=j && Arr[i][j]!=0))
          {
            return false;
          }  
        }
        System.out.println(); 
        
       }     
       return true;
    }
}

class LBAssignment47P4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        Boolean bret=false;
        bret=mobj.Chkidentity();
        if(bret==true)
        {
         System.out.println("It is a identity matrix");
        }
        else
        {
            System.out.println("It is not a identity matrix");
            
        }
        mobj = null;
        System.gc();
    }
}
