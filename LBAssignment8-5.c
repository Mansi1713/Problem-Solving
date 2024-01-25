#include<stdio.h>
int  diffFactorial(int ino)
{
    int iefact=1,iofact=1,icnt=0,ifactdiff=0;
    if (ino<0)
    {
        ino=-ino;
    }
    
    for ( icnt = 1; icnt <=ino; icnt++)
    {
        if ((icnt%2==0))
        {
            iefact=iefact*icnt;
        }
        else 
        {
            iofact=iofact*icnt;
        }
           
    }    
    ifactdiff=iefact-iofact;
    return ifactdiff;
}    
int main()
{
    int ivalue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet=diffFactorial(ivalue);

    printf("Factorial of numberis %d",iRet);
    return 0;
}
//time complexity
//o(n)//