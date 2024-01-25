#include<stdio.h>
float Percentage(int imarks,int itotal)
{

    float fpercent=0.0f;
    if(imarks>itotal)//filter
    {
        printf("Invalid input..");
        return fpercent;
    }
    fpercent=(((float)imarks / (float)itotal) * 100);
    return fpercent;
}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0f;
    printf("Please enter marks");
    scanf("%d",&iValue1);
    printf("Please enter total marks");
    scanf("%d",&iValue2);
    fRet=Percentage(iValue1,iValue2);
    printf("The percentage is %f",fRet);    
    return 0;
}