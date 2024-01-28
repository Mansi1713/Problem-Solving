#include<stdio.h>
int MulDigits(int ino)
{
    int iDigit=0;
    int imul=1;
    while (ino!=0)
    {
        iDigit=ino%10;  
        if (iDigit!=0)
        {
          imul=imul*iDigit;
        }
        ino=ino/10;
    }
     return imul;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);

    iRet=MulDigits(iValue);
    printf("%d",iRet);
    return 0;
}