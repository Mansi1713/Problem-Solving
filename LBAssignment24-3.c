#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool chkDigit(char cvalue)
{
   int icnt=0;
    if (cvalue>='0' && cvalue<='9')
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
    bret=chkDigit(cValue);
    if (bret == TRUE)
    {
        printf("It is a  Digit");
    }
    else
    {
         printf("It is not a  Digit");
    }
       return 0;
}