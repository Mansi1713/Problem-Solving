#include<stdio.h>
int FactDiff(int iNo)
{
    int icnt=0;
    int ifsum=0,ifnsum=0,diff=0;
    for(icnt = 1; icnt<iNo; icnt++)
    {
        if((iNo % icnt)!= 0)   // 4
        {
            ifnsum=ifnsum+icnt;
        }
    }
    for(icnt = 1; icnt<iNo; icnt++)
    {
        if((iNo % icnt)== 0)   // 4
        {
            ifsum=ifsum+icnt;
            
        }
     
    }
    diff=ifnsum-ifsum;
    return  diff;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("Difference of factors%d",iRet);
    return 0;

}