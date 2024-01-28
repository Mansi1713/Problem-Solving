#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool chkSpecial(char cvalue)
{
   int icnt=0;
   if ((cvalue =='!') || (cvalue=='@') || (cvalue=='#') || (cvalue=='%') || (cvalue=='^') || (cvalue=='*') || (cvalue=='&'))
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
    bret=chkSpecial(cValue);
    if (bret == TRUE)
    {
        printf("It is a special character");
    }
    else
    {
         printf("It is not a special character");
    }
       return 0;
}