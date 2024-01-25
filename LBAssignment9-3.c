#include<stdio.h>
int KMtometer(int imeter)
{
    int ians=0;
    ians=imeter*1000;
    return ians;

}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter distance");
    scanf("%d",&iValue);
    iRet=KMtometer(iValue);
    printf("%d",iRet);
    return 0;
}