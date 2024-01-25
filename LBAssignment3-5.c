#include<stdio.h>
#include<stdbool.h>
# define TRUE 1
# define FALSE 0
bool ChkVowel(char cvalue)
{
   if(cvalue == 'a' || cvalue == 'e' || cvalue == 'i' || cvalue == 'o' || cvalue == 'u' ||
        cvalue == 'A' || cvalue == 'E' || cvalue == 'I' || cvalue == 'O' || cvalue == 'U') 
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
    bool bRet=FALSE;
    printf("Enter charachter\n");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);
    if (bRet==TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    } 
    return 0;
}