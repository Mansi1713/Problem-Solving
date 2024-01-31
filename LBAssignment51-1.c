#include<stdio.h>
void Display()
{

    static int icnt=0;
    if (icnt<5)
    {
        printf("*\t");
        icnt++;
        Display(5);
    }
    
}
int main()
{
    Display();
    return 0;
}