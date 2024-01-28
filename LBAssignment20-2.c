#include<stdio.h>
void Pattern(int irow,int icol)
{
    int i=0,j=0,icnt=1,icnt1=0,icnt2=1;
    for ( i=1;i<=irow; i++)
    {
        for ( j = 1; j <=icol; j++)
        {
            if (i % 2!=0)
            {
               icnt1=icnt1+2; 
               printf("%d\t",icnt1);
            }
            else
            {
                printf("%d\t",icnt2);
                icnt2=icnt2+2;

            }
            
        }
        icnt1=0;
        icnt2=1;
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
