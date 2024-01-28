#include<stdio.h>
void Pattern(int irow,int icol)
{
    int i=0,j=0;
    for (int i = 0; i < irow; i++)
     {
        for (int j = 0; j <icol; j++) 
        {
            if (i>=j)
            {
               printf("*\t");
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
