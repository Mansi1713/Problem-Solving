#include<stdio.h>
void Display(char cvalue)
{
   int icnt=0;
   for (icnt= cvalue; icnt <= 'Z'; icnt++)
   {
      printf("%c\t",icnt);
   }
   for (icnt= cvalue; icnt >= 'a'; icnt--)
   {
      printf("%c\t",icnt);
   }
   
}
int main()
{
    char cValue='\0';
    printf("Enter the character");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}