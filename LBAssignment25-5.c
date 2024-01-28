#include<stdio.h>
void Display(char ch)
{
    printf("ASCII value of the chater is: %d\n",ch);
    printf("Octal value of the chater is: %o\n",ch);
    printf("Hex value of the chater is: %X\n",ch);
   
}
int main()
{
    char cValue='\0';
    printf("Enter the character");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}