#include<stdio.h>
void Display()
{
    static char ch='A';
    static int icnt=1;
    if (icnt<=6)
    {
        printf("%c \t",ch);
        ch++;
        icnt++;
        Display(6);
    }
    
}
int main()
{
    Display(6);
    return 0;
}