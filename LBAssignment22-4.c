#include<stdio.h>
void Pattern(int irow,int icol)
{
    int i=0,j=0,icnt=1,icnt1=0,icnt2=1;
    for ( i=1;i<=irow; i++)
    {
        for ( j = 1; j <=icol; j++)
        {

          if ((i==1 && j==1) || (i==1 && j==2)||(i==1 && j==3)||(i==1 && j==4)||(i==1 && j==5) || (i==1 && j==6)||(i==2 && j==1)||(i==3 && j==1)||(i==4 && j==1) || (i==5 && j==1)||(i==6 && j==1)||(i==6 && j==2)||(i==6 && j==3) || (i==6 && j==4)||(i==6 && j==5)||(i==6 && j==6)||(i==2 && j==2) || (i==3 && j==3)||(i==4 && j==4)||(i==5 && j==5)||(i==2 && j==6) || (i==3 && j==6)||(i==4 && j==6)||(i==5 && j==6))
          {
             printf("*\t");
          }
         else
         {
           printf(" \t");   
         }
        
    }
    printf("\n");
    }
}

int main()
{
    int ivalue1=0,ivalue2=0;
    printf("Enter number of rows and columns");
    scanf("%d",&ivalue1);
    scanf("%d",&ivalue2);
    Pattern(ivalue1,ivalue2);
} 
