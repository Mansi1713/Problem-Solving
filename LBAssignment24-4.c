#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool chkSmall(char cvalue)
{
   int icnt=0;
    if (cvalue>='a' && cvalue<='z')
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
    char cValue='\0';
    bool bret=FALSE;
    printf("Enter the character");
    scanf("%c",&cValue);
    bret=chkSmall(cValue);
    if (bret == TRUE)
    {
        printf("It is small case  character");
    }
    else
    {
         printf("It is not a small case  character");
    }
       return 0;
}