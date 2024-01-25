#include<stdio.h>
void RangeDisplayEven(int iStart,int iEnd)
{
    int i=0;
    if (iStart>iEnd)
    {
        printf("Invalid Range..");
    }
    
    for ( i = iStart; i <=iEnd; i++)
    {
       if (i%2==0)
       {
         printf("%d\t",i);
       }
        
    
    }
    
}
int main()
{
    int iValue1=0,ivalue2=0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&ivalue2);

    RangeDisplayEven(iValue1,ivalue2);
    return 0;
}
//Time complexity//
//o(n)