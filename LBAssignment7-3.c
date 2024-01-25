#include<stdio.h>
int Factorial(int ino)
{
    int ifact=1,icnt=0;
    for ( icnt = 1; icnt <=ino; icnt++)
    {
        ifact*=icnt;
       
        
    }
    return ifact;
    
}
int main()
{
    int ivalue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet=Factorial(ivalue);

    printf("Factorial of numberis %d",iRet);
    return 0;
}
//o(n)