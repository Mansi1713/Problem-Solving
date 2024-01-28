#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool chkVowel(char *str)
{
   int icnt=0;
   while (*str!='\0')
   {
    if (*str=='a' || *str=='e' || *str=='i' || *str=='o' ||*str=='u')
    {
        return TRUE;
     
        icnt++;
    }  
    str++; 
   }
   
 
  
}
int main()
{
    char arr[20];
    bool bret=FALSE;
    printf("Enter the String");
    scanf("%[^'\n']s",arr);
    bret=chkVowel(arr);
    if (bret == TRUE)
    {
        printf("contains vowel ");
    }
    else
    {
         printf("there is no vowel..");
    }
       return 0;
}