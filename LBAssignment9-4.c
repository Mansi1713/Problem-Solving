#include<stdio.h>
double FptoCS(float fTemp)
{
   double dcelcius=0.0f;
   dcelcius=(fTemp-32)*5/9;
   return dcelcius;
}
int main()
{
    int fvalue=0.0f;
    double dRet=0.0f;
    printf("Enter temperature in Faherheit");
    scanf("%d",&fvalue);

    dRet=FptoCS(fvalue);
    printf("%f",dRet);
    return 0;
}