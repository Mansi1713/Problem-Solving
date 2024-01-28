#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
int countChar(char *str,char ch)
{
   
    int icnt=0;
    while (*str!='\0')
    {
        if (*str==ch)
        {
              icnt++;
        }
        
        str++;
    }
    return icnt;
   
}
int main()
{
    char arr[20],ch;
    int iret=0;
    printf("Enter the String");
    scanf("%[^'\n']s",arr);
    printf("Enter the charcter");
    scanf(" %c",&ch);
    iret=countChar(arr,ch);
    printf("Characeter frequency %d",iret);
    return 0;
}