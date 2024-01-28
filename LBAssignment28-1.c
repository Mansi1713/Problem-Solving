#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool chkChar(char *str,char ch)
{
   int icnt=0;
   while (*str!='\0')
   {
    if (*str==ch)
    {
        
        icnt++;
        return TRUE;
    }  
    str++; 
   }
   
}
int main()
{
    char arr[20],ch;
    bool bret=FALSE;
    printf("Enter the String");
    scanf("%[^'\n']s",arr);
    printf("Enter the charcter");
    scanf("% c",&ch);
    bret=chkChar(arr,ch);
    if (bret == TRUE)
    {
        printf("characeter found");
    }
    else
    {
         printf("characeter not found");
    }
       return 0;
}