#include<stdio.h>
void Pattern(int irow,int icol)
{
    int i=0,j=0,k=0;
    for ( i=0;i<irow; i++)
    {
        for ( j = 0; j <irow-i; j++)
        {
           printf("*\t");
            
        }
        for ( k = 0; k <i; k++) {
            printf("#\t");
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
