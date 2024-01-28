#include<stdio.h>

int CountDiff(int ino)
{
    int iDigit=0;
    int iesum=0;
    int iosum=0;
    int diff=0;
    while (ino!=0)
    {
        iDigit=ino%10;
        if (iDigit%2==0)
        {
            iesum=iesum+iDigit;
        }
        else 
        {
          iosum=iosum+iDigit;
        }
        ino=ino/10;
    }
    diff=iesum-iosum;
    return diff ;
}
int main()
{
    int ivalue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet=CountDiff(ivalue);
    printf("%d",iRet);

    return 0;
}