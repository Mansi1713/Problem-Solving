#include<stdio.h>
int SumofNonFact(int iNo)
{
    int icnt=0;
    int isum=0;
    for(icnt = 1; icnt<iNo; icnt++)
    {
        if((iNo % icnt)!= 0)   // 4
        {
            isum=isum+icnt;
        }
    }
    return isum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);

    iRet=SumofNonFact(iValue);
    printf("Sumation of Non factors of number are %d",iRet);
    return 0;

}