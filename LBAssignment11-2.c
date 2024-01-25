#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool ChkZero(int ino)
{
    int iDigit=0;
    if (ino < 0) {
        ino = -ino;  
    }
    while (ino>0)
    {
        iDigit=ino % 10 ;  
        if (iDigit == 0)
        {
            return TRUE;
            break;
        }
       ino=ino/10; 
    }
 
}
int main()
{
    int ivalue=0;
    bool bret=FALSE;
    printf("Enter number");
    scanf("%d",&ivalue);

    bret=ChkZero(ivalue);
    if (bret==TRUE)
    {
       printf("It containsZero");
    }
    else
    {
        printf("There is no zero");
    }
    return 0;
}

