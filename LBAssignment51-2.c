#include<stdio.h>
void Display()
{
    static int icnt=1;
    if (icnt<=5)
    {
        printf("%d\t",icnt);
        icnt++;
        Display(5);
    }
    
}
int main()
{
    Display();
    return 0;
}