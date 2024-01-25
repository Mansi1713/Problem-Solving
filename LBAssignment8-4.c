#include<stdio.h>
int OddFactorial(int ino)
{
    int ifact=1,icnt=0;
    if (ino<0)
    {
        ino=-ino;
    }
    
    for ( icnt = 1; icnt <=ino; icnt++)
    {
        if (icnt%2!=0)
        {
            ifact*=icnt;
        }
        
    }
    return ifact;
    
}
int main()
{
    int ivalue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet=OddFactorial(ivalue);

    printf("Factorial of numberis %d",iRet);
    return 0;
}
//time complexity
//o(n)//