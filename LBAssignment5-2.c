#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    int icnt=0;
    if (iNo>100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
    
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("please enter the number");
    scanf("%d",&iValue);
    bRet=ChkGreater(iValue);
    if (bRet==TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    
}