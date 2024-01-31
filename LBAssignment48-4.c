#include<stdio.h>
void Display(int ino)
{
    static char ch='A';
    static int icnt=0;
    if (icnt<ino)
    {
        printf("%c \t",ch);
        ch++;
        icnt++;
        Display(ino);
    }
    
}
int main()
{
    int ivalue=0;

    printf("Enter number");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}