#include<stdio.h>
void Pattern(int irow,int icol)
{
    int i=0,j=0,icnt=1,icnt1=0,icnt2=1;
    for ( i=1;i<=irow; i++)
    {
        for ( j = 1; j <=icol; j++)
        {

          if ((i==4 && j==1) || (i==1 && j==4)||(i==2 && j==3)||(i==3 && j==2))
          {
             printf("#\t");
          }
          else if ((i==2 && j==4) || (i==3 && j==4)||(i==4 && j==4)||(i==3 && j==3) ||(i==4 && j==2)||(i==4 && j==3))
          {
             printf("@\t"); 
          }
         else
         {
           printf("*\t",j);   
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
