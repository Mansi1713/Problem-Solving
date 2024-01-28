#include<stdio.h>
void Pattern(int irow,int icol)
{
    int i=0,j=0;
    int icnt=1; 
    for ( i=1;i<=irow; i++)
    {
        for ( j = i; j <=i+2;j++)
        {
            printf("%d\t", j);
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
