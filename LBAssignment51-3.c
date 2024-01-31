#include<stdio.h>
void Display()
{
    static  int icnt=5;
    if (icnt>=1)
    {
        printf("%d \t",icnt);
        icnt--;
        Display(icnt);
    }
    
}
int main()
{
    Display();
    return 0;
}