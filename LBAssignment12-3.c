#include<stdio.h>
int CountRange(int ino)
{
    int iDigit=0;
    int icnt=0;
    while (ino!=0)
    {
        iDigit=ino%10;
        if ((iDigit>3) && (iDigit<7))
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
    iRet=CountRange(iValue);
    printf("%d",iRet);
    return 0;
}