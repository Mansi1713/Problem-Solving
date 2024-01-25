#include<stdio.h>
int CountFour(int ino)
{
    int idigit=0;
    int icnt=0;
    while (ino!=0)
    {
        idigit=ino%10;
        if (idigit==4)
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
    iRet=CountFour(iValue);
    printf("%d",iRet);
    
}