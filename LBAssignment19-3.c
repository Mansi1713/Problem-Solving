#include<stdio.h>
void Pattern(int irow,int icol)
{
    int i=0,j=0;
    char cvar='\0';
    char cvar1='\0';
    for ( i=1,cvar='A';i<=irow; i++,cvar++)
    {
        for ( j = 1,cvar1='A'; j <=icol; j++,cvar1++)
        {
           printf("%c\t",cvar);
            
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
