#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
int LastChar(char *str,char ch)
{
   
    int icnt=0,lastoccr=0;
    while (*str!='\0')
    {
      for ( icnt = 0; icnt<=20; icnt++)
      {
        if (ch==*str)
        {
           lastoccr=icnt;
          
        }  
      str++;     
      } 
    }
     return lastoccr;
}
int main()
{
    char arr[20],ch;
    int iret=0;
    printf("Enter the String");
    scanf("%[^'\n']s",arr);
    printf("Enter the charcter");
    scanf(" %c",&ch);
    iret=LastChar(arr,ch);
    printf("Character location is :%d",iret);
    return 0;
}
