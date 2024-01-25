#include<stdio.h>
int Count(int ino)
{
    int idigit=0;
    int icnt=0;
    while (ino!=0)
    {
        idigit=ino%10;
        if (idigit<6)
        {
            icnt++;
        }
    ino=ino/10;
    }
    return icnt;

    
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);
    iRet=Count(iValue);
    printf("%d",iRet);
    
}