#include<stdio.h>
int CountOdd(int ino)
{
    int iDigit=0;
    int icnt=0;
    while (ino!=0)
    {
        iDigit=ino%10;
        if (iDigit%2!=0)
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

    iRet=CountOdd(iValue);
    printf("%d",iRet);
    return 0;
}