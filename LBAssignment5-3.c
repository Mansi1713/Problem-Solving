#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkEqual(int ino1,int ino2)
{
    if(ino1==ino2)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    BOOL bRet=FALSE;
    printf("Please enter two numbers");
    scanf("%d%d",&ivalue1,&ivalue2);
    bRet=chkEqual(ivalue1,ivalue2);
    if (bRet==TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("NOt equal");
    }
     return 0;
}