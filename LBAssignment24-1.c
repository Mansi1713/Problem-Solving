#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool chkAlpha(char cvalue)
{
   int icnt=0;
    if (cvalue>='A' && cvalue<='Z')
    {
        return TRUE;
    }
    else if (cvalue>='a' && cvalue<='z')
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
    bret=chkAlpha(cValue);
    if (bret == TRUE)
    {
        printf("It is a  character");
    }
    else
    {
         printf("It is not a  character");
    }
       return 0;
}