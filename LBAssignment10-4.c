#include<stdio.h>
int RangeSumEven(int iStart,int iEnd)
{
    int i=0,isumrange=0;
    if (iStart<0)
    {
        printf("Invalid Range..");
    }
    
    if (iStart>iEnd)
    {
        printf("Invalid Range..");
    }
    
    for ( i = iStart; i <=iEnd; i++)
    {
       if (i%2==0)
       {
         isumrange=isumrange+i;
       }
        
    }
     return isumrange;    
}
int main()
{
    int iValue1=0,ivalue2=0,iRet=0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&ivalue2);

    iRet=RangeSumEven(iValue1,ivalue2);

    printf("Addition is %d",iRet);
    return 0;
}

//Time complexity//
//o(n)