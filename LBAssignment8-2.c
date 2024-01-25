#include<stdio.h>
int DollarTOINR(int ino)
{
   int idollr=0;
   idollr=ino*70;
   return idollr;
}
int main()
{
    int ivalue=0,iRet=0;

    printf("Enter number of USD");
    scanf("%d",&ivalue);

    iRet=DollarTOINR(ivalue);
    printf("value in INR is %d",iRet);
    return 0;
}